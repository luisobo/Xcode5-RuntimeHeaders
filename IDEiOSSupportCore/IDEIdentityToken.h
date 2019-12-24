/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IDEArchivePackagerIdentityToken-Protocol.h"

@class DTDKProvisioningProfile, NSString;

@interface IDEIdentityToken : NSObject <IDEArchivePackagerIdentityToken>
{
    int _status;
    NSString *_commonName;
    DTDKProvisioningProfile *_provisioningProfile;
    NSString *_certificateType;
    struct OpaqueSecCertificateRef *_certificate;
}

+ (id)tokenForSigningIdentityNamed:(id)arg1;
+ (id)tokenForProvisioningProfileNamed:(id)arg1;
+ (id)allTokensForBundleIdentifier:(id)arg1;
+ (id)allTokens;
+ (id)refreshToken;
+ (id)dontSignToken;
+ (id)tokenWithProfile:(id)arg1;
+ (id)tokenWithCertificate:(struct OpaqueSecCertificateRef *)arg1;
+ (id)tokenWithCertificate:(struct OpaqueSecCertificateRef *)arg1 andProfile:(id)arg2;
@property(readonly) int status; // @synthesize status=_status;
@property(readonly, copy) DTDKProvisioningProfile *provisioningProfile; // @synthesize provisioningProfile=_provisioningProfile;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)displayName;
- (id)unadornedDisplayName;
- (id)relatedTokenForKey:(id)arg1;
@property(readonly, copy) NSString *teamID;
@property(readonly, copy) NSString *certificateType; // @synthesize certificateType=_certificateType;
@property(readonly) struct OpaqueSecCertificateRef *certificate; // @synthesize certificate=_certificate;
@property(readonly, copy) NSString *commonName; // @synthesize commonName=_commonName;
- (id)certificateUtilities;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

