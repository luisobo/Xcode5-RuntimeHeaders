//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DVTMacroExpansionOperator : NSObject
{
}

+ (id)operatorName;
+ (void)initialize;
+ (Class)replacementOperatorClassForOperatorNamed:(id)arg1;
+ (id)registeredReplacementOperatorClasses;
+ (void)registerReplacementOperatorClass:(Class)arg1;
+ (id)replacementOperatorRegistry;
+ (Class)retrievalOperatorClassForOperatorNamed:(id)arg1;
+ (id)registeredRetrievalOperatorClasses;
+ (void)registerRetrievalOperatorClass:(Class)arg1;
+ (id)retrievalOperatorRegistry;
+ (void)registerBuiltInOperators;
- (id)dvt_debugDescription;
- (id)parseError;
- (BOOL)hasParseError;
- (id)stringListByApplyingOperatorToStringList:(id)arg1 inMacroExpansionScope:(id)arg2;
- (id)stringByApplyingOperatorToString:(id)arg1 inMacroExpansionScope:(id)arg2;

@end

