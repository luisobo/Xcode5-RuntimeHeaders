//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

@class DVTGradientImageButton, NSTextField;

@interface DVTDeviceTableCellView : NSTableCellView
{
    DVTGradientImageButton *_connectButton;
    DVTGradientImageButton *_ignoreButton;
    NSTextField *_subtitleLabel;
}

@property(retain) NSTextField *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain) DVTGradientImageButton *ignoreButton; // @synthesize ignoreButton=_ignoreButton;
@property(retain) DVTGradientImageButton *connectButton; // @synthesize connectButton=_connectButton;
- (void).cxx_destruct;
- (void)setBackgroundStyle:(long long)arg1;

@end

