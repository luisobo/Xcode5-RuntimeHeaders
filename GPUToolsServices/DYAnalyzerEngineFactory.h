//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DYDeviceInfo;

@interface DYAnalyzerEngineFactory : NSObject
{
    DYDeviceInfo *_deviceInfo;
}

+ (id)newAnalyzerEngineFactoryForGraphicsAPI:(unsigned int)arg1 deviceInfo:(id)arg2;
- (void).cxx_destruct;
- (unsigned int)_supportedGraphicsAPI;
- (id)newAnalyzerEngine;
- (id)initWithDeviceInfo:(id)arg1;

@end

