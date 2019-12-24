/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"

@class DVTDocumentLocation, DVTFileDataType, DVTStackBacktrace, IDEFileReference, IDENavigableItemCoordinator, NSArray, NSColor, NSImage, NSPredicate, NSString;

@interface IDENavigableItem : NSObject <DVTInvalidation>
{
    id _observationInfo;
    IDENavigableItemCoordinator *_coordinator;
    id _representedObject;
    IDENavigableItem *_parentItem;
    id _childItems;
    id _arrangedChildItems;
    NSPredicate *_filterPredicate;
    NSArray *_sortDescriptors;
    struct {
        unsigned int _childItemsNeedsUpdate:1;
        unsigned int _invalidatingChildItems:1;
        unsigned int _debug_8061745_shouldCaptureInvalidationBacktrace:1;
        unsigned int _observersRegisteredWithOldOrPriorOption:1;
        unsigned int _reserved:28;
    } _ideniFlags;
}

+ (Class)navigableItemClassForModelObject:(id)arg1;
+ (Class)registerInfoForClass:(Class)arg1 withExtension:(id)arg2;
+ (void)_customizeNewNavigableItemClass:(Class)arg1 forModelObjectClass:(Class)arg2 extension:(id)arg3;
+ (id)_createExtraInfoObject;
+ (id)classInfoByModelObjectClass;
+ (id)allNavigableItemExtensions;
+ (BOOL)automaticallyNotifiesObserversOfArrangedChildItems;
+ (BOOL)automaticallyNotifiesObserversOfParentItem;
+ (id)description;
+ (BOOL)automaticallyNotifiesObserversOfRepresentedObject;
+ (id)navigableItemWithRepresentedObject:(id)arg1;
+ (id)navigableItemWithRepresentedObject:(id)arg1 coordinator:(id)arg2;
+ (id)_navigableItemWithRepresentedObject:(id)arg1 parent:(id)arg2 inCoordinator:(id)arg3;
+ (id)representedExtension;
+ (id)_dynamicSubclass_navigableItemExtraInfo;
+ (id)_navigableItemExtraInfo;
+ (void)initialize;
@property(readonly) IDENavigableItemCoordinator *navigableItemCoordinator; // @synthesize navigableItemCoordinator=_coordinator;
@property(readonly) id representedObject; // @synthesize representedObject=_representedObject;
- (void).cxx_destruct;
- (id)contextualValueForProperty:(id)arg1;
- (id)descendantItemForRepresentedObject:(id)arg1 stopAtClass:(Class)arg2;
- (id)descendantItemForRepresentedObject:(id)arg1;
- (id)childItemsToSearchForFindingDescendant:(id)arg1;
- (unsigned long long)indexOfChildItemForIdentifier:(id)arg1;
- (id)identifierForChildItem:(id)arg1;
- (id)archivableRepresentation;
- (void)didChangeArrangedChildItems;
- (void)willChangeArrangedChildItems;
- (unsigned long long)_currentNumberOfArrangedChildItems;
@property(readonly) NSArray *arrangedChildItems;
- (id)arrangeItems:(id)arg1;
- (BOOL)_shouldResetChildItemsOnDocumentClose;
@property(readonly) NSArray *childItems;
- (void)_resetChildItems;
- (void)_updateMutableChildItems:(id)arg1 forChangeKind:(unsigned long long)arg2 atIndexes:(id)arg3;
- (void)updateChildItemsForChangeKind:(unsigned long long)arg1 atIndexes:(id)arg2;
- (void)disposeInvalidatedChildItems;
- (void)invalidateChildItems;
- (void)_invalidateArrangedChildItems;
- (void)_setArrangedChildItems:(id)arg1;
- (unsigned long long)changeCount;
- (id)refreshChildItemsAndReturnItemsToDispose;
- (id)sortItems:(id)arg1;
- (id)filterItems:(id)arg1;
- (id)_reallyPrivateChildItems;
- (id)_childItems;
- (void)_willAccessChildItems;
- (void)willAccessChildItems;
- (unsigned long long)countOfChildNavigableItems;
- (void)getChildNavigableItems:(id *)arg1 range:(struct _NSRange)arg2;
- (id)_childRepresentedObjects;
- (id)childNavigableItemsAtIndexes:(id)arg1;
- (id)objectInChildNavigableItemsAtIndex:(unsigned long long)arg1;
- (id)childRepresentedObjects;
@property(readonly, getter=isLeaf) BOOL leaf;
@property(copy) NSArray *sortDescriptors;
@property(copy) NSPredicate *filterPredicate;
- (void)_validateChildItems;
- (void)_setParentItem:(id)arg1;
@property(readonly) IDENavigableItem *parentItem; // @synthesize parentItem=_parentItem;
- (BOOL)_isWrappingDocumentFileReference;
- (void)setName:(id)arg1;
- (void)primitiveInvalidate;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (id)observationInfo;
- (void)setObservationInfo:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)_removeFromNavigableItemByRepresentedObjectMap;
- (void)_registerInNavigableItemByRepresentedObjectMap;
- (void)cacheValue:(id)arg1 forProperty:(id)arg2;
- (id)cachedValueForProperty:(id)arg1;
- (void)_documentDidClose;
- (void)_enableInvalidationBacktraceCapturing;
- (void)_setCoordinator:(id)arg1;
- (id)coordinator;
- (void)_setRepresentedObject:(id)arg1;
- (id)initWithRepresentedObject:(id)arg1;
@property(readonly) NSString *toolTip;
- (id)nearestDocumentFileReferenceProvidingAncestor;
- (id)greatestDocumentAncestor;
@property(readonly) NSString *groupIdentifier;
@property(readonly) IDEFileReference *fileReference;
@property(readonly) NSColor *textColor;
@property(readonly) DVTDocumentLocation *contentDocumentLocation;
@property(readonly, getter=isMajorGroup) BOOL majorGroup;
@property(readonly) DVTFileDataType *documentType;
@property(readonly) BOOL isDocumentNavigableItem;
- (id)navigableItemsForPersistentNameTree:(id)arg1;
- (id)_legacyItemsForNameArrays:(id)arg1;
- (void)_fillItems:(id)arg1 fromNameDictionary:(id)arg2 withParent:(id)arg3 andChildren:(id)arg4;
- (id)persistentNameTreeForNavigableItems:(id)arg1 errorOnInvalidItems:(BOOL)arg2 error:(id *)arg3;
- (BOOL)_checkInvalidItemsAndFillRootDict:(id)arg1 forItem:(id)arg2 errorOnInvalidItems:(BOOL)arg3 error:(id *)arg4;
- (id)persistentNameTreeForNavigableItemsIgnoringInvalid:(id)arg1;
- (id)persistentNameTreeForNavigableItems:(id)arg1 error:(id *)arg2;
- (id)_fillRootDict:(id)arg1 withItem:(id)arg2 isTerminus:(BOOL)arg3;
- (id)_navigableItemWithName:(id)arg1 inArray:(id)arg2;
- (BOOL)coordinatorFilteringShouldFilterChildItems;
- (unsigned long long)navigableItem_conflictStateForUpdateOrMerge;
- (id)sourceControlCurrentRevision;
- (id)sourceControlLastModifiedDate;
- (id)sourceControlServerStatus;
- (int)sourceControlServerStatusFlag;
- (id)sourceControlLocalStatus;
- (int)sourceControlLocalStatusFlag;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) NSImage *image; // @dynamic image;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) NSString *name; // @dynamic name;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

