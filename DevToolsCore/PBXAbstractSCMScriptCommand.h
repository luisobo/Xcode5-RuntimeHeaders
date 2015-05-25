//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSScriptCommand.h"

@class NSMutableDictionary, NSNumber;

@interface PBXAbstractSCMScriptCommand : NSScriptCommand
{
    NSNumber *_requestID;
    NSMutableDictionary *_finishedRequests;
}

- (void)dealloc;
- (id)returnValueFromInfo:(id)arg1;
- (void)returnScriptResultUsingInfo:(id)arg1;
- (void)requestDidFinish:(id)arg1;
- (id)performRequestWithItems:(id)arg1 onSCMManager:(id)arg2;
- (id)runCommandOnItems:(id)arg1 inProject:(id)arg2;
- (id)runCommandOnProject:(id)arg1;
- (id)argumentsForRequest;
- (id)requestType;
- (id)initWithCommandDescription:(id)arg1;

@end

