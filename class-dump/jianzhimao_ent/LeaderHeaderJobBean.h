//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ObjectBeanBase.h"

@class NSString;

@interface LeaderHeaderJobBean : ObjectBeanBase
{
    _Bool _is_show;
    long long _apply_new;
    long long _apply_num;
    long long _click_times;
    long long _comment_new;
    long long _comment_num;
    long long _employ_num;
    NSString *_job_id;
    long long _resume_num;
    NSString *_title;
    NSString *_start_time;
    NSString *_type;
    long long _job_type;
}

@property(nonatomic) long long job_type; // @synthesize job_type=_job_type;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *start_time; // @synthesize start_time=_start_time;
@property(nonatomic) _Bool is_show; // @synthesize is_show=_is_show;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long resume_num; // @synthesize resume_num=_resume_num;
@property(copy, nonatomic) NSString *job_id; // @synthesize job_id=_job_id;
@property(nonatomic) long long employ_num; // @synthesize employ_num=_employ_num;
@property(nonatomic) long long comment_num; // @synthesize comment_num=_comment_num;
@property(nonatomic) long long comment_new; // @synthesize comment_new=_comment_new;
@property(nonatomic) long long click_times; // @synthesize click_times=_click_times;
@property(nonatomic) long long apply_num; // @synthesize apply_num=_apply_num;
@property(nonatomic) long long apply_new; // @synthesize apply_new=_apply_new;
- (void).cxx_destruct;

@end

