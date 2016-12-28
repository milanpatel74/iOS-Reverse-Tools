//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JobAndResumeManagerBaseViewController.h"

#import "JobAndResumeManagerEmployLogicDelegate.h"
#import "JobAndResumeManagerLogicSignupConditionDelegate.h"
#import "UISearchBarDelegate.h"
#import "UITextFieldDelegate.h"

@class JobAndResumeManagerLogicClean, JobAndResumeManagerLogicEmploy, JobAndResumeManagerLogicSignupCondition, JobAndResumeSearchTitleView, NSString;

@interface JobAndResumeManagerSearchViewController : JobAndResumeManagerBaseViewController <UISearchBarDelegate, JobAndResumeManagerLogicSignupConditionDelegate, JobAndResumeManagerEmployLogicDelegate, UITextFieldDelegate>
{
    _Bool _shouldReload;
    unsigned long long _searchType;
    JobAndResumeSearchTitleView *_searchTitleView;
    JobAndResumeManagerLogicEmploy *_logic_employ;
    JobAndResumeManagerLogicSignupCondition *_logic_signup;
    JobAndResumeManagerLogicClean *_logic_clean;
}

@property(nonatomic) _Bool shouldReload; // @synthesize shouldReload=_shouldReload;
@property(retain, nonatomic) JobAndResumeManagerLogicClean *logic_clean; // @synthesize logic_clean=_logic_clean;
@property(retain, nonatomic) JobAndResumeManagerLogicSignupCondition *logic_signup; // @synthesize logic_signup=_logic_signup;
@property(retain, nonatomic) JobAndResumeManagerLogicEmploy *logic_employ; // @synthesize logic_employ=_logic_employ;
@property(retain, nonatomic) JobAndResumeSearchTitleView *searchTitleView; // @synthesize searchTitleView=_searchTitleView;
@property(nonatomic) unsigned long long searchType; // @synthesize searchType=_searchType;
- (void).cxx_destruct;
- (void)notification;
- (void)toResumeVC:(id)arg1 resumeType:(unsigned long long)arg2 userResumeType:(long long)arg3;
- (void)updateWithGetResumeList:(_Bool)arg1;
- (void)getResumeListClean:(id)arg1;
- (void)getResumeListEmploy:(id)arg1;
- (void)getResumeListSignup:(id)arg1;
- (void)getResumeList;
- (void)reloadData:(_Bool)arg1;
- (void)updateAllDataWithViewCtrl:(id)arg1;
- (void)updateCellWithIndexPath:(id)arg1;
- (void)jobAndResumeManagerLogicSignupConditionReloadList:(_Bool)arg1;
- (void)remarkDidSuccess;
- (void)jobApplyDidCancle;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)cleanDidSelectRowAtIndexPath:(id)arg1;
- (void)employDidSelectRowAtIndexPath:(id)arg1;
- (void)signupDidSelectRowAtIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cleanCellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 employCellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 signupCellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)cleanWithHeightForRowAtIndexPath:(id)arg1;
- (double)employWithHeightForRowAtIndexPath:(id)arg1;
- (double)singnupWithHeightForRowAtIndexPath:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)cleanRecordHandler:(id)arg1;
- (void)paySureHandler:(id)arg1;
- (void)signBtnHandler:(id)arg1;
- (void)cancleHandler:(id)arg1;
- (void)remarkHandler:(id)arg1;
- (void)payHandler:(id)arg1;
- (void)employSignRecordHandler:(id)arg1;
- (void)cancleEmployWithIndexPath:(id)arg1;
- (void)datePressHandler:(id)arg1;
- (void)telBtnHandler:(id)arg1;
- (void)reloadListData;
- (void)cleanDataSource;
- (void)cancleBtnHandler:(id)arg1;
- (id)logicBase;
- (void)viewWillLayoutSubviews;
- (void)initView;
- (void)initData;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
