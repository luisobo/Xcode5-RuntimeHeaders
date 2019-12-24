/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSImage, NSString, Xcode3BuildSettingsGroupRowCell;

@interface Xcode3BuildSettingsGroupRowCellSubtitle : NSObject
{
    BOOL _showRightDivider;
    double _width;
    NSString *_text;
    NSImage *_image;
    Xcode3BuildSettingsGroupRowCell *_cell;
}

@property(nonatomic) __weak Xcode3BuildSettingsGroupRowCell *cell; // @synthesize cell=_cell;
@property(nonatomic) BOOL showRightDivider; // @synthesize showRightDivider=_showRightDivider;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) double width; // @synthesize width=_width;
- (void).cxx_destruct;
- (struct CGRect)draggableRectForSubtitleBounds:(struct CGRect)arg1;
- (struct CGRect)boundingRectWithSize:(struct CGSize)arg1 options:(unsigned long long)arg2;
- (void)drawInRect:(struct CGRect)arg1;
- (id)attributedText;

@end

