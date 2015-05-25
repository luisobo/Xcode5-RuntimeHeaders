//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEModelEditor/XDGraphic.h>

@class NSButtonCell, NSMutableArray, NSMutableIndexSet;

@interface XDCompartmentGraphic : XDGraphic
{
    id _dataSource;
    NSMutableArray *_compartments;
    NSButtonCell *_triangleCell;
    NSMutableIndexSet *_collapsedCompartments;
    struct _XDCompartmentGraphicFlags _cgFlags;
}

+ (struct CGSize)_defaultMinSize;
+ (Class)defaultGraphicContentsEditorClass;
+ (Class)defaultShadowStyleClass;
+ (Class)defaultFillStyleClass;
+ (Class)defaultCompartmentClass;
+ (Class)defaultAuxiliaryStorageClass;
+ (void)initialize;
- (void).cxx_destruct;
- (BOOL)mouseDown:(id)arg1 inView:(id)arg2;
- (void)mouseMoved:(id)arg1 inView:(id)arg2;
- (void)_userCollapseCompartmentAtIndex:(long long)arg1 inDiagramView:(id)arg2;
- (void)_userExpandCompartmentAtIndex:(long long)arg1 inDiagramView:(id)arg2;
- (BOOL)_userCanCollapseCompartmentAtIndex:(long long)arg1;
- (BOOL)_userCanExpandCompartmentAtIndex:(long long)arg1;
- (long long)clickedCompartmentItemIndexInDiagramView:(id)arg1;
- (long long)clickedCompartmentIndexInDiagramView:(id)arg1;
- (BOOL)_userCanEditItemInCompartment:(id)arg1 atIndex:(long long)arg2;
- (void)drawInteriorInView:(id)arg1;
- (void)drawCompartmentAtIndex:(long long)arg1 inDiagramView:(id)arg2;
- (void)_willDisplayItem:(id)arg1 atIndex:(long long)arg2 inCompartment:(id)arg3 inDiagramView:(id)arg4;
- (id)fillPath;
- (id)fillPathForContents;
- (id)fillPathForTitle;
- (void)setFillColor:(id)arg1;
- (void)graphicWillBeDeselectedInDiagramView:(id)arg1;
- (void)graphicWasSelectedInDiagramView:(id)arg1;
- (id)selectedItemsEnumeratorInDiagramView:(id)arg1;
- (long long)numberOfSelectedItemsInDiagramView:(id)arg1;
- (long long)indexOfSelectedItemInDiagramView:(id)arg1;
- (BOOL)isItemAtIndex:(long long)arg1 selectedInCompartmentAtIndex:(long long)arg2 diagramView:(id)arg3;
- (void)deselectAllInDiagramView:(id)arg1;
- (void)selectAllInDiagramView:(id)arg1;
- (void)deselectItemAtIndex:(long long)arg1 inCompartmentAtIndex:(long long)arg2 diagramView:(id)arg3;
- (void)selectItemAtIndex:(long long)arg1 inCompartmentAtIndex:(long long)arg2 diagramView:(id)arg3;
- (void)selectItemAtIndex:(long long)arg1 inCompartmentAtIndex:(long long)arg2 diagramView:(id)arg3 byExtendingSelection:(BOOL)arg4;
- (void)_postSelectionDidChangeNotificationInDiagramView:(id)arg1;
- (BOOL)_enableSelectionPostingAndPostInDiagramView:(id)arg1;
- (void)_disableSelectionPostingInDiagramView:(id)arg1;
- (long long)indexOfSelectedCompartmentInDiagramView:(id)arg1;
- (BOOL)sizeToFitWithTrackingMask:(unsigned long long)arg1;
- (double)maximumWidthOfCompartments;
- (double)maximumWidthOfCompartmentAtIndex:(long long)arg1;
- (long long)indexOfCompartmentItemAtPoint:(struct CGPoint)arg1;
- (long long)indexOfCompartmentAtPoint:(struct CGPoint)arg1;
- (struct _NSRange)compartmentsInRect:(struct CGRect)arg1;
- (struct CGRect)frameOfItemAtIndex:(long long)arg1 inCompartmentAtIndex:(long long)arg2;
- (struct CGRect)frameOfCompartmentDisclosureTriangleAtIndex:(long long)arg1;
- (struct CGRect)frameOfCompartmentLabelAtIndex:(long long)arg1;
- (struct CGRect)frameOfCompartmentAtIndex:(long long)arg1;
- (double)_heightOfCompartmentAtIndex:(long long)arg1;
- (double)_heightOfCompartmentLabelAtIndex:(long long)arg1;
- (void)rollDownAllCompartments;
- (void)rollUpAllCompartments;
- (void)collapseAllCompartments;
- (void)collapseCompartmentAtIndex:(long long)arg1;
- (void)collapseCompartment:(id)arg1;
- (void)expandAllCompartments;
- (void)expandCompartmentAtIndex:(long long)arg1;
- (void)expandCompartment:(id)arg1;
- (BOOL)hasCollapsibleCompartments;
- (BOOL)hasExpandableCompartments;
- (BOOL)isCompartmentExpanded:(id)arg1;
- (BOOL)isCompartmentExpandedAtIndex:(long long)arg1;
- (void)noteNumberOfCompartmentsChanged;
- (void)reloadData;
- (void)tile;
- (id)compartmentWithIdentifier:(id)arg1;
- (id)compartmentAtIndex:(long long)arg1;
- (void)removeCompartmentAtIndex:(long long)arg1;
- (void)removeCompartment:(id)arg1;
- (void)insertCompartment:(id)arg1 atIndex:(long long)arg2;
- (void)addCompartment:(id)arg1;
- (long long)numberOfItemsInCompartmentAtIndex:(long long)arg1;
- (long long)numberOfCompartments;
- (id)compartments;
- (unsigned long long)knobPositionMask;
- (struct CGPoint)magnetLocationForConnection:(id)arg1;
- (BOOL)canDrawShadow;
- (BOOL)canFlipHorizontally;
- (BOOL)canFlipVertically;
- (BOOL)rollsUpCompartments;
- (void)setRollsUpCompartments:(BOOL)arg1;
- (BOOL)alwaysDrawsCompartmentLabel;
- (void)setAlwaysDrawsCompartmentLabel:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)primitiveInvalidate;
- (id)init;
- (id)operationColor;
- (void)setOperationColor:(id)arg1;
- (id)attributeColor;
- (void)setAttributeColor:(id)arg1;
- (id)nameColor;
- (void)setNameColor:(id)arg1;
- (id)operationFont;
- (void)setOperationFont:(id)arg1;
- (id)attributeFont;
- (void)setAttributeFont:(id)arg1;
- (id)nameFont;
- (void)setNameFont:(id)arg1;

@end

