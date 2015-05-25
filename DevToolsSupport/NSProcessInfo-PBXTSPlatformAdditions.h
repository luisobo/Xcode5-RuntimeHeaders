//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProcessInfo.h"

@interface NSProcessInfo (PBXTSPlatformAdditions)
- (id)nativeArchitecture64BitEquivalent;
- (id)nativeArchitecture32BitEquivalent;
- (id)nativeArchitectureActualName;
- (id)nativeArchitectureCanonicalName;
- (id)hostPlatformCanonicalName;
- (id)pathSeparator;
- (id)searchPathSeparator;
- (id)programSearchPathVariable;
- (id)dllImageSuffixVariable;
- (id)dllSearchPathVariable;
- (id)frameworkSearchPathVariable;
- (id)bourneShellPath;
- (id)localProgramsPath;
- (id)xcodeProductBuildVersion;
- (id)xcodeActualVersion;
- (id)xcodeMinorVersion;
- (id)xcodeMajorVersion;
- (id)buildMachineActualOSVersion;
- (id)buildMachineMinorOSVersion;
- (id)buildMachineMajorOSVersion;
- (id)buildMachineOSProductBuildVersion;
- (void)_populateVersionStrings;
- (id)versionDict;
- (void)addNewPath:(id)arg1 toVariable:(id)arg2 inEnvironmentDictionary:(id)arg3 placeInFrontOfExistingPath:(BOOL)arg4;
@end

