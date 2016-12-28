//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JPFLoggerRepository.h"

@class JPFLevel, JPFLogger, NSMutableArray, NSMutableDictionary;

@interface JPFLoggerController : NSObject <JPFLoggerRepository>
{
    JPFLogger *_root;
    NSMutableDictionary *_repository;
    NSMutableArray *_loggers;
    int _limitedLevelInt;
    JPFLevel *_limitedLevel;
    JPFLevel *_currentLevel;
}

+ (id)startLoggerWithLevel:(id)arg1;
+ (id)shareLoggerController;
@property(retain, nonatomic) JPFLevel *currentLevel; // @synthesize currentLevel=_currentLevel;
@property(retain, nonatomic) JPFLevel *limitedLevel; // @synthesize limitedLevel=_limitedLevel;
- (void).cxx_destruct;
- (void)updateChildren:(id)arg1 withParent:(id)arg2;
- (void)updateParentsOfLogger:(id)arg1;
- (id)pseudoFqcnForClass:(Class)arg1;
- (id)newLoggerInstance:(id)arg1;
- (void)shutdown;
- (id)loggerAllClass;
- (id)currentLoggers;
- (id)loggerForName:(id)arg1;
- (id)loggerForClass:(Class)arg1;
- (id)rootLogger;
- (void)setLevel:(id)arg1;
- (void)setLimitedLevelName:(id)arg1;
- (_Bool)isDisabled:(int)arg1;
- (id)initWithRoot:(id)arg1;

@end
