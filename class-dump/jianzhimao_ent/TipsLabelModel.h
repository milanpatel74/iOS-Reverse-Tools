//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor, UIFont;

@interface TipsLabelModel : NSObject
{
    _Bool _isBold;
    UIColor *_text_color;
    NSString *_text;
    UIFont *_text_font;
}

@property(nonatomic) _Bool isBold; // @synthesize isBold=_isBold;
@property(retain, nonatomic) UIFont *text_font; // @synthesize text_font=_text_font;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UIColor *text_color; // @synthesize text_color=_text_color;
- (void).cxx_destruct;

@end
