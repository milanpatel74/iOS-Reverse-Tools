//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HttpBaseBean.h"

@class NSString;

@interface RequestBeanBase : HttpBaseBean
{
    _Bool _needHub;
    _Bool _shieldNetErrorToast;
    NSString *_sm;
    NSString *_compid;
    NSString *_timestamp;
    NSString *_statistics_data;
    NSString *_versions;
    NSString *_system;
}

+ (id)mj_ignoredPropertyNames;
@property(copy, nonatomic) NSString *system; // @synthesize system=_system;
@property(copy, nonatomic) NSString *versions; // @synthesize versions=_versions;
@property(nonatomic) _Bool shieldNetErrorToast; // @synthesize shieldNetErrorToast=_shieldNetErrorToast;
@property(nonatomic) _Bool needHub; // @synthesize needHub=_needHub;
@property(copy, nonatomic) NSString *statistics_data; // @synthesize statistics_data=_statistics_data;
@property(copy, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *compid; // @synthesize compid=_compid;
@property(copy, nonatomic) NSString *sm; // @synthesize sm=_sm;
- (void).cxx_destruct;
- (id)hubMsg;
- (id)filterArrayForCacheFileName;
- (double)cacheTimeout;
- (unsigned long long)cachePolicy;
- (_Bool)needCache;
- (double)timeout;
- (long long)httpMethod;
- (id)apiPath;
- (id)HOST;
- (id)SCHEME;

@end

