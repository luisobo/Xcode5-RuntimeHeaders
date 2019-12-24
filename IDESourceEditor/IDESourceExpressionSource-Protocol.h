/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTSourceExpressionSource-Protocol.h"

@protocol IDESourceExpressionSource <DVTSourceExpressionSource>
- (BOOL)isExpressionModuleImport:(id)arg1;
- (BOOL)isExpressionPoundImport:(id)arg1;
- (BOOL)expressionContainsExecutableCode:(id)arg1;
- (BOOL)isExpressionFunctionOrMethodCall:(id)arg1;
- (BOOL)isExpressionInFunctionOrMethodBody:(id)arg1;
- (BOOL)isExpressionFunctionOrMethodDefinition:(id)arg1;
- (BOOL)isExpressionInPlainCode:(id)arg1;
- (void)symbolsForExpression:(id)arg1 inQueue:(id)arg2 completionBlock:(id)arg3;

@optional
- (BOOL)isLocationInFunctionOrMethodBody:(id)arg1;
- (id)importStringInExpression:(id)arg1;
@end

