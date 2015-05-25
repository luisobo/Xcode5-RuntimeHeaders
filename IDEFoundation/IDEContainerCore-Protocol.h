//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTInvalidation.h"
#import "NSObject.h"

@class DVTExtension, DVTFileDataType, DVTFilePath, NSArray;

@protocol IDEContainerCore <NSObject, DVTInvalidation>
+ (NSArray *)containerDataFilePathsForFilePath:(DVTFilePath *)arg1;
+ (BOOL)supportsFilePersistence;
+ (DVTFileDataType *)containerFileType;
- (int)currentActivity;
- (DVTExtension *)containerExtension;
- (DVTFilePath *)filePath;
- (id <IDEContainerGroupCore>)rootGroup;
- (void)releaseContainerCore;
- (void)retainContainerCore;
- (id)initWithFilePath:(DVTFilePath *)arg1 extension:(DVTExtension *)arg2 error:(id *)arg3;
@end

