//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTDeviceLocator, DVTDeviceManager, DVTObservingToken;

@interface _DVTDeviceLocatorTracker : NSObject
{
    DVTDeviceLocator *_deviceLocator;
    DVTDeviceManager *_deviceManager;
    DVTObservingToken *_observation;
}

@property(readonly) DVTDeviceLocator *deviceLocator; // @synthesize deviceLocator=_deviceLocator;
- (void).cxx_destruct;
- (void)stopLocatingAndObserving;
- (void)startLocating;
- (void)startObserving;
- (id)initWithDeviceLocator:(id)arg1 forDeviceManager:(id)arg2;

@end

