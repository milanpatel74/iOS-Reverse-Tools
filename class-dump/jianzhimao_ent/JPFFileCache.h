//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JPFCacheProtocol.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSMutableDictionary, NSString;

@interface JPFFileCache : NSObject <JPFCacheProtocol, NSCopying, NSCoding>
{
    NSString *_cachePath;
    NSString *_cacheUser;
    NSMutableDictionary *_cacheObject;
    NSString *_cacheName;
}

+ (id)shareInstance;
+ (id)startShareInstance:(id)arg1;
@property(copy, nonatomic) NSString *cacheName; // @synthesize cacheName=_cacheName;
@property(retain, nonatomic) NSMutableDictionary *cacheObject; // @synthesize cacheObject=_cacheObject;
@property(retain, nonatomic) NSString *cacheUser; // @synthesize cacheUser=_cacheUser;
@property(retain, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)decodeCacheObject:(id)arg1;
- (id)encodeCacheObject:(id)arg1;
- (id)libCachePath;
- (id)fileNameForKey:(id)arg1;
- (_Bool)p_oldFileTransfer;
- (void)readFileName:(id)arg1;
- (void)writeToFile:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)clearFile;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (_Bool)hasObjectForKey:(id)arg1;
- (void)dealloc;
- (void)synchronize;
- (void)applicationReceiveMemoryWarning;
- (void)applicationWillTerminate;
- (void)applicationWillResignActive;
- (void)applicationDidBecomeActive;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)unObserveAllNotifications;
- (void)p_addAppStateNotifications;
- (id)startCacheFile:(id)arg1;
- (id)initCache;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

