/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTFilePath, DVTPlatform, DVTSearchPath, NSArray, NSDictionary, NSNumber, NSString, NSURL;

@interface DVTSDK : NSObject
{
    DVTPlatform *_platform;
    NSString *_canonicalName;
    NSString *_displayName;
    NSString *_operatingSystemVersion;
    DVTFilePath *_sdkPath;
    NSString *_docSetFeedName;
    NSURL *_docSetFeedURL;
    NSString *_alternateSDKName;
    NSArray *_supportedBuildToolComponents;
    NSArray *_librarySearchPaths;
    NSDictionary *_infoDictionary;
    NSString *_propertyConditionName;
    NSString *_minimalDisplayName;
    NSDictionary *_defaultProperties;
    NSNumber *_isInternal;
    NSNumber *_isBaseSDK;
    DVTSearchPath *_commandLineToolSearchPath;
    NSDictionary *_versionInfo;
    NSArray *_toolchains;
    NSArray *_toolchainNames;
}

+ (id)sdksInDirectory:(id)arg1 forPlatform:(id)arg2;
+ (id)sdkInDirectory:(id)arg1 forPlatform:(id)arg2;
+ (id)sdkForPath:(id)arg1 forceCreate:(BOOL)arg2;
+ (id)sdkForPath:(id)arg1;
+ (BOOL)sdkForBootSystemRequiresSpecialTreatment;
+ (id)sdkForBootSystemOrNil;
+ (id)sdkForBootSystem;
+ (id)sdkForNameOrPath:(id)arg1 withBasePath:(id)arg2 forceCreate:(BOOL)arg3;
+ (id)_localizedSDKNameForCanonicalName:(id)arg1;
+ (id)_localizedFamilyNameForCanonicalName:(id)arg1;
+ (id)_absolutePathForSDKPathString:(id)arg1;
+ (id)sdksForFamily:(id)arg1;
+ (id)sdkForCanonicalName:(id)arg1;
+ (void)_setSDK:(id)arg1 forCanonicalName:(id)arg2;
+ (id)_sdkForResolvedAbsolutePath:(id)arg1;
+ (void)_setSDK:(id)arg1 forResolvedAbsolutePath:(id)arg2;
+ (id)knownSDKs;
+ (BOOL)shouldAllowBootSystemSDK;
+ (void)initialize;
@property(readonly) NSArray *toolchainNames; // @synthesize toolchainNames=_toolchainNames;
@property(readonly) NSDictionary *defaultProperties; // @synthesize defaultProperties=_defaultProperties;
@property(readonly) NSArray *toolchains; // @synthesize toolchains=_toolchains;
@property(readonly) NSURL *docSetFeedURL; // @synthesize docSetFeedURL=_docSetFeedURL;
@property(readonly) NSString *docSetFeedName; // @synthesize docSetFeedName=_docSetFeedName;
@property(readonly) NSArray *librarySearchPaths; // @synthesize librarySearchPaths=_librarySearchPaths;
@property(readonly) NSString *alternateSDKName; // @synthesize alternateSDKName=_alternateSDKName;
@property(readonly) NSArray *supportedBuildToolComponents; // @synthesize supportedBuildToolComponents=_supportedBuildToolComponents;
@property(readonly) NSString *propertyConditionName; // @synthesize propertyConditionName=_propertyConditionName;
@property(readonly) NSString *minimalDisplayName; // @synthesize minimalDisplayName=_minimalDisplayName;
@property(readonly) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly) NSString *canonicalName; // @synthesize canonicalName=_canonicalName;
@property(readonly) DVTFilePath *sdkPath; // @synthesize sdkPath=_sdkPath;
@property(readonly) NSDictionary *infoDictionary; // @synthesize infoDictionary=_infoDictionary;
@property(readonly) NSString *operatingSystemVersion; // @synthesize operatingSystemVersion=_operatingSystemVersion;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)commandLineToolSearchPath;
@property(readonly) NSDictionary *versionInfo; // @synthesize versionInfo=_versionInfo;
@property(readonly, getter=isBaseSDK) BOOL baseSDK;
@property(readonly, getter=isInternal) BOOL internal;
@property(retain) DVTPlatform *platform;
- (id)initWithFilePath:(id)arg1;
- (id)initWithFilePath:(id)arg1 infoDictionary:(id)arg2;

@end

