/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface IDEQuickHelpData : NSObject
{
}

+ (id)typeForSymbolKind:(id)arg1 inContainerWithSymbolKind:(id)arg2;
+ (id)sdkFromDocument:(id)arg1 inWorkspace:(id)arg2;
+ (id)sdkFromExpressionSource:(id)arg1 fallbackURL:(id)arg2;
+ (void)indexSymbolForSourceExpression:(id)arg1 fromSource:(id)arg2 completionBlock:(id)arg3;
+ (void)quickHelpDataContextForSourceExpression:(id)arg1 fromSource:(id)arg2 completionBlock:(id)arg3;
+ (id)_indexQueriesSharedQueue;
- (void)queryCommentXMLFromIndexSymbol:(id)arg1 expressionSource:(id)arg2 completionBlock:(id)arg3;
- (void)queryResultForIndexSymbol:(id)arg1 expressionSource:(id)arg2 completionBlock:(id)arg3;
- (void)generateQueryResultForSourceExpression:(id)arg1 fromSource:(id)arg2 completionBlock:(id)arg3;

@end

