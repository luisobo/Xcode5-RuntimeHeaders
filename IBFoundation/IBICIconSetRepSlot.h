/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IBFoundation/IBICMultipartImageRepSlot.h>

@class IBICScale, IBICSize;

@interface IBICIconSetRepSlot : IBICMultipartImageRepSlot
{
    IBICSize *_size;
    IBICScale *_scale;
}

+ (id)defaultSlot;
+ (id)orderedComponentClasses;
+ (id)slotWithSize:(id)arg1 scale:(id)arg2;
+ (id)slotForFileName:(id)arg1;
+ (id)requiredFileNamesToSlots;
@property(readonly) IBICScale *scale; // @synthesize scale=_scale;
@property(readonly) IBICSize *size; // @synthesize size=_size;
- (void).cxx_destruct;
- (id)requiredPixelSize;
- (id)suggestedRepNameForMultipartImageSetName:(id)arg1;
- (id)detailAreaKey;
- (id)requiredFileName;
- (long long)compareDisplayOrder:(id)arg1;
- (id)shortDisplayName;
- (void)captureComponents;

@end

