//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/PBXKeyBindings.h>

@class NSMutableArray, NSMutableDictionary, PBXKeyEquivalent;

@interface PBXTextKeyBindings : PBXKeyBindings
{
    NSMutableArray *_multiKeyPrefixes;
    PBXKeyEquivalent *_quoteBinding;
    PBXKeyEquivalent *_argumentBinding;
    NSMutableDictionary *_actionGroupBindings;
}

+ (id)systemKeyBindings;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)activate;
- (BOOL)keyEquivalentIsPrefix:(id)arg1;
- (id)multiKeyPrefixes;
- (id)dictionary;
- (id)_buildActionsToKeyEquivalents;
- (id)_buildKeyEquivalentsToActions;
- (id)_buildKeyEquivalentsToActionsFromDictionary:(id)arg1 withPrefix:(id)arg2;

@end

