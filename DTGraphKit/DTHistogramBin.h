//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface DTHistogramBin : NSObject
{
    _Bool isFake;
    NSString *name;
    double start;
    double end;
    NSMutableArray *bars;
}

@property(retain) NSMutableArray *bars; // @synthesize bars;
@property(nonatomic) _Bool isFake; // @synthesize isFake;
@property(nonatomic) double end; // @synthesize end;
@property(nonatomic) double start; // @synthesize start;
@property(retain, nonatomic) NSString *name; // @synthesize name;
- (id)init;

@end

