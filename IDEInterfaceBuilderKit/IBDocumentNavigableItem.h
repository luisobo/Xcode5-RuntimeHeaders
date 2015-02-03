//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEKeyDrivenNavigableItem.h"

@class DVTObservingToken, NSString;

@interface IBDocumentNavigableItem : IDEKeyDrivenNavigableItem
{
    DVTObservingToken *nameToken;
    id <DVTCancellable> childWrappersToken;
    NSString *name;
}

+ (id)keyPathsForValuesAffectingLeaf;
+ (id)keyPathsForValuesAffectingGroupIdentifier;
+ (id)keyPathsForValuesAffectingImage;
+ (id)keyPathsForValuesAffectingRepresentedWrapper;
- (void).cxx_destruct;
- (void)willAccessChildItems;
- (id)contentDocumentLocation;
- (id)documentType;
- (id)childRepresentedObjects;
- (BOOL)isLeaf;
- (unsigned long long)indexOfChildItemForIdentifier:(id)arg1;
- (id)identifierForChildItem:(id)arg1;
- (id)groupIdentifier;
- (id)image;
- (id)name;
- (id)representedDocument;
- (id)representedWrapper;
- (void)primitiveInvalidate;
- (id)initWithRepresentedObject:(id)arg1;

@end

