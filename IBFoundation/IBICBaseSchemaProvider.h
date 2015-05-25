//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IBICSchemaProvider.h"

@class IBICFileType, IBICHeightClass, IBICIdiom, IBICPlatform, IBICScale, IBICSlotComponentClassCombinationAxis, IBICWidthClass, NSString;

@interface IBICBaseSchemaProvider : NSObject <IBICSchemaProvider>
{
    IBICPlatform *_universalPlatform;
    IBICIdiom *_universalIdiom;
    IBICScale *_oneXScale;
    IBICScale *_twoXScale;
    IBICFileType *_pngFileType;
    IBICFileType *_jpegFileType;
    IBICFileType *_pdfFileType;
    IBICWidthClass *_widthClassCompact;
    IBICWidthClass *_widthClassRegular;
    IBICHeightClass *_heightClassCompact;
    IBICHeightClass *_heightClassRegular;
    IBICSlotComponentClassCombinationAxis *_widthAxisAll;
    IBICSlotComponentClassCombinationAxis *_widthAxisCompact;
    IBICSlotComponentClassCombinationAxis *_widthAxisRegular;
    IBICSlotComponentClassCombinationAxis *_heightAxisAll;
    IBICSlotComponentClassCombinationAxis *_heightAxisCompact;
    IBICSlotComponentClassCombinationAxis *_heightAxisRegular;
}

- (void).cxx_destruct;
- (void)registerBaseImageSetSlots:(id)arg1;
- (void)registerBaseSlotComponents:(id)arg1;
- (void)registerSchemaComponents:(id)arg1;
- (double)precedence;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

