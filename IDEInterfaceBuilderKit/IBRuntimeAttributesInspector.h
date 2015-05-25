//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBInspectorViewController.h>

#import "NSTableViewDelegate.h"

@class DVTBorderedView, DVTObservingToken, IBPasteboardAwareTableView, IDEControlGroup, NSArray, NSButton, NSDictionary, NSIndexSet, NSMenu, NSSet, NSString;

@interface IBRuntimeAttributesInspector : IBInspectorViewController <NSTableViewDelegate>
{
    NSDictionary *_customAttributeTypes;
    NSButton *_removeButton;
    BOOL _editSelectedRowAfterRefresh;
    DVTObservingToken *_selectionObserver;
    BOOL _reloadingData;
    NSIndexSet *_rowIndexesToSelectAfterRefresh;
    NSSet *_draggedAttributes;
    NSArray *_userDefinedRuntimeAttributes;
    NSString *_currentPasteboardDragMarker;
    IDEControlGroup *_controlGroup;
    DVTBorderedView *_controlBar;
    IBPasteboardAwareTableView *_attributesTableView;
    NSMenu *_typeMenu;
}

+ (BOOL)supportsMultipleObjectInspection;
@property(retain, nonatomic) NSMenu *typeMenu; // @synthesize typeMenu=_typeMenu;
@property(retain, nonatomic) IBPasteboardAwareTableView *attributesTableView; // @synthesize attributesTableView=_attributesTableView;
@property(retain, nonatomic) DVTBorderedView *controlBar; // @synthesize controlBar=_controlBar;
@property(retain, nonatomic) IDEControlGroup *controlGroup; // @synthesize controlGroup=_controlGroup;
@property(nonatomic, getter=isReloadingData) BOOL reloadingData; // @synthesize reloadingData=_reloadingData;
@property(copy, nonatomic) NSString *currentPasteboardDragMarker; // @synthesize currentPasteboardDragMarker=_currentPasteboardDragMarker;
@property(copy, nonatomic) NSArray *userDefinedRuntimeAttributes; // @synthesize userDefinedRuntimeAttributes=_userDefinedRuntimeAttributes;
@property(copy, nonatomic) NSSet *draggedAttributes; // @synthesize draggedAttributes=_draggedAttributes;
@property(retain, nonatomic) NSIndexSet *rowIndexesToSelectAfterRefresh; // @synthesize rowIndexesToSelectAfterRefresh=_rowIndexesToSelectAfterRefresh;
- (void).cxx_destruct;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 acceptContentsOfPasteboard:(id)arg2;
- (BOOL)tableView:(id)arg1 removeRowsWithIndexes:(id)arg2;
- (BOOL)tableView:(id)arg1 canRemoveRowsWithIndexes:(id)arg2;
- (BOOL)tableView:(id)arg1 canWriteRowsWithIndexesToPasteboard:(id)arg2;
- (BOOL)tableView:(id)arg1 canAcceptContentsOfPasteboard:(id)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)findIndicatorContentViewForInspectedKeyPath:(id)arg1 withContext:(id)arg2;
- (void)editImageValue:(id)arg1;
- (void)editColorValue:(id)arg1;
- (void)editValue:(id)arg1;
- (void)editType:(id)arg1;
- (void)editKeyPath:(id)arg1;
- (void)editAttributeForSender:(id)arg1 editBlock:(CDUnknownBlockType)arg2;
- (void)doubleClickedTableView:(id)arg1;
- (void)removeUserDefinedRuntimeAttribute:(id)arg1;
- (void)insertUserDefinedRuntimeAttribute:(id)arg1;
- (void)refreshRemoveButtonEnabledState;
- (id)selectedAttributes;
- (id)defaultType;
- (id)userDefinedRuntimeAttributeTypeForTypeIdentifier:(id)arg1 isLocalized:(BOOL)arg2;
- (id)customAttributeTypes;
- (void)reloadTableViewDataIgnoringEditingActions;
- (id)contentLayoutView;
- (void)setContent:(id)arg1;
- (void)loadView;
- (void)setupControlBarAfterLoading;
- (void)primitiveInvalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

