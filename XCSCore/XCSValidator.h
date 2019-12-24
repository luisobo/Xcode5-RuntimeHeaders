/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSError, NSMutableArray;

@interface XCSValidator : NSObject
{
    NSMutableArray *_privateErrors;
    NSArray *_errors;
}

+ (void)validate:(id)arg1 usingSchema:(id)arg2 identifier:(id)arg3 class:(Class)arg4 selector:(SEL)arg5 completionHandler:(id)arg6;
@property(copy, nonatomic) NSArray *errors; // @synthesize errors=_errors;
- (void).cxx_destruct;
- (void)_addError:(id)arg1 identifier:(id)arg2 class:(Class)arg3 selector:(SEL)arg4;
- (id)errorWithCode:(long long)arg1 message:(id)arg2 selector:(SEL)arg3 identifier:(id)arg4 class:(Class)arg5 selector:(SEL)arg6;
- (BOOL)_evaluateCandidate:(id)arg1 usingTest:(id)arg2 messageIfFails:(id)arg3 identifier:(id)arg4 class:(Class)arg5 selector:(SEL)arg6;
- (BOOL)_validateStructure:(id)arg1 usingSchema:(id)arg2 identifier:(id)arg3 class:(Class)arg4 selector:(SEL)arg5;
- (BOOL)isArray:(id)arg1 holdingElementsOfSet:(id)arg2 identifier:(id)arg3 class:(Class)arg4 selector:(SEL)arg5;
- (BOOL)isArrayUnique:(id)arg1 identifier:(id)arg2 class:(Class)arg3 selector:(SEL)arg4;
- (BOOL)isArray:(id)arg1 holdingExactNumberOfElements:(unsigned long long)arg2 identifier:(id)arg3 class:(Class)arg4 selector:(SEL)arg5;
- (BOOL)isArray:(id)arg1 holdingMaximumNumberOfElements:(unsigned long long)arg2 identifier:(id)arg3 class:(Class)arg4 selector:(SEL)arg5;
- (BOOL)isArray:(id)arg1 holdingMinimumNumberOfElements:(unsigned long long)arg2 identifier:(id)arg3 class:(Class)arg4 selector:(SEL)arg5;
- (BOOL)isArray:(id)arg1 containingObjectsOfValidatorType:(unsigned long long)arg2 identifier:(id)arg3 class:(Class)arg4 selector:(SEL)arg5;
- (BOOL)isArray:(id)arg1 containingObjectsOfClass:(Class)arg2 identifier:(id)arg3 class:(Class)arg4 selector:(SEL)arg5;
- (BOOL)isObject:(id)arg1 subclassOfClass:(Class)arg2 identifier:(id)arg3 class:(Class)arg4 selector:(SEL)arg5;
- (BOOL)isNumber:(id)arg1 greaterThanOrEqualTo:(id)arg2 identifier:(id)arg3 class:(Class)arg4 selector:(SEL)arg5;
- (BOOL)isNumber:(id)arg1 greaterThan:(id)arg2 identifier:(id)arg3 class:(Class)arg4 selector:(SEL)arg5;
- (BOOL)isNumber:(id)arg1 between:(id)arg2 and:(id)arg3 identifier:(id)arg4 class:(Class)arg5 selector:(SEL)arg6;
- (BOOL)isNumber:(id)arg1 notEqualToNumber:(id)arg2 identifier:(id)arg3 class:(Class)arg4 selector:(SEL)arg5;
- (BOOL)isNumber:(id)arg1 equalToNumber:(id)arg2 identifier:(id)arg3 class:(Class)arg4 selector:(SEL)arg5;
- (BOOL)isNumber:(id)arg1 lessThanOrEqualTo:(id)arg2 identifier:(id)arg3 class:(Class)arg4 selector:(SEL)arg5;
- (BOOL)isNumber:(id)arg1 lessThan:(id)arg2 identifier:(id)arg3 class:(Class)arg4 selector:(SEL)arg5;
- (BOOL)isDate:(id)arg1 between:(id)arg2 andDate:(id)arg3 identifier:(id)arg4 class:(Class)arg5 selector:(SEL)arg6;
- (BOOL)isDate:(id)arg1 equalToDate:(id)arg2 identifier:(id)arg3 class:(Class)arg4 selector:(SEL)arg5;
- (BOOL)isDate:(id)arg1 after:(id)arg2 identifier:(id)arg3 class:(Class)arg4 selector:(SEL)arg5;
- (BOOL)isDate:(id)arg1 before:(id)arg2 identifier:(id)arg3 class:(Class)arg4 selector:(SEL)arg5;
- (BOOL)isNotEmpty:(id)arg1 identifier:(id)arg2 class:(Class)arg3 selector:(SEL)arg4;
- (BOOL)isEmpty:(id)arg1 identifier:(id)arg2 class:(Class)arg3 selector:(SEL)arg4;
- (BOOL)isString:(id)arg1 MatchingRegex:(id)arg2 identifier:(id)arg3 class:(Class)arg4 selector:(SEL)arg5;
- (BOOL)isNotNil:(id)arg1 identifier:(id)arg2 class:(Class)arg3 selector:(SEL)arg4;
- (BOOL)isNil:(id)arg1 identifier:(id)arg2 class:(Class)arg3 selector:(SEL)arg4;
- (BOOL)isAlphanumeric:(id)arg1 identifier:(id)arg2 class:(Class)arg3 selector:(SEL)arg4;
- (BOOL)isIPv6:(id)arg1 identifier:(id)arg2 class:(Class)arg3 selector:(SEL)arg4;
- (BOOL)isIPv4:(id)arg1 identifier:(id)arg2 class:(Class)arg3 selector:(SEL)arg4;
- (BOOL)isURL:(id)arg1 identifier:(id)arg2 class:(Class)arg3 selector:(SEL)arg4;
- (BOOL)isEmail:(id)arg1 identifier:(id)arg2 class:(Class)arg3 selector:(SEL)arg4;
- (BOOL)isID:(id)arg1 identifier:(id)arg2 class:(Class)arg3 selector:(SEL)arg4;
- (BOOL)isUDID:(id)arg1 identifier:(id)arg2 class:(Class)arg3 selector:(SEL)arg4;
- (BOOL)isFormatValid:(unsigned long long)arg1 value:(id)arg2 identifier:(id)arg3 class:(Class)arg4 selector:(SEL)arg5;
- (BOOL)validateCustomObject:(id)arg1 info:(id)arg2 structure:(id)arg3 keyPath:(id)arg4 identifier:(id)arg5 class:(Class)arg6 selector:(SEL)arg7;
- (BOOL)validateNSString:(id)arg1 info:(id)arg2 structure:(id)arg3 keyPath:(id)arg4 identifier:(id)arg5 class:(Class)arg6 selector:(SEL)arg7;
- (BOOL)_validateProperty:(id)arg1 info:(id)arg2 structure:(id)arg3 keyPath:(id)arg4 identifier:(id)arg5 class:(Class)arg6 selector:(SEL)arg7;
- (BOOL)validate:(id)arg1 usingSchema:(id)arg2 keyPath:(id)arg3 identifier:(id)arg4 class:(Class)arg5 selector:(SEL)arg6;
- (void)explainWithClass:(Class)arg1 selector:(SEL)arg2;
- (id)description;
- (id)json;
@property(readonly, copy, nonatomic) NSError *lastError;
- (void)addErrorMessage:(id)arg1 selector:(SEL)arg2 identifier:(id)arg3 class:(Class)arg4 selector:(SEL)arg5;
- (id)init;

@end

