//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QQHttpClientSession;

@interface QRCodeDecodeBiz : NSObject
{
    int _lastSignalChannelSeq;
    int _retryCount;
    id <QRCodeDecodeBizDelegate> _resultDelegate;
    QQHttpClientSession *_decodeSession;
    NSString *_qrcodeResultUrl;
}

+ (_Bool)checkIsQRCodeBizURL:(id)arg1;
@property(retain, nonatomic) NSString *qrcodeResultUrl; // @synthesize qrcodeResultUrl=_qrcodeResultUrl;
@property(retain, nonatomic) QQHttpClientSession *decodeSession; // @synthesize decodeSession=_decodeSession;
@property(nonatomic) id <QRCodeDecodeBizDelegate> resultDelegate; // @synthesize resultDelegate=_resultDelegate;
- (void)handleCannotDecode;
- (void)handleNetErr;
- (void)handleDecodeSucceed:(id)arg1;
- (void)delayRetryDecode:(id)arg1;
- (void)signalChannelErrorNote:(id)arg1;
- (void)signalChannelMsgNote:(id)arg1;
- (id)parseNSString:(char *)arg1 len:(unsigned short)arg2;
- (void)parseTLVMsg:(id)arg1 msgData:(char *)arg2 size:(int)arg3;
- (void)qqHttpSessionError:(id)arg1 error:(id)arg2;
- (void)qqHttpSessionDidLoad:(id)arg1 result:(id)arg2;
- (void)handleQRCodeDecodeResult:(id)arg1;
- (_Bool)decodeURLByCGI:(id)arg1;
- (_Bool)decodeURL:(id)arg1;
- (_Bool)decodeQRCodeUrl:(id)arg1;
- (void)dealloc;
- (id)init:(id)arg1;

@end

