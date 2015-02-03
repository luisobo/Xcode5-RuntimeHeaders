//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEUtilityArea.h>

@class NSMutableDictionary;

@interface IDEInspectorArea : IDEUtilityArea
{
    NSMutableDictionary *_categoryControllers;
}

- (void).cxx_destruct;
- (BOOL)delegateFirstResponder;
- (id)_descendentsAcceptingKeyView:(id)arg1;
- (void)loadView;
- (id)placeholderStringForInputNavigableItems:(id)arg1 derivedItems:(id)arg2 inCategory:(id)arg3;
- (void)invalidateContentView:(id)arg1;
- (void)pushContentNavigables:(id)arg1 toInstalledSliceExentions:(id)arg2;
- (void)prepareToRemoveContentView:(id)arg1 forSlice:(id)arg2 inCategory:(id)arg3;
- (void)prepareToAddContentView:(id)arg1 forSlice:(id)arg2 inCategory:(id)arg3;
- (id)_contentViewForSlice:(id)arg1 inCategory:(id)arg2;
- (id)viewControllerForUtilitySlice:(id)arg1;
- (id)viewControllerForContentView:(id)arg1;
- (BOOL)documentsNeededForSlices:(id)arg1;
- (id)editorContributedCategoryExtensionsForNavigable:(id)arg1;
- (id)categoryIdentifiersForEditorExtension:(id)arg1;
- (id)titleKeyPathForSlice:(id)arg1;
- (id)titleForSlice:(id)arg1;
- (BOOL)categorySupportsMultipleSlices:(id)arg1;
- (id)slicesForNavigableItems:(id)arg1 inCategory:(id)arg2 withWorkspaceDocument:(id)arg3;
- (id)navigableItemsForInputNavigableItems:(id)arg1 inCategory:(id)arg2;
- (id)categoryControllerForCategory:(id)arg1;
- (id)preferredCategoriesPersistenceKey;
- (void)viewDidInstall;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

