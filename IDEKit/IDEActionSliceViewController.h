/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEViewController.h>

#import "IDECapsuleViewController-Protocol.h"
#import "IDECapsuleViewDelegate-Protocol.h"

@class IDEExecutionAction, NSImage, NSString;

@interface IDEActionSliceViewController : IDEViewController <IDECapsuleViewController, IDECapsuleViewDelegate>
{
    IDEExecutionAction *_action;
    id <IDEActionSliceViewControllerDelegate> _delegate;
}

@property(retain) id <IDEActionSliceViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) IDEExecutionAction *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (void)capsuleView:(id)arg1 setTitle:(id)arg2;
- (void)capsuleViewDidClickRemoveButton:(id)arg1;
@property(readonly) BOOL canUndisclose;
@property BOOL canRemoveItems;
- (BOOL)capsuleViewCanBeRenamed:(id)arg1;
- (BOOL)capsuleViewCanBeRemoved:(id)arg1;
- (id)capsuleViewTitleForEditing:(id)arg1;
@property(readonly, copy) NSString *titleForDisplay;
- (id)initWithAction:(id)arg1;

// Remaining properties
@property BOOL canAddItems;
@property(readonly) BOOL canDrag;
@property(readonly) BOOL canRemove;
@property(readonly) BOOL canRename;
@property(readonly) BOOL canSelect;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) BOOL disclosedByDefault;
@property(readonly, copy) NSString *footerLabel;
@property(readonly) unsigned long long hash;
@property(readonly) NSImage *icon;
@property(readonly) Class superclass;

@end

