/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h"

@class DVTDocumentLocation, DVTFileDataType, IDEFileReference, NSImage, NSString, NSURL;

@interface IDEToyboxDomainItem : NSObject <IDEKeyDrivenNavigableItemRepresentedObject>
{
    NSURL *_playgroundFileURL;
    DVTDocumentLocation *_documentLocation;
    NSString *_name;
}

+ (id)fileDataType;
@property(copy) NSString *name; // @synthesize name=_name;
@property(retain) DVTDocumentLocation *documentLocation; // @synthesize documentLocation=_documentLocation;
@property(copy) NSURL *playgroundFileURL; // @synthesize playgroundFileURL=_playgroundFileURL;
- (void).cxx_destruct;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) NSString *navigableItem_name;
- (id)initWithName:(id)arg1 playgroundFileURL:(id)arg2 toyboxLocation:(id)arg3;

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

