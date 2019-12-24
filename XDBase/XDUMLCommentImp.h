/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <XDBase/XDUMLElementImp.h>

#import "XDUMLComment-Protocol.h"

@class NSString;

@interface XDUMLCommentImp : XDUMLElementImp <XDUMLComment>
{
    NSString *_body;
}

- (id)name;
- (void)removeObjectFromAnnotatedElementsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inAnnotatedElementsAtIndex:(unsigned long long)arg2;
- (void)setBody:(id)arg1;
- (BOOL)lazyCreateBucketNamed:(id)arg1;
- (id)annotatedElements;
- (id)body;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)tooltip;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

