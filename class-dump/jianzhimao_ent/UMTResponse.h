//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "UMTBase.h"

@class NSString, UMTImprint;

@interface UMTResponse : NSObject <UMTBase, NSCoding>
{
    int __resp_code;
    NSString *__msg;
    UMTImprint *__imprint;
    _Bool __resp_code_isset;
    _Bool __msg_isset;
    _Bool __imprint_isset;
}

@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetImprint;
- (_Bool)imprintIsSet;
@property(retain, nonatomic, getter=imprint, setter=setImprint:) UMTImprint *imprint;
- (void)unsetMsg;
- (_Bool)msgIsSet;
@property(retain, nonatomic, getter=msg, setter=setMsg:) NSString *msg;
- (void)unsetResp_code;
- (_Bool)resp_codeIsSet;
@property(nonatomic, getter=resp_code, setter=setResp_code:) int resp_code;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResp_code:(int)arg1 msg:(id)arg2 imprint:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
