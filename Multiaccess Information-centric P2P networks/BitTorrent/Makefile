#
#  Makefile for BitTorrent
#
#  ** This file was automatically generated by the command:
#  opp_makemake -f -N -b /home/wimax/sim/INET-20061020-OverSim-3 -c /home/wimax/sim/INET-20061020-OverSim-3/inetconfig -I. -lcmdenv -ltkenv -n -r -I/home/wimax/sim/INET-20061020-OverSim-3/Transport/Contract -I/home/wimax/sim/INET-20061020-OverSim-3/Network/Contract -I/home/wimax/sim/INET-20061020-OverSim-3/NetworkInterfaces/Contract -I/home/wimax/sim/INET-20061020-OverSim-3/Base -I/home/wimax/sim/INET-20061020-OverSim-3/Util -I../../Transport/TCP
#

# Name of target to be created (-o option)
TARGET = BitTorrent

# User interface (uncomment one) (-u option)
# USERIF_LIBS=$(CMDENV_LIBS)
USERIF_LIBS=$(TKENV_LIBS)

# .ned or .h include paths with -I
INCLUDE_PATH= -I. -I../../Transport/Contract -I../../Network/Contract -I../../NetworkInterfaces/Contract -I../../Base -I../../Util -I../../Transport/TCP

# misc additional object and library files to link
EXTRA_OBJS=

# object files from other directories to link with (wildcard needed to prevent "no such file *.o" errors)
EXT_DIR_OBJS=

# time stamps of other directories (used as dependency)
EXT_DIR_TSTAMPS= ../../Transport/Contract/.tstamp ../../Network/Contract/.tstamp ../../NetworkInterfaces/Contract/.tstamp ../../Base/.tstamp ../../Util/.tstamp ../../Transport/TCP/.tstamp

# Additional libraries (-L option -l option)
LIBS= -lcmdenv -ltkenv

#------------------------------------------------------------------------------
# Import generic settings from ../../inetconfig
include ../../inetconfig

MSGCOPTS= $(INCLUDE_PATH)

#------------------------------------------------------------------------------

# subdirectories to recurse into
SUBDIRS= 

# object files in this directory
OBJS= BTPeerWireMsg_m.o BTStatisticsMsg_m.o BTTrackerMsg_m.o BTPeerWireBase.o BTPeerWireClientHandlerBase.o BTStatistics.o BTSubTrackerBase.o BTSubTrackerClientBase.o BTTrackerBase.o BTTrackerClientBase.o BTUtils.o BitField.o

# header files generated (from msg files)
GENERATEDHEADERS= BTPeerWireMsg_m.h BTStatisticsMsg_m.h BTTrackerMsg_m.h

#------------------------------------------------------------------------------

$(TARGET): $(OBJS) subdirs Makefile .tstamp
	@# do nothing

.tstamp: $(OBJS)
	echo>.tstamp

$(OBJS) : $(GENERATEDHEADERS)


purify: $(OBJS) $(EXTRA_OBJS) $(EXT_DIR_TSTAMPS) subdirs Makefile
	purify $(CXX) $(LDFLAGS) $(OBJS) $(EXTRA_OBJS) $(EXT_DIR_OBJS) $(LIBS) -L$(OMNETPP_LIB_DIR) $(KERNEL_LIBS) $(USERIF_LIBS) $(SYS_LIBS_PURE) -o $(TARGET).pure

$(EXT_DIR_TSTAMPS):
	@echo
	@echo Error: $@ does not exist.
	@echo This means that at least the above dependency directory has not been built.
	@echo Maybe you need to do a top-level make?
	@echo
	@exit 1

.PHONY: subdirs $(SUBDIRS)

subdirs: $(SUBDIRS)

BTPeerWireMsg_m.o: BTPeerWireMsg_m.cc
	$(CXX) -c $(NEDCOPTS) BTPeerWireMsg_m.cc

BTPeerWireMsg_m.cc BTPeerWireMsg_m.h: BTPeerWireMsg.msg
	$(MSGC) $(MSGCOPTS) BTPeerWireMsg.msg

BTStatisticsMsg_m.o: BTStatisticsMsg_m.cc
	$(CXX) -c $(NEDCOPTS) BTStatisticsMsg_m.cc

BTStatisticsMsg_m.cc BTStatisticsMsg_m.h: BTStatisticsMsg.msg
	$(MSGC) $(MSGCOPTS) BTStatisticsMsg.msg

BTTrackerMsg_m.o: BTTrackerMsg_m.cc
	$(CXX) -c $(NEDCOPTS) BTTrackerMsg_m.cc

BTTrackerMsg_m.cc BTTrackerMsg_m.h: BTTrackerMsg.msg
	$(MSGC) $(MSGCOPTS) BTTrackerMsg.msg

BTPeerWireBase.o: BTPeerWireBase.cc
	$(CXX) -c $(COPTS) BTPeerWireBase.cc

BTPeerWireClientHandlerBase.o: BTPeerWireClientHandlerBase.cc
	$(CXX) -c $(COPTS) BTPeerWireClientHandlerBase.cc

BTStatistics.o: BTStatistics.cc
	$(CXX) -c $(COPTS) BTStatistics.cc

BTSubTrackerBase.o: BTSubTrackerBase.cc
	$(CXX) -c $(COPTS) BTSubTrackerBase.cc

BTSubTrackerClientBase.o: BTSubTrackerClientBase.cc
	$(CXX) -c $(COPTS) BTSubTrackerClientBase.cc

BTTrackerBase.o: BTTrackerBase.cc
	$(CXX) -c $(COPTS) BTTrackerBase.cc

BTTrackerClientBase.o: BTTrackerClientBase.cc
	$(CXX) -c $(COPTS) BTTrackerClientBase.cc

BTUtils.o: BTUtils.cc
	$(CXX) -c $(COPTS) BTUtils.cc

BitField.o: BitField.cc
	$(CXX) -c $(COPTS) BitField.cc


#doc: neddoc doxy

#neddoc:
#	opp_neddoc -a

#doxy: doxy.cfg
#	doxygen doxy.cfg

generateheaders: $(GENERATEDHEADERS)
	for i in $(SUBDIRS); do (cd $$i && $(MAKE) generateheaders) || exit 1; done

clean:
	rm -f *.o *_n.cc *_n.h *_m.cc *_m.h .tstamp
	rm -f *.vec *.sca
	for i in $(SUBDIRS); do (cd $$i && $(MAKE) clean); done

depend:
	$(MAKEDEPEND) $(INCLUDE_PATH) -- *.cc
	# $(MAKEDEPEND) $(INCLUDE_PATH) -fMakefile.in -- *.cc
	for i in $(SUBDIRS); do (cd $$i && $(MAKE) depend) || exit 1; done

makefiles:
	# recreate Makefile
	opp_makemake -f  -N -b /home/wimax/sim/INET-20061020-OverSim-3 -c /home/wimax/sim/INET-20061020-OverSim-3/inetconfig -I. -lcmdenv -ltkenv -n -r -I/home/wimax/sim/INET-20061020-OverSim-3/Transport/Contract -I/home/wimax/sim/INET-20061020-OverSim-3/Network/Contract -I/home/wimax/sim/INET-20061020-OverSim-3/NetworkInterfaces/Contract -I/home/wimax/sim/INET-20061020-OverSim-3/Base -I/home/wimax/sim/INET-20061020-OverSim-3/Util -I../../Transport/TCP 
	for i in $(SUBDIRS); do (cd $$i && $(MAKE) makefiles) || exit 1; done

makefile-ins:
	# recreate Makefile.in
	opp_makemake -f -m  -N -b /home/wimax/sim/INET-20061020-OverSim-3 -c /home/wimax/sim/INET-20061020-OverSim-3/inetconfig -I. -lcmdenv -ltkenv -n -r -I/home/wimax/sim/INET-20061020-OverSim-3/Transport/Contract -I/home/wimax/sim/INET-20061020-OverSim-3/Network/Contract -I/home/wimax/sim/INET-20061020-OverSim-3/NetworkInterfaces/Contract -I/home/wimax/sim/INET-20061020-OverSim-3/Base -I/home/wimax/sim/INET-20061020-OverSim-3/Util -I../../Transport/TCP 
	for i in $(SUBDIRS); do (cd $$i && $(MAKE) makefile-ins) || exit 1; done

# "re-makemake" and "re-makemake-m" are deprecated, historic names of the above two targets
re-makemake: makefiles
re-makemake-m: makefile-ins


# DO NOT DELETE THIS LINE -- make depend depends on it.
BTPeerWireBase.o: BTPeerWireBase.cc \
  BTPeerWireClientHandlerBase.h \
  BTPeerWireBase.h \
  ../../Transport/TCP/TCP.h \
  ../../Base/NotifierConsts.h \
  BTTrackerClientBase.h \
  ../../Transport/TCP/TCPConnection.h \
  ../../Network/Contract/IPAddressResolver.h \
  ../../Network/Contract/InterfaceTable.h \
  ../../Network/Contract/InterfaceEntry.h \
  ../../Network/IPv4/IPv4InterfaceData.h \
  ../../Network/IPv6/IPv6InterfaceData.h \
  ../../Network/Contract/IPvXAddress.h \
  ../TCPApp/TCPSrvHostApp.h \
  BTUtils.h \
  ../../Base/INETDefs.h \
  ../../Base/NotificationBoard.h \
  ../../Base/ModuleAccess.h \
  ../../Base/INotifiable.h \
  ../../NetworkInterfaces/Contract/MACAddress.h \
  ../../Network/Contract/InterfaceIdentifier.h \
  ../../Network/Contract/IPAddress.h \
  ../../Network/Contract/IPv6Address.h \
  ../../Transport/Contract/TCPSocket.h \
  ../../Transport/Contract/TCPSocketMap.h \
  ../../Transport/Contract/TCPCommand_m.h \
  ../../Network/Contract/IPControlInfo.h \
  BitField.h \
  BTStatistics.h
BTPeerWireClientHandlerBase.o: BTPeerWireClientHandlerBase.cc \
  BTPeerWireBase.h \
  BTPeerWireClientHandlerBase.h \
  ../TCPApp/TCPSrvHostApp.h \
  BTUtils.h \
  BitField.h \
  BTTrackerClientBase.h \
  BTStatistics.h \
  ../../Base/NotificationBoard.h \
  ../../Transport/TCP/TCP.h \
  ../../Transport/Contract/TCPSocket.h \
  ../../Transport/Contract/TCPSocketMap.h \
  ../../Transport/Contract/TCPCommand_m.h \
  ../../Network/Contract/IPvXAddress.h \
  ../../Base/INETDefs.h \
  ../../Network/Contract/IPAddress.h \
  ../../Network/Contract/IPv6Address.h \
  ../../Network/Contract/IPAddressResolver.h \
  ../../Network/Contract/InterfaceTable.h \
  ../../Network/Contract/InterfaceEntry.h \
  ../../Network/IPv4/IPv4InterfaceData.h \
  ../../Network/IPv6/IPv6InterfaceData.h \
  ../../Transport/TCP/TCPConnection.h \
  ../../NetworkInterfaces/Contract/MACAddress.h \
  ../../Network/Contract/InterfaceIdentifier.h \
  ../../Network/Contract/IPControlInfo.h \
  ../../Base/ModuleAccess.h \
  ../../Base/INotifiable.h \
  ../../Base/NotifierConsts.h
BTStatistics.o: BTStatistics.cc \
  BTStatistics.h
BTSubTrackerBase.o: BTSubTrackerBase.cc \
  BTSubTrackerBase.h \
  ../TCPApp/TCPSrvHostApp.h \
  ../../Network/Contract/IPAddress.h \
  ../../Transport/Contract/TCPSocket.h \
  ../../Transport/Contract/TCPSocketMap.h \
  ../../Transport/Contract/TCPCommand_m.h \
  ../../Network/Contract/IPvXAddress.h \
  ../../Base/INETDefs.h \
  ../../Network/Contract/IPv6Address.h
BTSubTrackerClientBase.o: BTSubTrackerClientBase.cc \
  BTSubTrackerClientBase.h \
  ../../Network/Contract/IPAddressResolver.h \
  ../../Network/Contract/InterfaceTable.h \
  ../../Network/Contract/InterfaceEntry.h \
  ../../Network/IPv4/IPv4InterfaceData.h \
  ../../Network/IPv6/IPv6InterfaceData.h \
  ../TCPApp/TCPSrvHostApp.h \
  ../../Transport/TCP/TCP.h \
  BTUtils.h \
  ../../Transport/TCP/TCPConnection.h \
  ../../Base/INETDefs.h \
  ../../Base/NotificationBoard.h \
  ../../Base/ModuleAccess.h \
  ../../Base/INotifiable.h \
  ../../Base/NotifierConsts.h \
  ../../NetworkInterfaces/Contract/MACAddress.h \
  ../../Network/Contract/InterfaceIdentifier.h \
  ../../Network/Contract/IPAddress.h \
  ../../Network/Contract/IPv6Address.h \
  ../../Transport/Contract/TCPSocket.h \
  ../../Transport/Contract/TCPSocketMap.h \
  ../../Transport/Contract/TCPCommand_m.h \
  ../../Network/Contract/IPvXAddress.h \
  ../../Network/Contract/IPControlInfo.h
BTTrackerBase.o: BTTrackerBase.cc \
  BTTrackerBase.h \
  ../TCPApp/TCPSrvHostApp.h \
  ../../Network/Contract/IPAddress.h \
  ../../Transport/Contract/TCPSocket.h \
  ../../Transport/Contract/TCPSocketMap.h \
  ../../Transport/Contract/TCPCommand_m.h \
  ../../Network/Contract/IPvXAddress.h \
  ../../Base/INETDefs.h \
  ../../Network/Contract/IPv6Address.h
BTTrackerClientBase.o: BTTrackerClientBase.cc \
  BTTrackerClientBase.h \
  ../../Network/Contract/IPAddressResolver.h \
  ../../Network/Contract/IPControlInfo.h \
  ../../Network/Contract/InterfaceTable.h \
  ../../Network/Contract/InterfaceEntry.h \
  ../../Network/IPv4/IPv4InterfaceData.h \
  ../../Network/IPv6/IPv6InterfaceData.h \
  ../../Network/Contract/IPvXAddress.h \
  ../TCPApp/TCPSrvHostApp.h \
  ../../Transport/TCP/TCP.h \
  BTUtils.h \
  ../../Transport/TCP/TCPConnection.h \
  ../../Base/INETDefs.h \
  ../../Base/NotificationBoard.h \
  ../../Base/ModuleAccess.h \
  ../../Base/INotifiable.h \
  ../../Base/NotifierConsts.h \
  ../../NetworkInterfaces/Contract/MACAddress.h \
  ../../Network/Contract/InterfaceIdentifier.h \
  ../../Network/Contract/IPAddress.h \
  ../../Network/Contract/IPv6Address.h \
  ../../Transport/Contract/TCPSocket.h \
  ../../Transport/Contract/TCPSocketMap.h \
  ../../Transport/Contract/TCPCommand_m.h
BTUtils.o: BTUtils.cc \
  BTUtils.h \
  BTPeerWireClientHandlerBase.h \
  ../TCPApp/TCPSrvHostApp.h \
  ../../Transport/Contract/TCPSocket.h \
  ../../Transport/Contract/TCPSocketMap.h \
  ../../Transport/Contract/TCPCommand_m.h \
  ../../Network/Contract/IPvXAddress.h \
  ../../Base/INETDefs.h \
  ../../Network/Contract/IPAddress.h \
  ../../Network/Contract/IPv6Address.h \
  BTPeerWireBase.h \
  BTTrackerClientBase.h \
  ../../Transport/TCP/TCPConnection.h \
  BitField.h \
  BTStatistics.h \
  ../../Base/NotificationBoard.h \
  ../../Transport/TCP/TCP.h \
  ../../Base/ModuleAccess.h \
  ../../Base/INotifiable.h \
  ../../Base/NotifierConsts.h \
  ../../Network/Contract/IPAddressResolver.h \
  ../../Network/Contract/InterfaceTable.h \
  ../../Network/Contract/InterfaceEntry.h \
  ../../Network/IPv4/IPv4InterfaceData.h \
  ../../Network/IPv6/IPv6InterfaceData.h \
  ../../NetworkInterfaces/Contract/MACAddress.h \
  ../../Network/Contract/InterfaceIdentifier.h \
  ../../Network/Contract/IPControlInfo.h
BitField.o: BitField.cc \
  BitField.h
