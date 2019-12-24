/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GLToolsServices/DYGLResourceObject.h>

#import "DYTexture-Protocol.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface DYGLTextureObject : DYGLResourceObject <DYTexture>
{
    NSDictionary *_images;
    NSArray *_maxLayerSpecifiedForLevel;
    BOOL _generateMipmap;
    BOOL _immutableFormat;
    unsigned int _mipmapLevelsUsedMask;
    unsigned int _minFilter;
    unsigned int _magFilter;
    unsigned int _wrapS;
    unsigned int _wrapT;
    unsigned int _wrapR;
    int _baseLevel;
    int _maxLevel;
    float _maxAnisotropy;
    int _maxLevelSpecified;
    unsigned int _compareMode;
    unsigned int _compareFunc;
    unsigned int _swizzleR;
    unsigned int _swizzleG;
    unsigned int _swizzleB;
    unsigned int _swizzleA;
    float _minLod;
    float _maxLod;
    int _immutableLevels;
    id <DYTextureImage> _firstValidTextureImage;
}

@property(readonly, nonatomic) int immutableLevels; // @synthesize immutableLevels=_immutableLevels;
@property(readonly, nonatomic, getter=isImmutableFormat) BOOL immutableFormat; // @synthesize immutableFormat=_immutableFormat;
@property(readonly, nonatomic) float maxLod; // @synthesize maxLod=_maxLod;
@property(readonly, nonatomic) float minLod; // @synthesize minLod=_minLod;
@property(readonly, nonatomic) unsigned int swizzleA; // @synthesize swizzleA=_swizzleA;
@property(readonly, nonatomic) unsigned int swizzleB; // @synthesize swizzleB=_swizzleB;
@property(readonly, nonatomic) unsigned int swizzleG; // @synthesize swizzleG=_swizzleG;
@property(readonly, nonatomic) unsigned int swizzleR; // @synthesize swizzleR=_swizzleR;
@property(readonly, nonatomic) unsigned int compareFunc; // @synthesize compareFunc=_compareFunc;
@property(readonly, nonatomic) unsigned int compareMode; // @synthesize compareMode=_compareMode;
@property(readonly, nonatomic) int maxLevelSpecified; // @synthesize maxLevelSpecified=_maxLevelSpecified;
@property(readonly, nonatomic) float maxAnisotropy; // @synthesize maxAnisotropy=_maxAnisotropy;
@property(readonly, nonatomic) int maxLevel; // @synthesize maxLevel=_maxLevel;
@property(readonly, nonatomic) int baseLevel; // @synthesize baseLevel=_baseLevel;
@property(readonly, nonatomic) BOOL generateMipmap; // @synthesize generateMipmap=_generateMipmap;
@property(readonly, nonatomic) unsigned int wrapR; // @synthesize wrapR=_wrapR;
@property(readonly, nonatomic) unsigned int wrapT; // @synthesize wrapT=_wrapT;
@property(readonly, nonatomic) unsigned int wrapS; // @synthesize wrapS=_wrapS;
@property(readonly, nonatomic) unsigned int magFilter; // @synthesize magFilter=_magFilter;
@property(readonly, nonatomic) unsigned int minFilter; // @synthesize minFilter=_minFilter;
@property(readonly, nonatomic) id <DYTextureImage> firstValidTextureImage; // @synthesize firstValidTextureImage=_firstValidTextureImage;
@property(readonly, nonatomic) unsigned int mipmapLevelsUsedMask; // @synthesize mipmapLevelsUsedMask=_mipmapLevelsUsedMask;
- (void).cxx_destruct;
- (id)cubemapLabelForFaceIndex:(int)arg1;
@property(readonly, nonatomic) BOOL isFlipped;
@property(readonly, nonatomic) BOOL isCubemap; // @dynamic isCubemap;
@property(readonly, nonatomic) int maxMipmapLevel; // @dynamic maxMipmapLevel;
@property(readonly, nonatomic) int baseMipmapLevel; // @dynamic baseMipmapLevel;
- (unsigned int)layerCountForMipmapLevel:(unsigned int)arg1;
- (id)_findFirstValidTextureImage;
- (void)_findMaxLayerSpecifiedForAllLevels;
- (id)textureImageForMipmapLevel:(int)arg1 layer:(int)arg2;
- (id)initWithProperties:(id)arg1;
- (id)initWithResourceObject:(id)arg1 functionStream:(id)arg2 dataResolver:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) unsigned long long containerID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) int internalID;
@property(readonly, nonatomic) BOOL isStatic;
@property(readonly, copy, nonatomic) NSString *label;
@property(readonly, nonatomic) unsigned long long objectID;
@property(readonly, nonatomic) NSMutableDictionary *properties;
@property(readonly, nonatomic) unsigned int resourceType;
@property(readonly) Class superclass;
@property(readonly, nonatomic) unsigned int target;

@end
