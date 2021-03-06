/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEKeyDrivenNavigableItem.h"

@class GPUTraceDocumentLocation, NSArray;

// Not exported
@interface GPUTraceProgramGroupNavigableItem : IDEKeyDrivenNavigableItem
{
    NSArray *_cachedChildRepresentedObjects;
    GPUTraceDocumentLocation *_cachedLocation;
    BOOL _displayRelatedDraws;
}

- (void).cxx_destruct;
- (BOOL)displayRelatedDraws:(BOOL)arg1;
- (void)invalidateChildItems;
- (id)childRepresentedObjects;
- (id)contentDocumentLocation;
- (id)name;
- (id)image;
- (id)documentType;
- (id)ideModelObjectTypeIdentifier;
- (id)initWithRepresentedObject:(id)arg1;

@end

