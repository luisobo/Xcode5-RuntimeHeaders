//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTLayoutView_ML.h"

@class IBSceneDockViewController, NSDictionary, NSString, NSValue;

@interface IBStoryboardCanvasFrameTitleCapsule : DVTLayoutView_ML
{
    IBSceneDockViewController *_dockViewController;
    NSDictionary *_titleAttributes;
    NSValue *_cachedTitleRect;
    BOOL _shouldShowDock;
    NSString *_title;
    id <IBStoryboardCanvasFrameTitleCapsuleDelegate> _delegate;
}

@property __weak id <IBStoryboardCanvasFrameTitleCapsuleDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL shouldShowDock; // @synthesize shouldShowDock=_shouldShowDock;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (BOOL)isOpaque;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (struct CGRect)titleRect;
- (void)invalidateCachedTitleRect;
- (void)willRemoveFromCanvas;
- (id)initWithFrame:(struct CGRect)arg1;

@end

