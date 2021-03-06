//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseNavViewController.h"

@class NSMutableAttributedString, NSString, UIButton, UIImageView, UILabel;

@interface FlagShowViewController : BaseNavViewController
{
    UIImageView *_flagImageView;
    UILabel *_flagLab;
    UIButton *_sureBtn;
    NSMutableAttributedString *_flagAttString;
    NSString *_backBtnTitle;
    id _willBackViewController;
    id _willBackViewController2;
    unsigned long long _flagShowStyle;
}

@property(nonatomic) unsigned long long flagShowStyle; // @synthesize flagShowStyle=_flagShowStyle;
@property(nonatomic) __weak id willBackViewController2; // @synthesize willBackViewController2=_willBackViewController2;
@property(nonatomic) __weak id willBackViewController; // @synthesize willBackViewController=_willBackViewController;
@property(retain, nonatomic) NSString *backBtnTitle; // @synthesize backBtnTitle=_backBtnTitle;
@property(retain, nonatomic) NSMutableAttributedString *flagAttString; // @synthesize flagAttString=_flagAttString;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)toPaymentBillBtnHandler:(id)arg1;
- (void)updateFlagShow;
- (void)sureBtnHandler:(id)arg1;
- (void)viewDidLoad;

@end

