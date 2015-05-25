//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTProvisioningProfile.h"
#import "NSCopying.h"

@class DVTAppIDFeatures, DVTCertificateUtilities, DVTNotificationToken, DVTPlatform, NSArray, NSData, NSDate, NSDictionary, NSSet, NSString;

@interface DTDKProvisioningProfile : NSObject <NSCopying, DVTProvisioningProfile>
{
    NSArray *_certificates;
    NSArray *_identityCertificates;
    NSSet *_supportedUDIDs;
    DVTNotificationToken *_notificationToken;
    DVTCertificateUtilities *_certificateUtilities;
    NSArray *_signingCertificates;
    id _profile;
    NSString *_localPath;
    NSString *_teamID;
    NSString *_teamName;
}

+ (id)keyPathsForValuesAffectingExpirationWarningImage;
+ (id)keyPathsForValuesAffectingPreferredFilenameExtension;
+ (id)keyPathsForValuesAffectingPlatform;
+ (id)keyPathsForValuesAffectingIsMacProfile;
+ (id)keyPathsForValuesAffectingWillExpireSoon;
+ (id)keyPathsForValuesAffectingExpired;
+ (id)keyPathsForValuesAffectingCreationDate;
+ (id)keyPathsForValuesAffectingExpirationDate;
+ (id)keyPathsForValuesAffectingTeamIdentifierPrefixes;
+ (id)keyPathsForValuesAffectingAppIdentifierPrefixes;
+ (id)keyPathsForValuesAffectingUsesExplicitAppIdentifier;
+ (id)keyPathsForValuesAffectingAppIdentifierEntitlementWithoutPrefix;
+ (id)keyPathsForValuesAffectingAppIdentifierEntitlement;
+ (id)keyPathsForValuesAffectingEntitlements;
+ (id)keyPathsForValuesAffectingProfile;
+ (id)keyPathsForValuesAffectingName;
+ (id)keyPathsForValuesAffectingUUID;
+ (id)profileWithData:(id)arg1;
+ (id)profileWithURL:(id)arg1;
+ (id)profileWithPath:(id)arg1;
+ (id)profileWithMISProfile:(struct _MISProfile *)arg1;
+ (id)profileWithData:(id)arg1 certificateUtilities:(id)arg2;
+ (id)profileWithURL:(id)arg1 certificateUtilities:(id)arg2;
+ (id)profileWithPath:(id)arg1 certificateUtilities:(id)arg2;
+ (id)profileWithData:(id)arg1 certificateUtilities:(id)arg2 error:(id *)arg3;
+ (id)profileWithURL:(id)arg1 certificateUtilities:(id)arg2 error:(id *)arg3;
+ (id)profileWithPath:(id)arg1 certificateUtilities:(id)arg2 error:(id *)arg3;
+ (id)profileWithMISProfile:(struct _MISProfile *)arg1 certificateUtilities:(id)arg2;
+ (BOOL)couldBeProfileFilename:(id)arg1;
@property(readonly) DVTCertificateUtilities *certificateUtilities; // @synthesize certificateUtilities=_certificateUtilities;
@property(copy) NSString *_teamName; // @synthesize _teamName;
@property(copy) NSString *_teamID; // @synthesize _teamID;
@property(copy) NSString *localPath; // @synthesize localPath=_localPath;
@property(retain) id _profile; // @synthesize _profile;
- (void).cxx_destruct;
@property(readonly) NSArray *identityCertificates;
- (BOOL)containsCertificate:(struct OpaqueSecCertificateRef *)arg1;
- (id)longDescription;
@property(readonly) BOOL isOMCEnabled;
@property(readonly) BOOL isWACEnabled;
@property(readonly) BOOL isHomeKitEnabled;
- (BOOL)isApplicationGroupsEnabled;
@property(readonly) BOOL isHealthKitEnabled;
@property(readonly) BOOL isAssociatedDomainsEnabled;
@property(readonly) BOOL isVPNLiteEnabled;
@property(readonly) BOOL isKeychainAccessGroupsEnabled;
@property(readonly) BOOL isGameCenterEnabled;
@property(readonly) BOOL isMapsEnabled;
@property(readonly) BOOL isInterAppAudioEnabled;
@property(readonly) BOOL isDataProtectionEnabled;
@property(readonly) NSString *dataProtectionLevel;
@property(readonly) BOOL isPassbookEnabled;
@property(readonly) BOOL isICloudEnabled;
- (BOOL)allowsFeatures:(id)arg1 missingFeatures:(id *)arg2;
@property(readonly) NSString *teamName;
@property(readonly) NSString *teamID;
@property(readonly, copy) NSString *description;
- (long long)dateCompareDecending:(id)arg1;
- (long long)dateCompare:(id)arg1;
- (long long)localizedCompare:(id)arg1;
- (long long)compare:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)matchesBundleIdentifier:(id)arg1;
- (BOOL)canBeInstalledOnDevice:(id)arg1;
- (BOOL)canBeInstalledOnDeviceWithIdentifier:(id)arg1;
@property(readonly) NSData *dataRepresentation;
@property(readonly) NSSet *supportedUDIDs;
@property(readonly) NSString *preferredFilenameExtension;
@property(readonly) DVTPlatform *dvt_platform;
@property(readonly) NSString *platform;
@property(readonly) BOOL isMacProfile;
@property(readonly) BOOL isUniversal;
@property(readonly) BOOL expiredOrWillExpireSoon;
@property(readonly) BOOL willExpireSoon;
@property(readonly) BOOL expired;
@property(readonly) NSDate *creationDate;
@property(readonly) NSDate *expirationDate;
- (BOOL)hasCertificateMatchingIdentity:(id)arg1 includeExpired:(BOOL)arg2;
- (BOOL)containsSigningCertificate:(id)arg1;
@property(readonly) NSArray *identitySigningCertificates;
@property(readonly) NSArray *signingCertificates;
@property(readonly) NSArray *certificates;
@property(readonly) NSArray *teamIdentifierPrefixes;
@property(readonly) NSArray *appIdentifierPrefixes;
@property(readonly) BOOL usesExplicitAppIdentifier;
@property(readonly) NSString *appIdentifierEntitlementWithoutPrefix;
@property(readonly) NSString *appIdentifierEntitlement;
@property(readonly) DVTAppIDFeatures *features;
@property(readonly) NSDictionary *entitlements;
@property struct _MISProfile *profile;
@property(readonly) int version;
@property(readonly) NSString *name;
@property(readonly) NSString *UUID;
- (BOOL)writeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1 certificateUtilities:(id)arg2 error:(id *)arg3;
- (id)initWithContentsOfURL:(id)arg1 certificateUtilities:(id)arg2 error:(id *)arg3;
- (id)initWithPath:(id)arg1 certificateUtilities:(id)arg2 error:(id *)arg3;
- (id)initWithMISProfile:(struct _MISProfile *)arg1 certificateUtilities:(id)arg2;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

