//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBViewTracker.h"

@interface IBNSViewTracker : IBViewTracker
{
    BOOL _shouldResizeLikeWindow;
}

- (void)placeSubviewForAutolayoutDocumentApplyingConstraintsInLayoutFrame:(struct CGRect)arg1;
- (BOOL)shouldPinEditorCanvasFrameForResizing;
- (BOOL)shouldSizeUsingFrameDeciderForEvent:(id)arg1;
- (id)generateFrameDeciderForPlacingSubviewInFrameWithInitialEvent:(id)arg1;
- (id)initWithTrackedView:(id)arg1 measurementTarget:(id)arg2 frameController:(id)arg3 knob:(long long)arg4;

@end

