//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTModelTree.h"

@class NSString, PBXBuildPhase, Xcode3BuildPhaseRootGroup, Xcode3Target;

@interface Xcode3BuildPhase : DVTModelTree
{
    id _representedObject;
    Xcode3Target *_target;
}

+ (id)buildPhaseForPBXBuildPhase:(id)arg1 target:(id)arg2;
+ (void)initialize;
+ (id)buildPhaseModelObjectGraph;
@property(retain) Xcode3Target *target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)subclass_createRootNode;
- (id)description;
@property(readonly) BOOL canSetCompilerFlags;
- (BOOL)containsItemIdenticalTo:(id)arg1;
@property(readonly) NSString *fileTypeForDisplay;
- (BOOL)acceptsItem:(id)arg1 checkFileType:(BOOL)arg2;
- (BOOL)acceptsItem:(id)arg1;
@property(copy) NSString *name; // @dynamic name;
@property(readonly) BOOL canMove; // @dynamic canMove;
@property(readonly) BOOL canDelete; // @dynamic canDelete;
@property(readonly) BOOL canRename; // @dynamic canRename;
@property(readonly) NSString *gid;
@property(readonly) PBXBuildPhase *pbxBuildPhase; // @dynamic pbxBuildPhase;
- (id)initWithRepresentedObject:(id)arg1 target:(id)arg2;

// Remaining properties
@property(readonly) BOOL canAddFiles; // @dynamic canAddFiles;
@property(readonly) Xcode3BuildPhaseRootGroup *rootGroup; // @dynamic rootGroup;

@end

