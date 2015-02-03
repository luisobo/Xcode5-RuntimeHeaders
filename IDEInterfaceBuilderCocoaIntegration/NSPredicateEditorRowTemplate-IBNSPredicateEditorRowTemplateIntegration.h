//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPredicateEditorRowTemplate.h"

@class NSArray, NSPopUpButton;

@interface NSPredicateEditorRowTemplate (IBNSPredicateEditorRowTemplateIntegration)
+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
+ (id)ibPreparedCompoundPredicateEditorRowTemplate;
+ (id)ibPreparedSimplePredicateEditorRowTemplate;
- (void)ibVerifyExpressionValues;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (id)ibExpressionForExpressionType:(long long)arg1 andValue:(id)arg2;
- (void)archiveWithDocumentArchiver:(id)arg1;
@property(readonly) NSPopUpButton *ibCompoundTypesPopUp;
@property(readonly) NSPopUpButton *ibOperatorPopUp;
@property(retain) id ibShadowedRightExpressionObject;
@property(retain) id ibShadowedLeftExpressionObject;
- (id)ibCurrentExpressionObject:(long long)arg1;
- (BOOL)ibExpressionIsEnumeratedList:(long long)arg1;
- (long long)ibExpressionAttributeType:(long long)arg1;
- (id)ibExpressionsForExpressionSide:(long long)arg1;
- (unsigned long long)ibAttributeTypeForExpressionSide:(long long)arg1;
- (id)ibTemplatePopUpForSide:(long long)arg1;
- (long long)ibTemplateViewIndexForSide:(long long)arg1;
- (id)ibPasteboardTypes;
- (void)ibPrepareForInsertion;
- (void)ibTakeSnapshotValues:(id)arg1;
@property(copy) NSArray *ibShadowedPopUpMenus;
- (id)ibBeginDesigningInDocument:(id)arg1;
- (Class)ibEditorClass;
- (BOOL)ibCanRemoveChildren:(id)arg1;
- (BOOL)ibCanBeBoundToFromObject:(id)arg1;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (id)ibLocalChildToManyRelationshipsKeyPaths;
- (id)ibLocalToManyRelationshipsKeyPaths;
- (id)ibLocalAttributeKeyPaths;
@end

