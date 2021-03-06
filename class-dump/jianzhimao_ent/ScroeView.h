//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface ScroeView : UIView
{
    int _number;
    id <ScroeViewDelegate> _delegate;
    UIView *_starBackgroundView;
    UIView *_starForegroundView;
}

@property(retain, nonatomic) UIView *starForegroundView; // @synthesize starForegroundView=_starForegroundView;
@property(retain, nonatomic) UIView *starBackgroundView; // @synthesize starBackgroundView=_starBackgroundView;
@property(nonatomic) __weak id <ScroeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)changeStarForegroundViewWithPoint:(struct CGPoint)arg1;
- (id)buidlStarViewWithImageName:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 numberOfscore:(int)arg2;

@end

