//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseTableViewCell.h"

@class UIButton, UIImageView, UILabel;

@interface PaymentItemCell : BaseTableViewCell
{
    UIImageView *_iconImageView;
    UILabel *_nameLabel;
    UILabel *_descLabel;
    UIButton *_chooseBtn;
}

+ (double)height;
@property(nonatomic) __weak UIButton *chooseBtn; // @synthesize chooseBtn=_chooseBtn;
@property(nonatomic) __weak UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (void)setBean:(id)arg1;

@end
