//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSEnumerator.h"

@class HFBTreeLeaf;

@interface HFBTreeEnumerator : NSEnumerator
{
    HFBTreeLeaf *currentLeaf;
    unsigned int childIndex;
}

- (id)nextObject;
- (id)initWithLeaf:(id)arg1;

@end

