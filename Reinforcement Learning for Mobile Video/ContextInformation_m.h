//
// Generated file, do not edit! Created by opp_msgc 4.1 from applications/tcpapp/ContextInformation.msg.
//

#ifndef _CONTEXTINFORMATION_M_H_
#define _CONTEXTINFORMATION_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0401
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif



/**
 * Class generated from <tt>applications/tcpapp/ContextInformation.msg</tt> by opp_msgc.
 * <pre>
 * packet ContextInformation {
 *     int appId; 
 *     int bytesToSend; 
 *     int chunkSize; 
 *     double txRate; 
 *     double iatChunk; 
 * 
 * }
 * </pre>
 */
class ContextInformation : public ::cPacket
{
  protected:
    int appId_var;
    int bytesToSend_var;
    int chunkSize_var;
    double txRate_var;
    double iatChunk_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const ContextInformation&);

  public:
    ContextInformation(const char *name=NULL, int kind=0);
    ContextInformation(const ContextInformation& other);
    virtual ~ContextInformation();
    ContextInformation& operator=(const ContextInformation& other);
    virtual ContextInformation *dup() const {return new ContextInformation(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getAppId() const;
    virtual void setAppId(int appId_var);
    virtual int getBytesToSend() const;
    virtual void setBytesToSend(int bytesToSend_var);
    virtual int getChunkSize() const;
    virtual void setChunkSize(int chunkSize_var);
    virtual double getTxRate() const;
    virtual void setTxRate(double txRate_var);
    virtual double getIatChunk() const;
    virtual void setIatChunk(double iatChunk_var);
};

inline void doPacking(cCommBuffer *b, ContextInformation& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, ContextInformation& obj) {obj.parsimUnpack(b);}


#endif // _CONTEXTINFORMATION_M_H_
