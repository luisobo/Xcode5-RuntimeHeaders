/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SpriteKit/SKNode.h>

@class NSColor;

@interface SKShapeNode : SKNode
{
    struct SKCShapeSprite *ss;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain) NSColor *strokeColor;
@property(retain) NSColor *fillColor;
- (void)setFillPath:(BOOL)arg1;
- (BOOL)fillPath;
@property double lineWidth;
@property(getter=isAntialiased) BOOL antialiased;
@property long long blendMode;
@property double renderQualityRatio;
@property double glowWidth;
- (struct CGRect)calculateAccumulatedFrame;
- (struct CGRect)frame;
@property struct CGPath *path;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

