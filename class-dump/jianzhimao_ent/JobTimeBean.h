//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ObjectBeanBase.h"

@class NSString;

@interface JobTimeBean : ObjectBeanBase
{
    NSString *_jobId;
    NSString *_end_time;
    NSString *_start_time;
}

+ (id)majorKey;
@property(copy, nonatomic) NSString *start_time; // @synthesize start_time=_start_time;
@property(copy, nonatomic) NSString *end_time; // @synthesize end_time=_end_time;
@property(copy, nonatomic) NSString *jobId; // @synthesize jobId=_jobId;
- (void).cxx_destruct;

@end

