/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTAnnotationProvider.h"

#import "DVTInvalidation-Protocol.h"
#import "DVTTextAnnotationDelegate-Protocol.h"
#import "NSMenuDelegate-Protocol.h"

@class DVTObservingToken, DVTStackBacktrace, DVTTextStorage, IBAnnotationDataCache, IBCancellationToken, IBIndexClassDescriber, IDEAnnotationContext, NSObject<OS_dispatch_queue>, NSPopUpButtonCell, NSString;

@interface IBAnnotationProvider : DVTAnnotationProvider <DVTTextAnnotationDelegate, DVTInvalidation, NSMenuDelegate>
{
    IDEAnnotationContext *_annotationContext;
    NSPopUpButtonCell *_annotationPopUpCell;
    IBIndexClassDescriber *_indexClassDescriber;
    IBAnnotationDataCache *_annotationDataCache;
    BOOL _shouldUpdateFromParserImmediately;
    BOOL _annotationsShouldBeInteractive;
    NSObject<OS_dispatch_queue> *_indexQueryQueue;
    unsigned int _indexQueryBlockGeneration;
    DVTObservingToken *_kvoAssociatedWorkspaceIndexToken;
    id _sourceCodeDocumentDidChangeToken;
    id _sourceCodeDocumentDidAdjustNodeTypesToken;
    id _indexDidChangeNotificationToken;
    id _ibDidAddConnectionToken;
    id _ibDidRemoveConnectionToken;
    IBCancellationToken *_targetIdentifierCancellationToken;
    DVTTextStorage *_textStorage;
}

+ (id)annotationProviderForContext:(id)arg1 error:(id *)arg2;
+ (void)initialize;
@property(retain) DVTTextStorage *textStorage; // @synthesize textStorage=_textStorage;
- (void).cxx_destruct;
- (void)annotation:(id)arg1 willDrawInTextSidebarView:(id)arg2 withAnnotationsInSameLine:(id)arg3;
- (BOOL)annotation:(id)arg1 shouldDrawInTextSidebarView:(id)arg2 withAnnotationsInSameLine:(id)arg3;
- (void)didDeleteOrReplaceParagraphForAnnotation:(id)arg1;
- (void)didEndRolloverOnAnnotation:(id)arg1 inTextSidebarView:(id)arg2 event:(id)arg3;
- (void)didBeginRolloverOnAnnotation:(id)arg1 inTextSidebarView:(id)arg2 event:(id)arg3;
- (void)didDragAnnotation:(id)arg1 inTextSidebarView:(id)arg2 event:(id)arg3;
- (void)didClickAnnotation:(id)arg1 inTextSidebarView:(id)arg2 event:(id)arg3;
- (BOOL)shouldPermitConnectingFromAnnotation;
- (void)handleSingleClickOnAnnotation:(id)arg1 inTextSidebarView:(id)arg2;
- (id)referencingLocationsSortedForDisplayInPopUp:(id)arg1;
- (id)menuItemAttributedStringForConnectionAtLocation:(id)arg1;
- (void)annotationPopUpAction:(id)arg1;
- (void)menu:(id)arg1 willHighlightItem:(id)arg2;
- (void)highlightIBObjectsAssociatedWithAnnotation:(id)arg1;
- (void)highlightDestinationObjectInAllOpenEditorsForConnectionAtLocation:(id)arg1;
- (void)stopHighlightingAssociatedIBObjects;
- (void)revealDestinationObjectForConnectionAtLocation:(id)arg1;
- (id)destinationObjectLocationForConnection:(id)arg1 fromDocument:(id)arg2;
- (void)rebuildAnnotationsUsingDataCache;
- (id)rebuiltAnnotationFromCachedAnnotation:(id)arg1;
- (void)rebuildAnnotationsUsingIndex;
- (void)updateExistingAnnotationsUsingOpenIBDocuments;
- (id)existingAnnotationsForConnection:(id)arg1;
- (id)existingAnnotationsIgnoringKindWithName:(id)arg1 inClassNamed:(id)arg2;
- (id)existingAnnotationNamed:(id)arg1 inClassNamed:(id)arg2 matchingKind:(unsigned long long)arg3 inSet:(id)arg4;
- (void)removeAnnotation:(id)arg1;
- (void)stopObservingIBDocumentConnectionChanges;
- (void)startObservingIBDocumentConnectionChanges;
- (void)handleChangeInConnectionStateForConnection:(id)arg1 isConnected:(BOOL)arg2;
- (id)connectionLocationForConnection:(id)arg1;
- (void)stopObservingSourceCodeDocumentChanges;
- (void)startObservingSourceCodeDocumentChanges;
- (void)handleChangeInSourceCodeDocument:(id)arg1;
- (void)updateAnnotations;
- (id)updateAnnotationsByParsingDocument;
- (void)hideAnnotationsIfInsufficientData;
- (struct _NSRange)itemRangeForAnnotationInParsedDocument:(id)arg1;
- (void)recordAnnotationNamed:(id)arg1 type:(id)arg2 at:(struct _NSRange)arg3 inClassNamed:(id)arg4 matchingKind:(unsigned long long)arg5;
- (id)document;
- (id)classNamesInParsedDocument;
- (void)startObservingIndex;
- (void)stopObservingIndex;
- (id)index;
- (void)cacheAnnotations;
- (void)providerWillUninstall;
- (void)primitiveInvalidate;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

