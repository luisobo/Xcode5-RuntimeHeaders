/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEFoundation/IDELocalizationData.h>

@class NSMutableArray;

@interface _IDELocalizationDataReturn : IDELocalizationData
{
    NSMutableArray *_remainingDataToPublish;
}

+ (id)withArray:(id)arg1;
@property(retain) NSMutableArray *remainingDataToPublish; // @synthesize remainingDataToPublish=_remainingDataToPublish;
- (void).cxx_destruct;
- (void)onCompleted;
- (void)onNext:(id)arg1;
- (void)_next;
- (id)subscribe:(id)arg1;

@end

