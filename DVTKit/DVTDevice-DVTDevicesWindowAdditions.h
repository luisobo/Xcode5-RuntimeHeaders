/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTDevice.h"

@class NSArray, NSImage;

@interface DVTDevice (DVTDevicesWindowAdditions)
+ (id)keyPathsForValuesAffectingDvt_hideBusyIndicator;
+ (id)keyPathsForValuesAffectingDvt_hideStatusImage;
+ (id)keyPathsForValuesAffectingDvt_statusImage;
@property(readonly) _Bool dvt_deviceIsSimulator;
@property(readonly) _Bool dvt_hideBusyIndicator;
@property(readonly) _Bool dvt_hideStatusImage;
@property(readonly) NSImage *dvt_statusImage;
@property(readonly) _Bool deviceIsBusy;
@property(readonly) NSArray *deviceSummaryPropertyDictionaries;
@property(readonly) int deviceWindowCategory;

// Remaining properties
@property(readonly) _Bool isWireless;
@end

