//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsCore/PBXTarget.h>

#import "XCProductPartOwners.h"

@class NSMutableArray, NSMutableDictionary, PBXReference;

@interface PBXNativeTarget : PBXTarget <XCProductPartOwners>
{
    NSMutableArray *_productParts;
    PBXReference *_infoPlistRef;
    NSMutableDictionary *_infoPlistSettings;
}

+ (id)buildSystemDefaultBuildSettings_asPropertyValues;
+ (id)buildSystemDefaultBuildSettings;
- (void)referenceWillBeRemoved:(id)arg1;
- (void)referenceWasRenamed:(id)arg1;
- (void)referenceWillChange:(id)arg1;
- (void)referenceWasAdded:(id)arg1;
- (void)willChange;
- (void)untouchFileAtPath:(id)arg1;
- (void)touchFileAtPath:(id)arg1;
- (void)fileMayHaveChangedAtPath:(id)arg1;
- (void)_unarchiverDidFinishUnarchiving:(id)arg1;
- (void)awakeFromPListUnarchiver:(id)arg1;
- (BOOL)shouldArchiveProductSettingsXML;
- (void)_createProductPartsFromProductTypeTemplateParts;
- (id)subpartsForProductPart:(id)arg1;
- (id)productPartForIdentifier:(id)arg1;
- (id)productParts;
- (BOOL)isJambased;
- (BOOL)isNative;
- (void)_infoPlistReferenceDidMove:(id)arg1;
- (id)infoPlistFilePath;
- (id)infoPlistFilePathForConfigurationNamed:(id)arg1;
- (id)fullProductNameForConfigurationNamed:(id)arg1;
- (void)removeProductSettingForKey:(id)arg1;
- (void)setProductSetting:(id)arg1 forKey:(id)arg2;
- (id)productSettingForKey:(id)arg1;
- (void)setProductSettings:(id)arg1;
- (id)productSettings;
- (void)voidInfoPlistSettingsCache;
- (BOOL)productSettingsAreValid;
- (void)writeOutInfoPlistSettings;
- (void)_writeOutInfoPlistSettingsUsing:(id)arg1;
- (void)setInfoPlistSettings:(id)arg1;
- (id)infoPlistSettings;
- (id)intermediatesLocation;
- (id)intermediatesLocationForConfigurationNamed:(id)arg1;
- (id)builtProductsLocation;
- (id)builtProductsLocationForConfigurationNamed:(id)arg1;
- (id)dynamicallyComputedOverridingTargetBuildSettingsWithExpansionContext:(id)arg1;
- (void)addBandIBuildSettingsToDynamicallyComputedTargetBuildSettings:(id)arg1 withAction:(id)arg2 andConfigurationName:(id)arg3;
- (id)relevantToolSpecifications;
- (id)relevantToolSpecificationsForConfigurationsNamed:(id)arg1;
- (id)relevantToolSpecificationsForConfigurationNamed:(id)arg1;
- (id)targetTypeDisplayName;
- (BOOL)canPackageHeaders;
- (BOOL)canInstallHeaders;
- (BOOL)wantsProductSettings;
- (BOOL)hasUserConfigurableBuildRules;
- (id)productReferenceExpectedFileTypeForConfigurationNamed:(id)arg1;
- (BOOL)productReferenceIsExecutable;
- (void)dealloc;
- (id)initWithName:(id)arg1 productTypeIdentifier:(id)arg2;
- (id)initWithName:(id)arg1 productTypeIdentifier:(id)arg2 baseDirectoryPath:(id)arg3;
- (void)_updateObservingInfoPlistReference;
- (Class)dependencyGraphSnapshotClass;
- (void)rebuildCountedSetOfBuildFileBaseNamesInTargetBuildContext:(id)arg1;

@end

