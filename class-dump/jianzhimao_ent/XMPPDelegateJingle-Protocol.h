//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XMPPDelegateBase.h"

@class EMError, XMPPCallSession, XMPPManager;

@protocol XMPPDelegateJingle <XMPPDelegateBase>

@optional
- (void)xmpp:(XMPPManager *)arg1 didCallStatusPauseAndResume:(long long)arg2 xmppSession:(XMPPCallSession *)arg3 type:(long long)arg4;
- (void)xmpp:(XMPPManager *)arg1 didCallStatusChanged:(long long)arg2 xmppSession:(XMPPCallSession *)arg3 reason:(long long)arg4 error:(EMError *)arg5;
@end

