//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, XCFileSystemWatcher;

@protocol XCFileSystemWatcherRegisteredObject <NSObject>
- (void)fileSystemWatcher:(XCFileSystemWatcher *)arg1 notedChangeAtPath:(NSString *)arg2 scanRecursively:(BOOL)arg3;
- (void)fileSystemWatcherWillClose:(XCFileSystemWatcher *)arg1;
@end

