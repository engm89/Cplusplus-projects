//
// Copyright 2004 Andras Varga
//
// This library is free software, you can redistribute it and/or modify
// it under  the terms of the GNU Lesser General Public License
// as published by the Free Software Foundation;
// either version 2 of the License, or any later version.
// The library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
// See the GNU Lesser General Public License for more details.
//

#ifndef __INET_SUPERCOMSERVERAPP_H
#define __INET_SUPERCOMSERVERAPP_H

#include <omnetpp.h>
#include "INETDefs.h"
#include <vector>
#include "CPU.h"
#include "RAMstick.h"
#include "Core.h"
#include "Cache.h"
#include "Fan.h"
#include "HardDisk.h"
#include "StatisticsCollector.h"
#include "PSU.h"
#include <InterfaceTable.h>
#include <PPP.h>
#include "NIC.h"
#include <algorithm>

/**
 * Server application for supercomputing. It serves requests coming in SuperComMsg
 * request messages. Clients are subclassed from TCPGenericCliAppBase.
 *
 */
class INET_API SuperComServerApp : public cSimpleModule
{
	friend class SuperComRmsApp; //MiM so that RMS can call computeEnergy()

  protected:
    simtime_t delay;
    simtime_t maxMsgDelay;

    long msgsRcvd;
    long msgsSent;
    long bytesRcvd;
    long bytesSent;
    double runTime;
    int memory; //Amount of memory the server has == numRAMsticks * RAMstickSize;
    int numRAMsticks;//number of RAMstics
    int RAMstickSize;//size of each RAMstick; at first all sticks are of same size!
    int numCPUs;//number of CPUs on this server
    int numCores; //Number of cores in each CPU
    int numCaches;
    int numPSU; //number of PSUs in this server
    long outputData; //amount of output data generated by job execution
    int usedMemory; //amount of used memory by jobs
    int runningJobs; //the number of jobs the server is executing

    double TotalEnergy; //Total amount of energy consumed
    //Energy consumed by server components
    double energyCPU;
    double energyFAN;
    double energyRAM;
    double energyHDD;
    double energyPSU;
    double energyMB;
    double energyNIC;

    double server_idle; //Server idle energy consumption
    double RAM_idle;
    double CPU_idle;
    double HDD_idle;
    double FAN_idle;

    double totalEnergy_momentary;
    double energyCPU_momentary;
    double energyFAN_momentary;
    double energyRAM_momentary;
    double energyHDD_momentary;
    double energyPSU_momentary;
    double energyMB_momentary;
    double energyNIC_momentary;

    double energyRAM_vector;
    double energyCPU_vector;

    int energyMode;
    int operationMode; //Operation mode of the server, 0 = Powered On, 1 = Standby, 2 = Hybernated


    simtime_t from; //Start time, needed for energy calculation
    double needMemory; //Amount of memory needed for the current job
    int needCores; //Number of cores needed for the current job
    int needLoad; //Load the job has
    double loadedTime;

    std::vector<double> LoadedTimeVector;

    // Statistics
    StatisticsCollector *stats;
    cModule *modp;

    StatisticsCollector *dcStats;
    cModule *dcModp;

    // PPP interface
    cModule *EthModule;

    // Sent/Rcvd packets
    double PrevRcvd;
    double PrevSent;
    double CurRcvd;
    double CurSent;
    double Rcvd;
    double Sent;
    double pps; //packets per second


    std::vector<CPU> cpu;
    std::vector<RAMstick> RAM;
    //std::vector<Storage> storage;//for the hard disk
    Fan fan;
    HardDisk HDD;
    std::vector<PSU> psu;
    NIC nic;

  protected:
    virtual void sendMessage(cMessage *msg);
    virtual void response(cMessage *msg);
    virtual void sleepResponse(cMessage *msg);
    virtual void wakeupResponse(cMessage *msg);
    virtual void computeEnergy();
    virtual double computeLoadedTime();
    virtual void removeLoadedTime(double);
    virtual void printLoadedTime();
    virtual double computeEstimate(int, int, int, double, int);
    virtual double getMemoryEstimate(int memory, int runTime);
    virtual double getCPUEstimate(int cores, int coreLoad, int runTime);

  protected:
    virtual void initialize();
    virtual void handleMessage(cMessage *msg);
    virtual void finish();
};

#endif


