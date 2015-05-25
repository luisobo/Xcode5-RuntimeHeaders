//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDEKeyDrivenNavigableItemRepresentedObject.h"

@class DVTDocumentLocation, DVTFileDataType, IDEFileReference, IDESymbolNavigator, IDEWorkspace, NSArray, NSImage, NSOperationQueue, NSString;

@interface IDESymbolNavigatorRootGroup : NSObject <IDEKeyDrivenNavigableItemRepresentedObject>
{
    NSOperationQueue *_queue;
    NSArray *_groups;
    IDEWorkspace *_workspace;
    IDESymbolNavigator *_navigator;
    unsigned long long _generation;
}

@property(readonly) NSOperationQueue *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)fetchSymbols:(id)arg1 generation:(unsigned long long)arg2 lastOperation:(id)arg3;
- (id)groups;
- (void)cancelOperations;
- (void)setSymbolNavigator:(id)arg1 identifiersToSelect:(id)arg2 identifiersToExpand:(id)arg3;
- (void)childrenWithNavigator:(id)arg1 identifiersToSelect:(id)arg2 identifiersToExpand:(id)arg3;
- (id)navigatorSymbolForIndexSymbol:(id)arg1 withNavigator:(id)arg2;
@property(readonly) NSString *navigableItem_name;
- (id)initWithWorkspace:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;

@end

