//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@interface SKRange : NSObject <NSCoding, NSCopying>
{
    double _lowerLimit;
    double _upperLimit;
}

+ (id)rangeWithValue:(double)arg1 variance:(double)arg2;
+ (id)rangeWithConstantValue:(double)arg1;
+ (id)rangeWithUpperLimit:(double)arg1;
+ (id)rangeWithLowerLimit:(double)arg1;
+ (id)rangeWithNoLimits;
+ (id)rangeWithLowerLimit:(double)arg1 upperLimit:(double)arg2;
@property double upperLimit; // @synthesize upperLimit=_upperLimit;
@property double lowerLimit; // @synthesize lowerLimit=_lowerLimit;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLowerLimit:(double)arg1 upperLimit:(double)arg2;

@end

