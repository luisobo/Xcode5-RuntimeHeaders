/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEBatchFindScopeRuleRow.h>

@class NSArray, NSTextField;

@interface IDEBatchFindScopeFileTypeRow : IDEBatchFindScopeRuleRow
{
    NSArray *_types;
    NSArray *_typeTitles;
    NSTextField *_otherTextField;
}

@property(readonly) NSArray *types; // @synthesize types=_types;
- (void).cxx_destruct;
- (id)criteriaNodesForMatchingPredicate:(id)arg1;
- (id)predicateForIndexPath:(id)arg1;
- (id)displayValueForPath:(id)arg1;
- (long long)childCountForIndexPath:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFileTypes:(id)arg1 andTypeTitles:(id)arg2;

@end

