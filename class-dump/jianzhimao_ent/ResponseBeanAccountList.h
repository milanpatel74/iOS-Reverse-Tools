//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ResponseBeanBase.h"

@class NSArray, NSObject;

@interface ResponseBeanAccountList : ResponseBeanBase
{
    NSArray *_list;
    NSObject *_obj;
    long long _page_sum;
}

@property(nonatomic) long long page_sum; // @synthesize page_sum=_page_sum;
@property(retain, nonatomic) NSObject *obj; // @synthesize obj=_obj;
@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
- (void).cxx_destruct;

@end

