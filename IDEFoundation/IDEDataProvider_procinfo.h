/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEFoundation/IDEDataProvider.h>

@interface IDEDataProvider_procinfo : IDEDataProvider
{
    struct unordered_map<int, ProcessInfo, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, ProcessInfo>>> _processInfoByPID;
}

+ (id)sharedDataProvider;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)captureAttributes:(id)arg1 forPIDs:(id)arg2;
- (BOOL)captureAttributes:(id)arg1 toDictionary:(id)arg2 forPID:(id)arg3;
- (id)supportedAttributes;

@end

