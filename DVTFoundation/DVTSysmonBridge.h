/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDate, NSObject<OS_sysmon_request>, NSObject<OS_sysmon_row>;

@interface DVTSysmonBridge : NSObject
{
    BOOL _hasStarted;
    BOOL _isDisconnected;
    id <DVTSysmonBridgeDelegate> _delegate;
    NSDate *_currentSampleTimestamp;
    NSObject<OS_sysmon_request> *_sysmonRequest;
    NSObject<OS_sysmon_row> *_currentRow;
}

@property(nonatomic) BOOL isDisconnected; // @synthesize isDisconnected=_isDisconnected;
@property(nonatomic) BOOL hasStarted; // @synthesize hasStarted=_hasStarted;
@property(nonatomic) NSObject<OS_sysmon_row> *currentRow; // @synthesize currentRow=_currentRow;
@property(retain, nonatomic) NSObject<OS_sysmon_request> *sysmonRequest; // @synthesize sysmonRequest=_sysmonRequest;
@property(retain, nonatomic) NSDate *currentSampleTimestamp; // @synthesize currentSampleTimestamp=_currentSampleTimestamp;
@property(nonatomic) __weak id <DVTSysmonBridgeDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)disconnect;
- (void)startUpdates;
- (BOOL)getSInt64Value:(long long *)arg1 forProcessAttribute:(unsigned int)arg2;
- (id)initWithAttributes:(unsigned int)arg1;

@end

