//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ResponseBeanBase.h"

@class NSArray;

@interface ResponseBeanFindGroupList : ResponseBeanBase
{
    long long _pageSum;
    NSArray *_list;
}

@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
@property(nonatomic) long long pageSum; // @synthesize pageSum=_pageSum;
- (void).cxx_destruct;

@end
