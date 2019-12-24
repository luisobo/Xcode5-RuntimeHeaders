/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTTextFindable-Protocol.h"
#import "DVTTextReplacable-Protocol.h"
#import "DVTTextStorageDelegate-Protocol.h"

@class DVTTextStorage, DVTUndoManager, GPUInferiorSession, GPUTraceResourceItem, NSDictionary, NSString;

// Not exported
@interface GPUShaderSource : NSObject <DVTTextFindable, DVTTextReplacable, DVTTextStorageDelegate>
{
    GPUTraceResourceItem *_resourceItem;
    GPUInferiorSession *_inferiorSession;
    DVTUndoManager *_undoManager;
    BOOL _isDisassembly;
    BOOL _isEditable;
    DVTTextStorage *_textStorage;
    NSString *_header;
}

+ (id)_createProgramInfoDict:(id)arg1;
+ (id)_assetBundle;
@property(readonly, nonatomic) BOOL isEditable; // @synthesize isEditable=_isEditable;
@property(readonly, nonatomic) NSString *header; // @synthesize header=_header;
@property(readonly, nonatomic) DVTTextStorage *textStorage; // @synthesize textStorage=_textStorage;
- (void).cxx_destruct;
- (BOOL)replaceFindResults:(id)arg1 withString:(id)arg2 withError:(id *)arg3;
- (BOOL)replaceFindResults:(id)arg1 inSelection:(struct _NSRange)arg2 withString:(id)arg3 withError:(id *)arg4;
- (id)findStringMatchingDescriptor:(id)arg1 backwards:(BOOL)arg2 from:(id)arg3 to:(id)arg4;
- (id)documentLocationFromCharacterRange:(struct _NSRange)arg1;
- (id)updatedLocationFromLocation:(id)arg1 toTimestamp:(double)arg2;
- (BOOL)textStorageShouldAllowEditing:(id)arg1;
- (void)onDisassemblyUpdated;
- (id)initWithResourceItem:(id)arg1 sharedTabUIState:(id)arg2 undoManager:(id)arg3;
- (id)_shaderDisassembly;
- (id)_setupReadOnlyShader:(id)arg1 programInfoLog:(id)arg2;
- (BOOL)_isProgramEditable:(id)arg1;
- (id)findableObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSDictionary *sourceLanguageServiceContext;
@property(readonly) Class superclass;
@property unsigned long long supportedMatchingOptions;

@end

