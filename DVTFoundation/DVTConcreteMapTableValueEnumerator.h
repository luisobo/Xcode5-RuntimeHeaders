//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSEnumerator.h"

@class DVTConcreteMapTable;

__attribute__((visibility("hidden")))
@interface DVTConcreteMapTableValueEnumerator : NSEnumerator
{
    DVTConcreteMapTable *mapTable;
    unsigned long long counter;
}

+ (id)enumeratorWithMapTable:(id)arg1;
- (void)dealloc;
- (id)nextObject;

@end

