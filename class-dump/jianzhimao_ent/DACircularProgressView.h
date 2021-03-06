//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

@interface DACircularProgressView : UIView
{
    double _indeterminateDuration;
}

+ (Class)layerClass;
+ (void)initialize;
@property(nonatomic) double indeterminateDuration; // @synthesize indeterminateDuration=_indeterminateDuration;
@property(nonatomic) long long indeterminate;
@property(nonatomic) double thicknessRatio;
@property(nonatomic) long long roundedCorners;
@property(retain, nonatomic) UIColor *progressTintColor;
@property(retain, nonatomic) UIColor *trackTintColor;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2;
@property(nonatomic) double progress;
- (void)didMoveToWindow;
- (id)init;
- (id)circularProgressLayer;

@end

