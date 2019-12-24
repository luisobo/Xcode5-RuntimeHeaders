/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "JSExport-Protocol.h"

@protocol SCNPhysicsWorldJSExport <JSExport>
@property id <SCNPhysicsContactDelegate> contactDelegate;
@property(nonatomic) double timeStep;
@property(nonatomic) double speed;
@property(nonatomic) struct SCNVector3 gravity;
- (void)updateCollisionPairs;
- (id)convexSweepTestWithShape:(id)arg1 fromTransform:(struct CATransform3D)arg2 toTransform:(struct CATransform3D)arg3 options:(id)arg4;
- (id)contactTestWithBody:(id)arg1 options:(id)arg2;
- (id)contactTestBetweenBody:(id)arg1 andBody:(id)arg2 options:(id)arg3;
- (id)rayTestWithSegmentFromPoint:(struct SCNVector3)arg1 toPoint:(struct SCNVector3)arg2 options:(id)arg3;
- (id)allBehaviors;
- (void)removeAllBehaviors;
- (void)removeBehavior:(id)arg1;
- (void)addBehavior:(id)arg1;
@end

