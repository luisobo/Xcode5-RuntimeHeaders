/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTInvalidation-Protocol.h"

@class DVTDevice;

@protocol DVTDevicesWindowDetailViewController <DVTInvalidation>
@property(retain) DVTDevice *device;

@optional
- (void)detailViewDidDisappear;
- (void)detailViewDidAppear;
@end

