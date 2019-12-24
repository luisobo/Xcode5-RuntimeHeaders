/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface IDEModule : NSObject
{
    NSString *_name;
    NSDictionary *_docParams;
    NSMutableDictionary *_submodulesByName;
}

- (void).cxx_destruct;
- (id)description;
- (id)navigableItem_name;
- (id)submoduleWithName:(id)arg1 documentParameters:(id)arg2 createIfNeeded:(BOOL)arg3;
- (id)submodules;
- (BOOL)isLeaf;
- (id)documentParameters;
- (id)name;
- (id)init;
- (id)initWithName:(id)arg1 documentParameters:(id)arg2;

@end

