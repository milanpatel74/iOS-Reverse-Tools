//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface EMGCDMulticastDelegateNode : NSObject
{
    id delegate;
    struct dispatch_queue_s *delegateQueue;
}

@property(readonly, nonatomic) struct dispatch_queue_s *delegateQueue; // @synthesize delegateQueue;
@property __weak id delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 delegateQueue:(struct dispatch_queue_s *)arg2;

@end
