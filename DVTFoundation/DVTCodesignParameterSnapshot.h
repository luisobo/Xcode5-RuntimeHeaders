/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTSigningCertificate, NSString;

@interface DVTCodesignParameterSnapshot : NSObject
{
    id <DVTProvisioningProfile> _provisioningProfile;
    DVTSigningCertificate *_signingCertificate;
    NSString *_identityHash;
}

+ (id)snapshotForAdHocSigning;
+ (id)snapshotForNullSigning;
+ (id)snapshotWithProvisioningProfile:(id)arg1;
+ (id)snapshotWithProvisioningProfile:(id)arg1 andSigningCertificate:(id)arg2;
+ (id)snapshotWithSigningCertificate:(id)arg1;
+ (id)snapshotWithIdentityHash:(id)arg1;
@property(copy) NSString *identityHash; // @synthesize identityHash=_identityHash;
@property(retain) DVTSigningCertificate *signingCertificate; // @synthesize signingCertificate=_signingCertificate;
@property(retain) id <DVTProvisioningProfile> provisioningProfile; // @synthesize provisioningProfile=_provisioningProfile;
- (void).cxx_destruct;
@property(readonly) struct OpaqueSecCertificateRef *identityCertificate;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly) _Bool willSign;
@property(readonly) _Bool isAdHocIdentity;
- (id)description;

@end

