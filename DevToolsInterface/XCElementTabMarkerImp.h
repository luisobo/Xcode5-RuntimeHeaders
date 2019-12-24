/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "XCElementTabMarkerP-Protocol.h"

@class NSMutableArray, NSString;

@interface XCElementTabMarkerImp : NSObject <XCElementTabMarkerP>
{
    NSMutableArray *_tabbers;
    long long _mark;
    BOOL _variableSized;
    BOOL _absolute;
}

@property(nonatomic) BOOL absolute; // @synthesize absolute=_absolute;
@property(nonatomic) BOOL variableSized; // @synthesize variableSized=_variableSized;
- (void)dealloc;
- (long long)mark;
- (void)resetMark;
- (void)removeTabber:(struct NSObject *)arg1;
- (void)registerTabber:(struct NSObject *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

