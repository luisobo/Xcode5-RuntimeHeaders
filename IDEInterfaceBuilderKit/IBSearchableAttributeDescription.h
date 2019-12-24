/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTPropertyListEncoding-Protocol.h"

@class IBAttributeSearchLocation, NSString;

@interface IBSearchableAttributeDescription : NSObject <DVTPropertyListEncoding>
{
    BOOL _supportsPartialMatches;
    IBAttributeSearchLocation *_attributeSearchLocation;
    NSString *_stringValue;
    NSString *_contextLabel;
}

@property(readonly, nonatomic) BOOL supportsPartialMatches; // @synthesize supportsPartialMatches=_supportsPartialMatches;
@property(readonly, copy, nonatomic) NSString *contextLabel; // @synthesize contextLabel=_contextLabel;
@property(readonly, copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(readonly, copy, nonatomic) IBAttributeSearchLocation *attributeSearchLocation; // @synthesize attributeSearchLocation=_attributeSearchLocation;
- (void).cxx_destruct;
- (void)awakeWithPropertyList:(id)arg1;
- (void)encodeIntoPropertyList:(id)arg1;
- (id)initWithPropertyList:(id)arg1 owner:(id)arg2;
- (id)initWithAttributeSearchLocation:(id)arg1 stringValue:(id)arg2 contextLabel:(id)arg3 supportsPartialMatches:(BOOL)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

