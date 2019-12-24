/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"
#import "IBAutolayoutFrameDeciderDelegate-Protocol.h"

@class DVTStackBacktrace, IBDocument, IBPlatform, NSString;

@interface IBDocumentPlatformAdapter : NSObject <DVTInvalidation, IBAutolayoutFrameDeciderDelegate>
{
    IBDocument *_document;
}

+ (void)initialize;
@property(readonly) IBDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (void)toggleScreenMetricsFormFactor:(id)arg1;
- (BOOL)validateToggleScreenMetricsFormFactorItem:(id)arg1;
- (id)applicableInspectorCategoriesGivenSuggestion:(id)arg1;
- (struct CGSize)storyboardCanvasPositioningScaleForSimulatedMetricsContainer:(id)arg1;
- (void)storyboardDidDisableMemberConfigurations;
- (void)xibDidDisableMemberConfigurations;
- (void)storyboardDidSwitchToEditedMemberConfiguration:(id)arg1;
- (void)xibDidSwitchToEditedMemberConfiguration:(id)arg1;
- (id)implicitIntegratorBundleDependencyIdentifier;
- (void)populateEmptyXIBDocumentWithInitialPlaceholders;
- (struct CGSize)canvasViewFramePaddingSizeForOverlayScrollers;
- (id)storyboardMetricsSwitchingViewControllerClasses;
- (id)hybridNIBPackageRuntimeFileName;
- (id)compiledStoryboardInfoPlistFileName;
- (id)compiledStoryBoardIntermediateXibFileType;
- (void)addToManyOutletFromObject:(id)arg1 referencingInstnace:(id)arg2 byName:(id)arg3;
- (void)addOutletFromObject:(id)arg1 referencingInstnace:(id)arg2 byName:(id)arg3;
- (void)addActionFromSender:(id)arg1 toReceiver:(id)arg2 withSelector:(id)arg3;
- (id)forcedUpgradeFileTypeForFileType:(id)arg1;
- (id)intrinsicPackageContentForNewlyGeneratedPackageWithFileType:(id)arg1;
- (id)archiveTypeForFileType:(id)arg1;
- (id)variantForResolvingMediaResources;
- (id)documentCIImageNamed:(id)arg1 usingSizeValueForPlaceholderImageIfNeeded:(id)arg2;
- (void)frameDecider:(id)arg1 didPropagateFrameSize:(struct CGSize)arg2 toView:(id)arg3;
- (void)frameDecider:(id)arg1 didPropagateFrame:(struct CGRect)arg2 toView:(id)arg3;
- (void)finishChangingTargetRuntimeInCompiledIntermediateDocument;
- (Class)externalReferencePlaceholderClass;
- (BOOL)isObjectBuiltInXIBPlaceholder:(id)arg1;
- (id)storyboardExitPlaceholder;
- (id)storyboardFirstResponderPlaceholder;
- (id)connectToSourceTeardownMethodCounterpartsForContext:(id)arg1;
- (BOOL)supportsInternationalizationReturningError:(id *)arg1;
@property(readonly) IBPlatform *platform;
- (void)primitiveInvalidate;
- (id)initWithDocument:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

