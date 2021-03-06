//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BMGeoElement, BMItsEvent, BMKBaseIndoorMapInfo, BMStreetScapeEvent, MapView, UITouch;

@protocol MapViewDelegate <NSObject>

@optional
- (void)onBaseIndoorMapMode:(MapView *)arg1 withIn:(_Bool)arg2 withInfo:(BMKBaseIndoorMapInfo *)arg3;
- (void)onMapLoadFinish:(MapView *)arg1;
- (void)onHeatMapNeedClean:(MapView *)arg1;
- (void)delegateOnMapStatusDidChanged:(MapView *)arg1;
- (void)onDrawFrame;
- (void)streetScapeClickArrawWithX:(int)arg1 WithY:(int)arg2;
- (void)streetScapeEndLoad:(int)arg1;
- (void)streetScapeStartLoad:(int)arg1;
- (void)streetScapeDataNoFind:(int)arg1;
- (void)streetScapeDataValid:(_Bool)arg1;
- (void)onClickStreetScape:(BMStreetScapeEvent *)arg1;
- (void)animationStatus:(_Bool)arg1 animate:(_Bool)arg2;
- (void)onProcessDoubleClickSelf:(struct CGPoint)arg1;
- (_Bool)isProcessDoubleClickSelf;
- (void)onClickMapBlank:(MapView *)arg1 clickPoint:(struct CGPoint)arg2;
- (void)onClickMapMark:(MapView *)arg1 clickGeo:(BMGeoElement *)arg2;
- (void)onLongTouchMapPress:(struct CGPoint)arg1;
- (void)onDoubleTouchEnd;
- (void)onDoubleTouchMoved;
- (void)onDoubleTouchBegan;
- (void)onTouchMapEnd;
- (void)onTouchMapMoved;
- (void)onTouchMapBegan;
- (void)onClickItsEvent:(BMItsEvent *)arg1;
- (void)onSingleTapAtPoint:(MapView *)arg1 tapPoint:(struct CGPoint)arg2;
- (void)onDoubleTapAtPoint:(MapView *)arg1 tapPoint:(struct CGPoint)arg2;
- (void)onTwoFingerTapAtPoint:(MapView *)arg1 tapPoint:(struct CGPoint)arg2;
- (void)onForceTouch:(MapView *)arg1 touch:(UITouch *)arg2;
@end

