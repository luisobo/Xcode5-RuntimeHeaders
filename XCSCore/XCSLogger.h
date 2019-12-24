/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableArray, NSObject<OS_dispatch_queue>;

@interface XCSLogger : NSObject
{
    NSMutableArray *_destinations;
    NSMutableArray *_tags;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedLogger;
+ (void)initialize;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableArray *tags; // @synthesize tags=_tags;
@property(retain) NSArray *destinations; // @synthesize destinations=_destinations;
- (void).cxx_destruct;
- (void)logMessageFromFile:(id)arg1 lineNumber:(long long)arg2 className:(id)arg3 methodName:(id)arg4 tags:(id)arg5 userInfo:(id)arg6 format:(id)arg7 arguments:(struct __va_list_tag [1])arg8;
- (void)logMessageFromFile:(const char *)arg1 lineNumber:(long long)arg2 class:(Class)arg3 method:(SEL)arg4 arguments:(id)arg5;
- (void)loadDestinationsFromConfiguration:(id)arg1;
- (void)reloadConfigurationFromDefaults;
- (void)removeTag:(id)arg1;
- (void)addTag:(id)arg1;
- (void)removeDestination:(id)arg1;
- (void)addDestination:(id)arg1;
- (id)initWithDestinationConfiguration:(id)arg1;
- (id)init;

@end

