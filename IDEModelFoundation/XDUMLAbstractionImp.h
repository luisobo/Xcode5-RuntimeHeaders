/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEModelFoundation/XDUMLNamedElementImp.h>

#import "XDUMLAbstraction-Protocol.h"

@class NSMutableArray, NSString;

@interface XDUMLAbstractionImp : XDUMLNamedElementImp <XDUMLAbstraction>
{
    NSMutableArray *_targets;
    NSMutableArray *_sources;
}

- (void).cxx_destruct;
- (unsigned long long)visibility;
- (id)relatedElements;
- (void)addClient:(id)arg1;
- (void)addSupplier:(id)arg1;
- (id)clients;
- (id)suppliers;
- (id)sources;
- (id)targets;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

