//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSString;

@interface IBAbstractStructureAreaDockLabelPopUp : NSView
{
    NSString *_title;
    unsigned long long _arrowEdge;
}

@property unsigned long long arrowEdge; // @synthesize arrowEdge=_arrowEdge;
@property(copy) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)bubblePath;
- (struct CGRect)titleRect;
- (struct CGRect)bubbleRect;
- (struct CGRect)rectToPopUpFromPoint:(struct CGPoint)arg1 inView:(id)arg2;
- (struct CGSize)sizeThatFits;
- (struct CGRect)contentRect;
- (unsigned long long)titleDrawingOptions;
- (id)attributedTitle;
- (id)attributedTitleForTitle:(id)arg1;
- (id)titleAttributes;
- (id)titleShadow;
- (id)titleColor;
- (id)titleFont;
- (id)titleParagraphStyle;
- (id)initWithFrame:(struct CGRect)arg1;

@end

