//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class DVTNotificationToken, NSButton, NSSegmentedControl, NSTextField;

@interface IDEToyHostingTitleView : NSView
{
    DVTNotificationToken *_fontAndColorThemeChangedNotificationToken;
    NSTextField *_titleField;
    NSButton *_closeButton;
    NSSegmentedControl *_segmentedControl;
    CDUnknownBlockType _clickHandler;
}

@property(copy) CDUnknownBlockType clickHandler; // @synthesize clickHandler=_clickHandler;
- (void).cxx_destruct;
- (void)dealloc;
- (void)mouseDown:(id)arg1;
@property(readonly) NSSegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(readonly) NSButton *closeButton; // @synthesize closeButton=_closeButton;
- (void)layout;
@property(readonly) NSTextField *titleField; // @synthesize titleField=_titleField;
- (void)setupViews;
- (void)_ideToyHostingTitleView_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

