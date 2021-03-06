//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseNavViewController.h"

#import "JWPayInputBaseDelegate.h"
#import "UIScrollViewDelegate.h"

@class JWPayInputBaseView, NSString, UIButton, UIImageView, UILabel, UIScrollView;

@interface PayPasswordModifyViewController : BaseNavViewController <JWPayInputBaseDelegate, UIScrollViewDelegate>
{
    UIImageView *_titleBgView;
    UIButton *_firstStepBtn;
    UIButton *_secondStepBtn;
    UIButton *_thirdStepBtn;
    UIScrollView *_scrollView;
    UILabel *_forgetPasswordLab;
    JWPayInputBaseView *_passwordView_orgin;
    JWPayInputBaseView *_passwordView_first;
    JWPayInputBaseView *_passwordView_second;
    UIButton *_nextStepBtn;
    UIButton *_confirmBtn;
    UIButton *_backBtn;
    UIImageView *_flagImageView;
    UILabel *_flagLab;
    NSString *_password_first;
    NSString *_password_second;
}

- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)requestCheckPayPw;
- (void)requestModifyPayPw;
- (void)jWPayInput:(id)arg1 password:(id)arg2;
- (void)backBtnHandler:(id)arg1;
- (void)confirmBtnHandler:(id)arg1;
- (void)nextStepBtnHandler:(id)arg1;
- (void)forgetPasswordTapHandler:(id)arg1;
- (void)payMethodInputSuccessHandler;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)updateStepStatus:(long long)arg1;
- (void)scrollToStep:(long long)arg1;
- (void)cleanPayPassword;
- (void)initThirdStepView;
- (void)initSecondStepView;
- (void)initFirstStepView;
- (void)initTitleView;
- (void)initData;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

