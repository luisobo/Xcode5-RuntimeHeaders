//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<IBAutolayoutItem>;

@interface IBAutolayoutAmbiguityStatus : NSObject
{
    NSObject<IBAutolayoutItem> *_view;
    unsigned long long _ambiguityStatusMask;
}

@property(readonly, nonatomic) unsigned long long ambiguityStatusMask; // @synthesize ambiguityStatusMask=_ambiguityStatusMask;
@property(readonly, nonatomic) NSObject<IBAutolayoutItem> *view; // @synthesize view=_view;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isMissingScrollableContentHeightConstraint) BOOL missingScrollableContentHeightConstraint;
@property(readonly, nonatomic, getter=isMissingScrollableContentWidthConstraint) BOOL missingScrollableContentWidthConstraint;
@property(readonly, nonatomic, getter=isMissingVerticalSizeConstraint) BOOL missingVerticalSizeConstraint;
@property(readonly, nonatomic, getter=isMissingHorizontalSizeConstraint) BOOL missingHorizontalSizeConstraint;
@property(readonly, nonatomic, getter=isMissingVerticalPositionConstraint) BOOL missingVerticalPositionConstraint;
@property(readonly, nonatomic, getter=isMissingHorizontalPositionConstraint) BOOL missingHorizontalPositionConstraint;
@property(readonly, nonatomic, getter=isMissingConstraints) BOOL missingConstraints;
- (BOOL)hasAmbiguityInOrientation:(unsigned long long)arg1;
- (BOOL)hasAmbiguousScrollableContentSizeInOrientation:(unsigned long long)arg1;
- (BOOL)hasAmbiguousSizeInOrientation:(unsigned long long)arg1;
- (BOOL)hasAmbiguousPositionInOrientation:(unsigned long long)arg1;
@property(readonly, nonatomic) BOOL hasAmbiguousScrollableContentHeight;
@property(readonly, nonatomic) BOOL hasAmbiguousScrollableContentWidth;
@property(readonly, nonatomic) BOOL hasAmbiguousVerticalSize;
@property(readonly, nonatomic) BOOL hasAmbiguousHorizontalSize;
@property(readonly, nonatomic) BOOL hasAmbiguousVerticalPosition;
@property(readonly, nonatomic) BOOL hasAmbiguousHorizontalPosition;
@property(readonly, nonatomic) BOOL hasAmbiguousSize;
@property(readonly, nonatomic) BOOL hasAmbiguousPosition;
@property(readonly, nonatomic, getter=isUninitialized) BOOL uninitialized;
@property(readonly, nonatomic, getter=isAmbiguousExcludingUninitialized) BOOL ambiguousExcludingUninitialized;
@property(readonly, nonatomic, getter=isAmbiguous) BOOL ambiguous;
- (id)description;
- (BOOL)isEqualToAmbiguityStatus:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)ambiguityStatusBySettingUninitialized:(BOOL)arg1;
- (id)representationWithObjectRepresentationForObjectBlock:(CDUnknownBlockType)arg1;
- (id)initWithRepresentation:(id)arg1 objectForObjectRepresentationBlock:(CDUnknownBlockType)arg2;
- (id)initWithView:(id)arg1 ambiguityStatusMask:(unsigned long long)arg2;

@end

