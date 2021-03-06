/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ImageCapture/PTPTransport.h>

@class NSMutableData, NSString;

@interface PTPHostUSBTransport : PTPTransport
{
    unsigned int _locationID;
    unsigned short _vendorID;
    unsigned short _productID;
    NSString *_usbSerialNumberString;
    struct IOUSBInterfaceStruct300 **_interfaceInterfaceRef;
    unsigned char _bulkPipeIn;
    unsigned char _bulkPipeOut;
    unsigned char _interruptPipeIn;
    unsigned int _readBufferSize;
    unsigned int _writeBufferSize;
    unsigned int _eventDataBufferSize;
    char *_readBuffer;
    char *_writeBuffer;
    char *_eventDataBuffer;
    NSMutableData *_eventData;
    int _maxPacketSizeBulkIn;
    int _maxPacketSizeBulkOut;
    int _maxPacketSizeInterruptIn;
    struct __CFRunLoopSource *_CFRunLoopSource;
    BOOL _connected;
}

- (id)initWithLocationID:(unsigned long)arg1 delegate:(id)arg2;
- (void)dealloc;
- (unsigned long)locationID;
- (unsigned short)vendorID;
- (unsigned short)productID;
- (id)usbSerialNumberString;
- (BOOL)startInitiator;
- (void)stop;
- (BOOL)connected;
- (void)setConnected:(BOOL)arg1;
- (id)description;
- (BOOL)sendCancel:(id)arg1;
- (id)sendRequest:(id)arg1 receiveData:(id)arg2 timeout:(unsigned long)arg3;
- (id)sendRequest:(id)arg1 sendData:(id)arg2 timeout:(unsigned long)arg3;
- (void)sendDataPackets:(id)arg1;
- (void)sendData:(id)arg1;
- (BOOL)sendEvent:(id)arg1;
- (void)cancelTransaction:(id)arg1;
- (unsigned short)deviceStatus;
- (unsigned short)cancelRequest:(id)arg1;
- (void)deviceReset;
- (BOOL)writeBulkData:(id)arg1;
- (int)readBulkDataWithTimeout:(unsigned long)arg1;
- (int)readInterruptData;
- (void)dumpData:(void *)arg1 length:(int)arg2 comment:(id)arg3;
- (BOOL)handleBulkData:(unsigned long)arg1 result:(int)arg2;
- (void)handleInterruptData:(unsigned long)arg1;
- (void)clearPipeStall:(unsigned char)arg1;
- (void)clearBulkInPipeStall;
- (void)abortPendingIO;

@end

