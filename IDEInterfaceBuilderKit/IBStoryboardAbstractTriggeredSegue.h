/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEInterfaceBuilderKit/IBAbstractSegueConnection.h>

@interface IBStoryboardAbstractTriggeredSegue : IBAbstractSegueConnection
{
}

+ (id)keyPathsForValuesAffectingIbInspectedSegueClassName;
+ (double)displayOrderPriority;
+ (BOOL)isValidForStoryboardDocument:(id)arg1;
+ (id)prototypeConnectionsFromObject:(id)arg1 toObject:(id)arg2;
+ (void)populatePrototypes:(id)arg1 inStoryboard:(id)arg2 forSegueFromObject:(id)arg3 toObject:(id)arg4 withTrigger:(id)arg5;
+ (id)prototypeConnectionsForObject:(id)arg1;
+ (id)prototypeTriggeredSeguesForDestination:(id)arg1 inStoryboard:(id)arg2;
+ (BOOL)isObjectValidSource:(id)arg1;
+ (BOOL)isAbstractType;
- (void)setIbInspectedSegueClassName:(id)arg1;
- (id)ibInspectedSegueClassName;
- (id)completeWithMissingComponent:(id)arg1;
- (id)missingComponents;
- (BOOL)validateDestination:(id)arg1;
- (id)segueAttributeInspectorExtensionIdentifier;
- (BOOL)isExclusiveTo:(id)arg1 inObjectContainer:(id)arg2;
- (BOOL)isValidForDocument:(id)arg1 message:(id *)arg2;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (id)displayGroupIdentifierForDragFromObject:(id)arg1 toObject:(id)arg2;
- (BOOL)validateSource:(id)arg1;
- (id)userPresentableLabel;
- (id)trigger;
- (Class)classForPrototypeWithRespectTo:(id)arg1;
- (id)initWithSource:(id)arg1 andTrigger:(id)arg2;

@end

