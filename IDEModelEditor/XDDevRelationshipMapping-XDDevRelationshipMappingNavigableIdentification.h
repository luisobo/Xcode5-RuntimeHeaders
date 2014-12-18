//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XDDevRelationshipMapping.h"

#import "IDEMappingModelObject.h"

@class IDETypeIdentifier, NSArray, NSImage, NSString;

@interface XDDevRelationshipMapping (XDDevRelationshipMappingNavigableIdentification) <IDEMappingModelObject>
+ (id)keyPathsForValuesAffectingRepresentativeIcon;
@property(readonly) id <IDEDMModelObject> parentObject;
@property(readonly) NSArray *structuralChildren;
@property(readonly) id <IDEDMSourceObject> sourceObject;
@property(readonly) NSImage *representativeIcon;
@property(readonly) IDETypeIdentifier *ideModelObjectTypeIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSString *name; // @dynamic name;
@property(readonly) Class superclass;
@end
