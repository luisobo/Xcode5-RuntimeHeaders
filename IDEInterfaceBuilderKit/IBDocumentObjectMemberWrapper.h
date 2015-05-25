//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBDocumentMemberWrapper.h>

@class IBMutableIdentityDictionary, NSArray, NSImage, NSObject, NSString;

@interface IBDocumentObjectMemberWrapper : IBDocumentMemberWrapper
{
    IBMutableIdentityDictionary *_navigationGroupIdentifierToGroupMap;
    NSArray *_childWrappers;
    NSString *_name;
    NSImage *_image;
    BOOL _installed;
}

+ (id)keyPathsForValuesAffectingObject;
- (void).cxx_destruct;
- (void)document:(id)arg1 mayHaveTurnedMemberOnOrOff:(id)arg2;
- (void)document:(id)arg1 didChangeRelationshipKeyPath:(id)arg2 forMember:(id)arg3;
- (void)document:(id)arg1 didChangeKeyPath:(id)arg2 forMember:(id)arg3;
- (void)refreshProperties;
- (void)document:(id)arg1 didRemoveChildObject:(id)arg2 fromMember:(id)arg3;
- (void)document:(id)arg1 didAddChildObject:(id)arg2 toMember:(id)arg3;
- (void)invalidateChildWrappers;
- (BOOL)wrapsNormalDocumentObject;
- (void)setInstalled:(BOOL)arg1;
- (BOOL)isInstalled;
- (id)image;
- (void)setImage:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void)setChildWrappers:(id)arg1;
- (id)childWrappers;
- (void)rebuildChildWrappers;
@property(readonly) NSObject *object;
- (void)primitiveInvalidate;
- (id)initWithMember:(id)arg1 document:(id)arg2;
- (id)humanReadableNameForInspectorKeyPath:(id)arg1;
- (id)applicableInspectorsForCategory:(id)arg1 suggestion:(id)arg2;
- (id)ideModelObjectTypeIdentifier;

@end

