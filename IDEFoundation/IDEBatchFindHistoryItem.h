/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"

@class DVTStackBacktrace, NSAttributedString, NSString;

@interface IDEBatchFindHistoryItem : NSObject <DVTInvalidation>
{
    NSAttributedString *_findAttributedString;
    NSAttributedString *_itemDescription;
    id _payload;
    int _findType;
}

+ (void)initialize;
@property(readonly) int findType; // @synthesize findType=_findType;
@property(retain, nonatomic) id payload; // @synthesize payload=_payload;
@property(readonly) NSAttributedString *itemDescription; // @synthesize itemDescription=_itemDescription;
@property(readonly) NSAttributedString *findAttributedString; // @synthesize findAttributedString=_findAttributedString;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)primitiveInvalidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFindAttributedString:(id)arg1 description:(id)arg2 payload:(id)arg3 findType:(int)arg4;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

