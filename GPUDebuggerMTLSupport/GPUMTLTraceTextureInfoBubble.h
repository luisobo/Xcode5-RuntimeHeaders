//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUTraceResourceInfoBubble.h"

@class NSTextField;

__attribute__((visibility("hidden")))
@interface GPUMTLTraceTextureInfoBubble : GPUTraceResourceInfoBubble
{
    NSTextField *_typeLabel;
    NSTextField *_formatLabel;
    NSTextField *_widthLabel;
    NSTextField *_heightLabel;
    NSTextField *_depthLabel;
}

- (void).cxx_destruct;
- (void)viewDidInstall;
- (id)initWithResource:(id)arg1 parentView:(id)arg2 owner:(id)arg3 modelFactory:(id)arg4 renderingAttributes:(id)arg5;

@end

