//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseWebViewController.h"

#import "UIWebViewDelegate.h"

@class NSString, ShareContentObj, UIButton;

@interface ReleaseJobResultPageViewController : BaseWebViewController <UIWebViewDelegate>
{
    long long _releaseJobType;
    NSString *_jobID;
    UIButton *_shareBtn;
    ShareContentObj *_shareContent;
}

@property(retain, nonatomic) ShareContentObj *shareContent; // @synthesize shareContent=_shareContent;
@property(retain, nonatomic) UIButton *shareBtn; // @synthesize shareBtn=_shareBtn;
@property(copy, nonatomic) NSString *jobID; // @synthesize jobID=_jobID;
@property(nonatomic) long long releaseJobType; // @synthesize releaseJobType=_releaseJobType;
- (void).cxx_destruct;
- (void)exitPage;
- (void)refreshToRedPage;
- (void)startToShare;
- (void)share;
- (void)toPushPageWithCount:(long long)arg1;
- (void)pushJob;
- (void)checkPushCount;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)initData;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

