//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SpriteKit/SKNode.h>

@class CIFilter, SKShader;

@interface SKEffectNode : SKNode
{
}

@property(retain, nonatomic) SKShader *shader;
- (void)dealloc;
@property(nonatomic) BOOL shouldCenterFilter;
- (void)_flippedChangedFrom:(BOOL)arg1 to:(BOOL)arg2;
- (void)_scaleFactorChangedFrom:(float)arg1 to:(float)arg2;
@property(nonatomic) long long blendMode;
@property(nonatomic) BOOL shouldRasterize;
@property(nonatomic) BOOL shouldEnableEffects;
@property(retain, nonatomic) CIFilter *filter;
- (BOOL)isEqualToNode:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

