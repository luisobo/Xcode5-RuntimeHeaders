/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTStackView_AppKitAutolayout.h"

@class NSGradient;

// Not exported
@interface GPUStackView_Autolayout : DVTStackView_AppKitAutolayout
{
    BOOL _drawsSeperatorLines;
    NSGradient *_seperatorLineGradient;
}

@property(retain, nonatomic) NSGradient *seperatorLineGradient; // @synthesize seperatorLineGradient=_seperatorLineGradient;
@property(nonatomic) BOOL drawsSeperatorLines; // @synthesize drawsSeperatorLines=_drawsSeperatorLines;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

