//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, NSView;

@protocol NSTextFinderClient <NSObject>

@optional
@property(readonly, copy) NSArray *visibleCharacterRanges;
@property(copy) NSArray *selectedRanges;
@property(readonly) struct _NSRange firstSelectedRange;
@property(readonly) NSString *string;
@property(readonly, getter=isEditable) BOOL editable;
@property(readonly) BOOL allowsMultipleSelection;
@property(readonly, getter=isSelectable) BOOL selectable;
- (void)drawCharactersInRange:(struct _NSRange)arg1 forContentView:(NSView *)arg2;
- (NSArray *)rectsForCharacterRange:(struct _NSRange)arg1;
- (NSView *)contentViewAtIndex:(unsigned long long)arg1 effectiveCharacterRange:(struct _NSRange *)arg2;
- (void)didReplaceCharacters;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(NSString *)arg2;
- (BOOL)shouldReplaceCharactersInRanges:(NSArray *)arg1 withStrings:(NSArray *)arg2;
- (void)scrollRangeToVisible:(struct _NSRange)arg1;
- (unsigned long long)stringLength;
- (NSString *)stringAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2 endsWithSearchBoundary:(char *)arg3;
@end

