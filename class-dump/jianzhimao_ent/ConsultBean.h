//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ChatBaseBean.h"

@class NSString;

@interface ConsultBean : ChatBaseBean
{
    _Bool _isRead;
    NSString *_id;
    NSString *_jobType;
    NSString *_title;
    long long _sCode;
    NSString *_modelName;
    long long _fCode;
    long long _urlState;
}

@property(nonatomic) long long urlState; // @synthesize urlState=_urlState;
@property(nonatomic) long long fCode; // @synthesize fCode=_fCode;
@property(retain, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property(nonatomic) long long sCode; // @synthesize sCode=_sCode;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *jobType; // @synthesize jobType=_jobType;
@property(retain, nonatomic) NSString *id; // @synthesize id=_id;
@property(nonatomic) _Bool isRead; // @synthesize isRead=_isRead;
- (void).cxx_destruct;

@end
