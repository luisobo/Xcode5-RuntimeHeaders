//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTFontTextFieldDataSource.h"

@class NSArray, NSNumberFormatter, NSString;

@interface DVTFontDataSource : NSObject <DVTFontTextFieldDataSource>
{
    NSArray *_fonts;
    NSNumberFormatter *_sizeFormatter;
}

- (void).cxx_destruct;
- (BOOL)fontTextField:(id)arg1 value:(id)arg2 isEqualToValue:(id)arg3;
- (BOOL)fontTextFieldCanShowFontPanel:(id)arg1;
- (id)fontTextField:(id)arg1 displaySizeForValue:(id)arg2;
- (id)fontTextField:(id)arg1 displayNameForValue:(id)arg2;
- (double)fontTextField:(id)arg1 pointSizeForValue:(id)arg2;
- (id)fontTextField:(id)arg1 fontNameForValue:(id)arg2;
- (id)fontTextField:(id)arg1 familyForValue:(id)arg2;
- (id)fontTextField:(id)arg1 transformValue:(id)arg2 toHavePointSize:(double)arg3;
- (id)fontTextField:(id)arg1 transformValue:(id)arg2 toHaveSize:(id)arg3;
- (id)fontTextField:(id)arg1 transformValue:(id)arg2 toHaveFontName:(id)arg3;
- (id)fontTextField:(id)arg1 transformValue:(id)arg2 toHaveFamily:(id)arg3;
- (id)fontTextField:(id)arg1 transformValue:(id)arg2 toFontValue:(id)arg3;
- (id)backwardsCompatibleFontForFont:(id)arg1;
- (unsigned long long)fontTextField:(id)arg1 settableAttributesForValue:(id)arg2;
- (BOOL)fontTextField:(id)arg1 isValueSpecial:(id)arg2;
- (id)fontTextField:(id)arg1 descriptionForFontName:(id)arg2;
- (id)fontTextField:(id)arg1 descriptionForFamily:(id)arg2;
- (id)fontTextField:(id)arg1 descriptionForValue:(id)arg2 type:(int *)arg3;
- (id)fontTextField:(id)arg1 fontNamesForFontFamily:(id)arg2;
- (id)fontFamiliesForFontTextField:(id)arg1;
- (id)fontValuesForFontTextField:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

