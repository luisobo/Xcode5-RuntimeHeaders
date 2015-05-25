//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPURenderJob.h"

__attribute__((visibility("hidden")))
@interface GPUMTLRenderJob : GPURenderJob
{
    unsigned int _attachmentIndex;
    unsigned long long _selectedLevel;
    unsigned long long _selectedSlice;
}

@property(readonly, nonatomic) unsigned int attachmentIndex; // @synthesize attachmentIndex=_attachmentIndex;
@property(nonatomic) unsigned long long selectedSlice; // @synthesize selectedSlice=_selectedSlice;
@property(nonatomic) unsigned long long selectedLevel; // @synthesize selectedLevel=_selectedLevel;
- (BOOL)showOverlay;
- (void)setRenderingAttributes:(id)arg1;
- (struct CGSize)imageSize;
- (BOOL)isColor;
- (BOOL)flipped;
- (id)displayElementName;
- (BOOL)isStencilDisplayElement;
- (BOOL)isDepthDisplayElement;
- (id)initWithResource:(id)arg1 modelFactory:(id)arg2 attachmentIndex:(unsigned int)arg3 overlayResource:(id)arg4 framebuffer:(id)arg5;

@end

