//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

@class DVTGradientImageButton, NSTextField, NSTrackingArea;

@interface IDESourceControlCheckoutRecentsTableCellView : NSTableCellView
{
    BOOL _favorite;
    NSTextField *_subtitleTextField;
    BOOL _mouseInside;
    DVTGradientImageButton *_favoriteButton;
    NSTrackingArea *_trackingArea;
}

@property BOOL mouseInside; // @synthesize mouseInside=_mouseInside;
@property(retain) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property DVTGradientImageButton *favoriteButton; // @synthesize favoriteButton=_favoriteButton;
- (void).cxx_destruct;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
@property(nonatomic) BOOL favorite;
- (void)setFavoriteImageBasedOnBackgroundStyle:(long long)arg1;
- (void)setBackgroundStyle:(long long)arg1;

@end

