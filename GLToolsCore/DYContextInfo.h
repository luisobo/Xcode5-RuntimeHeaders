//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DYGraphicsAPIInfo.h"
#import "NSCoding.h"

@class NSArray, NSString;

@interface DYContextInfo : NSObject <DYGraphicsAPIInfo, NSCoding>
{
    unsigned long long _identifier;
    unsigned long long _sharegroupIdentifier;
    NSArray *_renderers;
    NSString *_debugLabel;
    unsigned int _currentRendererIndex;
    int _api;
}

+ (void)load;
@property(retain, nonatomic) NSString *debugLabel; // @synthesize debugLabel=_debugLabel;
@property(readonly, nonatomic) int api; // @synthesize api=_api;
@property(readonly, nonatomic) unsigned int currentRendererIndex; // @synthesize currentRendererIndex=_currentRendererIndex;
@property(readonly, retain, nonatomic) NSArray *renderers; // @synthesize renderers=_renderers;
@property(readonly, nonatomic) unsigned long long sharegroupIdentifier; // @synthesize sharegroupIdentifier=_sharegroupIdentifier;
@property(readonly, nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
- (int)rendererType;
- (void)enumerateTextureTargets:(CDUnknownBlockType)arg1;
- (void)enumerateFramebufferDrawBuffers:(CDUnknownBlockType)arg1;
- (void)enumerateFramebufferColorAttachments:(CDUnknownBlockType)arg1;
- (void)enumerateFramebufferAttachments:(CDUnknownBlockType)arg1;
- (void)enumerateBufferTargets:(CDUnknownBlockType)arg1;
- (int)valueForLimit:(id)arg1;
- (BOOL)supportsCapabilitiesOfGraphicsAPI:(id)arg1;
- (void)determineTextureUnitLimitsForRendererAtIndex:(unsigned int)arg1 limits:(CDStruct_cc4e5495 *)arg2;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(unsigned long long)arg1 sharegroupIdentifier:(unsigned long long)arg2 renderers:(id)arg3 currentRendererIndex:(unsigned int)arg4 api:(int)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

