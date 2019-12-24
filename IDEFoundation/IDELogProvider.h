/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"

@class DVTStackBacktrace, NSArray, NSString;

@interface IDELogProvider : NSObject <DVTInvalidation>
{
    id _domainItem;
}

+ (void)initialize;
@property(readonly) id domainItem; // @synthesize domainItem=_domainItem;
- (void).cxx_destruct;
- (id)ideModelObjectTypeIdentifier;
@property(readonly) NSArray *logRecords;
- (void)primitiveInvalidate;
- (id)initWithDomainItem:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

