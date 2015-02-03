//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XCSCore/XCSObject.h>

@class NSString, XCSTriggerConditions, XCSTriggerEmailConfiguration;

@interface XCSTrigger : XCSObject
{
}

+ (id)triggerWithType:(unsigned long long)arg1 name:(id)arg2 phase:(unsigned long long)arg3 conditions:(id)arg4 scriptBody:(id)arg5 emailConfiguration:(id)arg6;
- (BOOL)_validateType:(unsigned long long)arg1 name:(id)arg2 phase:(unsigned long long)arg3 conditions:(id)arg4 scriptBody:(id)arg5 emailConfiguration:(id)arg6;
- (BOOL)shouldExecuteForIntegration:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 name:(id)arg2 phase:(unsigned long long)arg3 conditions:(id)arg4 scriptBody:(id)arg5 emailConfiguration:(id)arg6 service:(id)arg7;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;

// Remaining properties
@property XCSTriggerConditions *conditions; // @dynamic conditions;
@property XCSTriggerEmailConfiguration *emailConfiguration; // @dynamic emailConfiguration;
@property NSString *name; // @dynamic name;
@property unsigned long long phase; // @dynamic phase;
@property NSString *scriptBody; // @dynamic scriptBody;
@property unsigned long long type; // @dynamic type;

@end

