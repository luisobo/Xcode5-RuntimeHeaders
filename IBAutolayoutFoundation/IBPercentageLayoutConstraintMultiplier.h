//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IBAutolayoutFoundation/IBLayoutConstraintMultiplier.h>

@class NSString;

@interface IBPercentageLayoutConstraintMultiplier : IBLayoutConstraintMultiplier
{
    NSString *_percentSignSuffix;
}

@property(readonly, nonatomic) NSString *percentSignSuffix; // @synthesize percentSignSuffix=_percentSignSuffix;
- (void).cxx_destruct;
- (id)multiplierBySimplifyingExpression;
- (id)multiplierByIncrementing;
- (id)multiplierByDecrementing;
- (id)multiplierByInverting;
- (id)initWithValue:(double)arg1 percentSignSuffix:(id)arg2;

@end

