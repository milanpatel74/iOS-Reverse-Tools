//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BMKAnnotation.h"

@class NSString;

@interface BMKShape : NSObject <BMKAnnotation>
{
    NSString *title;
    NSString *subtitle;
}

@property(copy) NSString *subtitle; // @synthesize subtitle;
@property(copy) NSString *title; // @synthesize title;
- (void).cxx_destruct;
- (void)setCoordinate:(CDStruct_c3b9c2ee)arg1;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

