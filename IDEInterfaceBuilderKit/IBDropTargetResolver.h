/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"
#import "IBDragAndDropInsertionIndicatorDelegate-Protocol.h"
#import "IBDragAndDropPolicyDelegate-Protocol.h"

@class DVTStackBacktrace, IBDocument, IBEditorCanvasFrameController, IBOrderedRelationshipDragAndDropPolicy, NSArray, NSString, NSView;

@interface IBDropTargetResolver : NSObject <IBDragAndDropPolicyDelegate, IBDragAndDropInsertionIndicatorDelegate, DVTInvalidation>
{
    id editedObject;
    NSArray *policies;
    IBOrderedRelationshipDragAndDropPolicy *activePolicy;
    IBDropTargetResolver *parentDropTargetResolver;
    IBEditorCanvasFrameController *frameController;
    BOOL duringDrag;
    id <IBDropTargetResolverDelegate> delegate;
}

+ (void)initialize;
@property(readonly) IBEditorCanvasFrameController *frameController; // @synthesize frameController;
@property(readonly) IBDropTargetResolver *parentDropTargetResolver; // @synthesize parentDropTargetResolver;
@property(readonly) NSObject *editedObject; // @synthesize editedObject;
@property __weak id <IBDropTargetResolverDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)insertionPolicy:(id)arg1 orderedRelationInsertionIndexDidChange:(long long)arg2;
- (void)insertionPolicy:(id)arg1 orderedRelationInsertionIndexWillChange:(long long)arg2;
- (struct CGRect)insertionPolicy:(id)arg1 confinementRectForRepresentedObject:(id)arg2;
- (struct CGRect)insertionPolicy:(id)arg1 dragAlignmentRectForObject:(id)arg2 relatedToRepresentedObject:(id)arg3;
- (struct CGRect)insertionPolicy:(id)arg1 rectInWindowSpaceForRepresentedObject:(id)arg2;
- (id)insertionPolicy:(id)arg1 orderedRelationForKeyPath:(id)arg2 representedObject:(id)arg3;
- (struct CGRect)dragAlignmentRectForRelatedObject:(id)arg1;
- (struct CGRect)rectInWindowSpaceForEditedObject;
- (struct CGRect)dragAndDropInsertionIndicator:(id)arg1 dragAlignmentRectForRelatedObject:(id)arg2;
- (struct CGRect)dropRectForDragAndDropInsertionIndicator:(id)arg1;
- (unsigned long long)orderedRelationInsertionEdgeForDragAndDropInsertionIndicator:(id)arg1;
- (long long)orderedRelationInsertionIndexForDragAndDropInsertionIndicator:(id)arg1;
- (id)orderedRelationForDragAndDropInsertionIndicator:(id)arg1;
- (id)orderedRelationForKeyPath:(id)arg1;
- (id)targetRelationKeyPath;
- (struct CGRect)confinementRectForEditedObject;
- (void)setSecondaryGrowthDirection:(long long)arg1 forPoliciesWithRelation:(id)arg2;
- (void)setPrimaryGrowthDirection:(long long)arg1 forPoliciesWithRelation:(id)arg2;
- (BOOL)customizesDragInsertionIndicatorForDragInfo:(id)arg1;
- (void)customizePasteboardInsertionContext:(id)arg1 fromPasteboard:(id)arg2 andDraggingInfo:(id)arg3;
- (void)failToAcceptDragInfo:(id)arg1;
- (void)finishAcceptingDragInfo:(id)arg1;
- (void)prepareToAcceptDragInfo:(id)arg1;
- (BOOL)canAcceptDragInfo:(id)arg1;
- (id)policiesForRelation:(id)arg1;
- (id)firstPolicyAcceptingDragInfo:(id)arg1;
- (id)chooseDestinationForDragInfo:(id)arg1;
- (void)createTemporaryDropTargetResolverForObject:(id)arg1 whileInvoking:(id)arg2;
- (id)childDragCandidateForDragInfo:(id)arg1;
- (id)orderedRelationshipPolicyForToManyRelation:(id)arg1 pasteboardTypes:(id)arg2 primaryGrowthDirection:(long long)arg3 secondaryGrowthDirection:(long long)arg4;
- (id)orderedRelationshipPolicyForToManyRelation:(id)arg1 pasteboardTypes:(id)arg2 growthDirection:(long long)arg3;
- (id)orderedRelationshipPolicyForToManyRelation:(id)arg1 pasteboardType:(id)arg2 growthDirection:(long long)arg3;
- (void)populatePolicies:(id)arg1;
@property(readonly) NSArray *policies;
@property(readonly) NSView *editorView;
@property(readonly) IBDocument *document;
- (void)primitiveInvalidate;
- (id)initWithEditedObject:(id)arg1 parent:(id)arg2 frameController:(id)arg3;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

