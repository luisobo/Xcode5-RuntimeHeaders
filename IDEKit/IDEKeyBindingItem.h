/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class IDEKeyBinding, NSArray, NSMutableArray, NSString;

@interface IDEKeyBindingItem : NSObject
{
    NSString *_title;
    IDEKeyBinding *_keyBinding;
    NSMutableArray *_childItems;
}

@property(readonly) IDEKeyBinding *keyBinding; // @synthesize keyBinding=_keyBinding;
@property(copy) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)removeObjectFromChildItemsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inChildItemsAtIndex:(unsigned long long)arg2;
- (id)_childItems;
@property(readonly, copy) NSMutableArray *mutableChildItems;
@property(readonly, copy) NSArray *childItems; // @synthesize childItems=_childItems;
- (void)setChildItems:(id)arg1;
@property(readonly) NSString *toolTip;
@property(readonly) BOOL isGroupedAlternate;
@property(readonly) BOOL isAlternate;
- (id)initWithTitle:(id)arg1 keyBinding:(id)arg2 childItems:(id)arg3;

@end

