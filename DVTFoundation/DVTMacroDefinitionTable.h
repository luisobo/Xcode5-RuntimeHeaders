//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSDictionary, NSSet, NSString;

@interface DVTMacroDefinitionTable : NSObject <NSCopying, NSMutableCopying>
{
    struct DVTMacroValueAssignmentMapTable *_mapTable;
    NSString *_label;
    int _cacheLock;
    NSDictionary *_cachedDictRep;
    NSSet *_cachedMacroNameSet;
    unsigned long long _cachedHash;
    int _retainCount;
    BOOL _isImmutable;
    BOOL _postsChangeNotifications;
    CDUnknownBlockType _willSetValueBlock;
    CDUnknownBlockType _didSetValueBlock;
}

+ (id)macroNameRegistry;
+ (id)newWithLabel:(id)arg1;
@property BOOL postsChangeNotifications; // @synthesize postsChangeNotifications=_postsChangeNotifications;
- (void).cxx_destruct;
- (id)description;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (void)assertInternalConsistency;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)makeImmutable;
- (BOOL)isImmutable;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)removeAllMacros;
- (void)removeMacroNames:(id)arg1;
- (void)removeMacroNames:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
- (void)removeMacroName:(id)arg1;
- (void)setMacroNamesAndValuesFromMacroDefinitionTable:(id)arg1;
- (void)setMacroNamesAndValuesFromDictionary:(id)arg1;
- (id)allMacroNames;
- (id)dictionaryRepresentation;
- (void)enumerateMacroNamesAndValuesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateValuesForMacroName:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)valueForMacroName:(id)arg1 conditionSet:(id)arg2;
- (void)parseAndSetValue:(id)arg1 forMacroName:(id)arg2 conditionSet:(id)arg3;
- (void)setLiteralValue:(id)arg1 forMacroName:(id)arg2 conditionSet:(id)arg3;
- (void)setValue:(id)arg1 forMacroName:(id)arg2 conditionSet:(id)arg3;
- (void)discardCaches;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(copy) CDUnknownBlockType didSetValueBlock;
@property(copy) CDUnknownBlockType willSetValueBlock;
- (unsigned long long)count;
- (unsigned long long)numberOfDefinitions;
- (unsigned long long)numberOfMacros;
@property(copy) NSString *label;
- (void)dealloc;
- (id)init;
- (id)initWithLabel:(id)arg1;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;

@end

