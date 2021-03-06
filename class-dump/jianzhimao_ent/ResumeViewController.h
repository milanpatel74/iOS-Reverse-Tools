//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseNavViewController.h"

#import "AJAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class JobBaseBean, NSArray, NSMutableArray, NSString, PartimeJobBean, ResumeTitleView, UITableView, UserBean, ZMScoreBean;

@interface ResumeViewController : BaseNavViewController <AJAlertViewDelegate, UITableViewDataSource, UITableViewDelegate>
{
    ResumeTitleView *_titleView;
    UITableView *_resumeTableView;
    NSArray *_titleArray;
    NSArray *_titleEngArray;
    NSMutableArray *_row1TitleArray;
    NSMutableArray *_row1ContentArray;
    NSArray *_userAvatarArray;
    UserBean *_userBean;
    ZMScoreBean *_zmScoreBean;
    long long _currentImageIndex;
    JobBaseBean *_jobBean;
    PartimeJobBean *_partimeJobBean;
    unsigned long long _resumeType;
    long long _partTimeJobType;
    long long _userResumeType;
}

@property(nonatomic) long long userResumeType; // @synthesize userResumeType=_userResumeType;
@property(nonatomic) long long partTimeJobType; // @synthesize partTimeJobType=_partTimeJobType;
@property(nonatomic) unsigned long long resumeType; // @synthesize resumeType=_resumeType;
@property(retain, nonatomic) PartimeJobBean *partimeJobBean; // @synthesize partimeJobBean=_partimeJobBean;
@property(retain, nonatomic) JobBaseBean *jobBean; // @synthesize jobBean=_jobBean;
- (void).cxx_destruct;
- (void)recordRejectTA;
- (void)recordHireTA;
- (void)reordPhoneCallEvent;
- (void)recordMessageEvent;
- (void)notification;
- (void)createPopView_doApplyError:(id)arg1 needToast:(_Bool)arg2;
- (void)toZMScoreVC:(id)arg1;
- (void)getZMScore;
- (void)requestApplyWith:(long long)arg1;
- (void)configResumeDetail;
- (void)getResume;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)alertView:(id)arg1 buttonClick:(long long)arg2;
- (void)updateZMScore;
- (void)updateTitleView;
- (void)rejectBtnHandler:(id)arg1;
- (void)employBtnHandler:(id)arg1;
- (void)phoneBtnHandler:(id)arg1;
- (void)messageHandler:(id)arg1;
- (void)zmScoreBtnHandler:(id)arg1;
- (void)rightBtnHandler:(id)arg1;
- (void)leftBtnHandler:(id)arg1;
- (void)initData;
- (id)umPageKey;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

