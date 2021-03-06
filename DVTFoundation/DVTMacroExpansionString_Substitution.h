/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DVTFoundation/DVTMacroExpansionString.h>

@class DVTMacroExpansionOperator, NSString<DVTMacroExpansion>;

@interface DVTMacroExpansionString_Substitution : DVTMacroExpansionString
{
    NSString<DVTMacroExpansion> *_macroNameExpr;
    BOOL _alwaysPreserve;
    unsigned int _numOperators;
    DVTMacroExpansionOperator *_operators[0];
}

+ (id)newWithOriginalString:(id)arg1 macroNameExpression:(id)arg2 preserveOriginalStringIfUnresolved:(BOOL)arg3 operators:(struct DVTArrayBuilder *)arg4;
- (void).cxx_destruct;
- (id)dvt_debugDescription;
- (void)dvt_assertInternalConsistency;
- (id)dvt_evaluateAsStringListInScope:(id)arg1 withState:(const struct DVTNestedMacroExpansionState *)arg2;
- (id)dvt_evaluateAsStringInScope:(id)arg1 withState:(const struct DVTNestedMacroExpansionState *)arg2;
- (BOOL)dvt_isLiteral;
- (void)dealloc;
- (id)initWithOriginalString:(id)arg1 macroNameExpression:(id)arg2 preserveOriginalStringIfUnresolved:(BOOL)arg3 operators:(struct DVTArrayBuilder *)arg4;

@end

