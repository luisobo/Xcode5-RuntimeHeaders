//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSSliderCell.h"

@interface IDEToyboxTimeSliderCell : NSSliderCell
{
}

- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawKnob:(struct CGRect)arg1;
- (void)drawBarInside:(struct CGRect)arg1 flipped:(BOOL)arg2;
- (struct CGSize)_knobSize;
- (struct CGRect)barRectFlipped:(BOOL)arg1;
- (struct CGRect)knobRectFlipped:(BOOL)arg1;

@end

