//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ARUPConnectTimerDelegate-Protocol.h"
#import "ARUPDataResponseTimerDelegate-Protocol.h"

@class ARUPConnectTimer, ARUPDataResponseTimer, NSMutableData, NSString;
@protocol ARUPConnectionDelegate;

@interface ARUPConnection : NSObject <ARUPConnectTimerDelegate, ARUPDataResponseTimerDelegate>
{
    long long _connectionNO;
    long long _state;
    struct __CFReadStream *_readstream;
    struct __CFWriteStream *_writestream;
    ARUPConnectTimer *_connectTimer;
    ARUPDataResponseTimer *_dataRespTimer;
    double _tcpConnectTimeout;
    double _sslHandshakeTimeout;
    unsigned long long _encryptType;
    NSMutableData *_toSendData;
    unsigned long long _sendedLen;
    id <ARUPConnectionDelegate> _delegate;
    NSString *_lastErrorMsg;
    NSString *_host;
    long long _port;
}

+ (id)getConnectionWithDelegate:(id)arg1;
@property(nonatomic) long long port; // @synthesize port=_port;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
@property(retain, nonatomic) NSString *lastErrorMsg; // @synthesize lastErrorMsg=_lastErrorMsg;
@property(nonatomic) __weak id <ARUPConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long sendedLen; // @synthesize sendedLen=_sendedLen;
@property(retain, nonatomic) NSMutableData *toSendData; // @synthesize toSendData=_toSendData;
@property(nonatomic) unsigned long long encryptType; // @synthesize encryptType=_encryptType;
@property(nonatomic) double sslHandshakeTimeout; // @synthesize sslHandshakeTimeout=_sslHandshakeTimeout;
@property(nonatomic) double tcpConnectTimeout; // @synthesize tcpConnectTimeout=_tcpConnectTimeout;
@property(retain, nonatomic) ARUPDataResponseTimer *dataRespTimer; // @synthesize dataRespTimer=_dataRespTimer;
@property(retain, nonatomic) ARUPConnectTimer *connectTimer; // @synthesize connectTimer=_connectTimer;
@property(nonatomic) struct __CFWriteStream *writestream; // @synthesize writestream=_writestream;
@property(nonatomic) struct __CFReadStream *readstream; // @synthesize readstream=_readstream;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) long long connectionNO; // @synthesize connectionNO=_connectionNO;
- (void).cxx_destruct;
- (void)close;
- (void)clear;
- (void)onTimeoutOf:(id)arg1;
- (void)onTimeroutOf:(id)arg1;
- (_Bool)connected;
- (_Bool)isInUse;
- (void)markInUse:(_Bool)arg1;
- (long long)sendData:(id)arg1;
- (_Bool)startConnectToHost:(id)arg1 port:(long long)arg2 tcpConnectTimeout:(double)arg3 tlsTimeout:(double)arg4 encryptType:(unsigned long long)arg5;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

