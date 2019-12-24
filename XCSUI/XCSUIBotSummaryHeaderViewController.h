/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTViewController.h"

@class NSImageView, NSTextField, XCSBot;

@interface XCSUIBotSummaryHeaderViewController : DVTViewController
{
    XCSBot *_bot;
    NSImageView *_imageView;
    NSTextField *_botLabel;
}

@property __weak NSTextField *botLabel; // @synthesize botLabel=_botLabel;
@property __weak NSImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) XCSBot *bot; // @synthesize bot=_bot;
- (void).cxx_destruct;
- (void)refreshUI;
- (void)settings:(id)arg1;
- (void)integrate:(id)arg1;
- (void)loadView;

@end

