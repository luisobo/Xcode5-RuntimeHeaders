//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class SKPhysicsBody;

@interface SKPhysicsJoint : NSObject <NSCoding>
{
    BOOL __implicit;
    SKPhysicsBody *bodyA;
    SKPhysicsBody *bodyB;
    double reactionTorque;
    struct CGVector reactionForce;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(nonatomic) BOOL _implicit; // @synthesize _implicit=__implicit;
@property(readonly, nonatomic) double reactionTorque; // @synthesize reactionTorque;
@property(readonly, nonatomic) struct CGVector reactionForce; // @synthesize reactionForce;
@property(retain, nonatomic) SKPhysicsBody *bodyB; // @synthesize bodyB;
@property(retain, nonatomic) SKPhysicsBody *bodyA; // @synthesize bodyA;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

