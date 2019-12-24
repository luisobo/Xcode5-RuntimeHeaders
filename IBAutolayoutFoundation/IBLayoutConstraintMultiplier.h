/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IBBinaryArchiving-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface IBLayoutConstraintMultiplier : NSObject <NSCopying, IBBinaryArchiving>
{
    double _value;
    NSString *_stringValue;
}

+ (id)multiplierWithString:(id)arg1;
+ (id)multiplierWithValue:(double)arg1;
@property(readonly, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(readonly, nonatomic) double effectiveValue; // @synthesize effectiveValue=_value;
- (void).cxx_destruct;
- (id)multiplierBySimplifyingExpression;
- (id)multiplierByIncrementing;
- (id)multiplierByDecrementing;
- (id)multiplierByInverting;
- (id)multiplierByEvaluatingToDecimal;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (BOOL)isEqualToMultiplier:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isLogicallyEqualToMultiplier:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)init;
- (id)initWithValue:(double)arg1 stringValue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

