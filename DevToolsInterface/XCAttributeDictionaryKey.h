//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface XCAttributeDictionaryKey : NSString
{
    NSString *keyString;
    NSString *keyStringAlias;
    XCAttributeDictionaryKey *nextByLetter;
    unsigned char index;
    unsigned char warned;
}

+ (id)keyForString:(id)arg1 shouldCreate:(BOOL)arg2;
+ (void)initialize;
- (BOOL)isEqualToString:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (unsigned long long)hash;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)autorelease;
- (void)release;
- (id)retain;
- (id)description;
- (id)initWithKeyString:(id)arg1 index:(unsigned long long)arg2;

@end

