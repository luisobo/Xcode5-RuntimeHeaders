/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTLogAspect, NSString;

@interface IDECodesignIssueResolutionOption : NSObject
{
    BOOL _requiresUserInteraction;
    NSString *_name;
    DVTLogAspect *_logAspect;
}

@property(readonly) DVTLogAspect *logAspect; // @synthesize logAspect=_logAspect;
@property(readonly) BOOL requiresUserInteraction; // @synthesize requiresUserInteraction=_requiresUserInteraction;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)invokeOptionWithWindowOrNil:(id)arg1;
- (id)initWithLogAspect:(id)arg1;

@end

