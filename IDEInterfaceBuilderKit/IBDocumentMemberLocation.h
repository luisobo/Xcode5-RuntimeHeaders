/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTDocumentLocation.h"

@class IBAttributeSearchLocation, IBMemberID;

@interface IBDocumentMemberLocation : DVTDocumentLocation
{
    IBMemberID *_memberIdentifier;
    IBAttributeSearchLocation *_attributeSearchLocation;
}

@property(readonly, copy) IBAttributeSearchLocation *attributeSearchLocation; // @synthesize attributeSearchLocation=_attributeSearchLocation;
@property(readonly, copy) IBMemberID *memberIdentifier; // @synthesize memberIdentifier=_memberIdentifier;
- (void).cxx_destruct;
- (id)description;
- (BOOL)ibDocumentMemberLocationAttributesAreEqualForDocumentLocation:(id)arg1;
- (BOOL)isEqualDisregardingTimestamp:(id)arg1;
- (id)copyWithURL:(id)arg1;
- (long long)compare:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentURL:(id)arg1 timestamp:(id)arg2 memberIdentifier:(id)arg3 attributeSearchLocation:(id)arg4;
- (id)initWithDocumentURL:(id)arg1 timestamp:(id)arg2 andMemberIdentifier:(id)arg3;

@end

