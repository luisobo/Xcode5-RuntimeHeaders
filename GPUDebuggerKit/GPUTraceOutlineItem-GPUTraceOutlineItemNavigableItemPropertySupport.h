//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUTraceOutlineItem.h"

#import "IDEKeyDrivenNavigableItemRepresentedObject.h"

@class DVTDocumentLocation, DVTFileDataType, IDEFileReference, NSImage, NSString;

@interface GPUTraceOutlineItem (GPUTraceOutlineItemNavigableItemPropertySupport) <IDEKeyDrivenNavigableItemRepresentedObject>
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) NSString *navigableItem_name;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) DVTFileDataType *navigableItem_documentType;
- (id)ideModelObjectTypeIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;
@end

