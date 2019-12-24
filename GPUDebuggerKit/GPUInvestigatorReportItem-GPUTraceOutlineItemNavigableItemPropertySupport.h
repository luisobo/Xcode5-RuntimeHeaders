/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "GPUInvestigatorReportItem.h"

#import "IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h"

@class DVTDocumentLocation, DVTFileDataType, IDEFileReference, NSImage, NSString;

@interface GPUInvestigatorReportItem (GPUTraceOutlineItemNavigableItemPropertySupport) <IDEKeyDrivenNavigableItemRepresentedObject>
@property(readonly) NSImage *navigableItem_image;
@property(readonly) DVTFileDataType *navigableItem_documentType;
- (id)ideModelObjectTypeIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) NSString *navigableItem_name;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;
@end

