//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSUIHorizontalTableViewItem.h"

@class NSMutableDictionary, UIImageView;

@interface SSUIiPhoneEditorToolBarItem : SSUIHorizontalTableViewItem
{
    UIImageView *_iconView;
    NSMutableDictionary *_data;
    _Bool _needLayout;
    id <SSUIHorizontalTableViewItemDelegate> _delegate;
}

@property(retain, nonatomic) NSMutableDictionary *data; // @synthesize data=_data;
@property(nonatomic) id <SSUIHorizontalTableViewItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)getGrayImage:(id)arg1;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1;

@end

