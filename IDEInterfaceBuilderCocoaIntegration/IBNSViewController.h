//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBAbstractViewController.h"

#import "IBDocumentArchiving.h"

@class IBSimulatedMetricsContainer, NSArray, NSDictionary, NSString, NSView;

@interface IBNSViewController : IBAbstractViewController <IBDocumentArchiving>
{
    IBNSViewController *_parentViewController;
    NSView *_view;
    NSString *_explicitStoryboardIdentifier;
    NSArray *_storyboardSegueTemplates;
    IBSimulatedMetricsContainer *_inheritedSimulatedMetrics;
    NSDictionary *_storyboardSegueDestinationOptions;
    NSString *_title;
    NSString *_nibName;
    NSString *_nibBundleIdentifier;
    NSDictionary *_externalObjectsTableForViewLoading;
    unsigned long long _showSeguePresentationStyle;
    NSString *_uniqueIdentifierForStoryboardCompilation;
    NSArray *_childViewControllers;
}

+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
+ (struct CGRect)ibDefaultFrameForView;
+ (Class)ibViewClass;
@property(copy) NSArray *childViewControllers; // @synthesize childViewControllers=_childViewControllers;
@property(copy) NSString *uniqueIdentifierForStoryboardCompilation; // @synthesize uniqueIdentifierForStoryboardCompilation=_uniqueIdentifierForStoryboardCompilation;
@property unsigned long long showSeguePresentationStyle; // @synthesize showSeguePresentationStyle=_showSeguePresentationStyle;
@property(copy) NSDictionary *externalObjectsTableForViewLoading; // @synthesize externalObjectsTableForViewLoading=_externalObjectsTableForViewLoading;
@property(copy) NSString *nibBundleIdentifier; // @synthesize nibBundleIdentifier=_nibBundleIdentifier;
@property(copy) NSString *nibName; // @synthesize nibName=_nibName;
@property(copy) NSString *title; // @synthesize title=_title;
- (void)setView:(id)arg1;
- (id)view;
- (void).cxx_destruct;
- (void)setStoryboardSegueTemplates:(id)arg1;
- (id)storyboardSegueTemplates;
- (id)explicitStoryboardIdentifier;
- (void)setExplicitStoryboardIdentifier:(id)arg1;
- (id)effectiveStoryboardIdentifierPrefix;
- (void)setInheritedSimulatedMetrics:(id)arg1;
- (id)inheritedSimulatedMetrics;
- (struct CGSize)effectiveSimulatedViewSize;
- (BOOL)ibUsesStandardIdentifierPropertySlice;
- (BOOL)ibCanSupportIdentifierProperty;
- (void)unarchivePlaceholderTable:(id)arg1;
- (void)archivePlaceholderTable:(id)arg1;
- (void)ibPrepareTopLevelControllerForStoryboardCompilation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForDocumentArchiver:(id)arg1;
- (Class)classForCoder;
- (id)ibTopLevelWindowTemplateForLayoutEngine:(id)arg1;
- (id)ibWindowWithCopiedViewHierarchySnapshotForLayoutEngine:(id)arg1 returningAddedRepresentedConstraintsForRepresentedViews:(id *)arg2;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)ibMakeDefaultView;
- (id)ibAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (void)ibCaptureDownstreamStoryboardPlaceholderTable:(id)arg1;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (CDUnknownBlockType)ibWindow:(id *)arg1 forUpdatingConstraintsInDocument:(id)arg2;
- (id)ibTopLevelViewForLayoutEngine:(id)arg1;
- (BOOL)ibIsLegalArbitrationUnitRoot;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (id)ibInheritableMetricsForDownstreamController:(id)arg1 viaSegue:(id)arg2;
- (id)ibEditorViewWithSuggestedSize:(struct CGSize)arg1 forDocument:(id)arg2;
- (id)ibDefaultViewForNewInstances;
- (struct CGSize)effectiveSimulatedContentSize;
- (id)ibEditorCanvasFrameControllerForDocument:(id)arg1;
- (BOOL)ibChildEditsWithSingleClick:(id)arg1;
- (BOOL)ibRequiresOutletToStoryboard;
- (Class)ibEditorClass;
- (id)ibPasteboardTypes;
- (id)ibDocumentationPropertyInfosForKeyPath:(id)arg1;
- (id)ibQualifyingInfoForDefaultLabel;
- (id)ibRuntimeClassName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

