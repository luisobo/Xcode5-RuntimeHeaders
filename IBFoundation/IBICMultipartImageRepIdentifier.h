//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class IBICMultipartImageRepSlot, NSString;

@interface IBICMultipartImageRepIdentifier : NSObject <NSCopying>
{
    BOOL _unassigned;
    IBICMultipartImageRepSlot *_slot;
    NSString *_fileName;
}

+ (id)inferredImageRepIdentifiersGroupedByImageNameForPaths:(id)arg1;
+ (id)inferredImageRepIdentifiersForPaths:(id)arg1;
+ (CDUnknownBlockType)slotComponentTransformerForPaths:(id)arg1;
+ (id)orderImageRepPathsForDeterministicConflictResolution:(id)arg1;
+ (id)inferredImageRepIdentifierForPath:(id)arg1 slotComponentTransformer:(CDUnknownBlockType)arg2;
+ (id)inferredImageRepIdentifiersForBitmaps:(id)arg1;
+ (Class)slotClass;
+ (id)defaultIdentifier;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(readonly, getter=isUnassigned) BOOL unassigned; // @synthesize unassigned=_unassigned;
@property(readonly) NSString *fileName; // @synthesize fileName=_fileName;
@property(readonly) IBICMultipartImageRepSlot *slot; // @synthesize slot=_slot;
- (void).cxx_destruct;
- (id)description;
@property(readonly) NSString *stringRepresentation;
- (long long)compareInTieBreakingOrder:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToImageCatalogImageRepIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)imageRepIdentifierBySettingUnassigned:(BOOL)arg1;
- (long long)compareDisplayOrder:(id)arg1;
- (id)initWithSlot:(id)arg1 fileName:(id)arg2 unassigned:(BOOL)arg3;

@end

