//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseCell.h"

@class UIImageView, UILabel;

@interface JobSection3Cell : BaseCell
{
    UIImageView *_logoView;
    UILabel *_titleLab;
    UILabel *_contentLab;
}

@property(retain, nonatomic) UILabel *contentLab; // @synthesize contentLab=_contentLab;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
@property(retain, nonatomic) UIImageView *logoView; // @synthesize logoView=_logoView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)resetFrame;
- (void)setContent:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end
