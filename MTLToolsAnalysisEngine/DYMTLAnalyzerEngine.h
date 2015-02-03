//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DYAnalyzerEngine.h"

@interface DYMTLAnalyzerEngine : DYAnalyzerEngine
{
    StateMirrorManager_4613010e _mng;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_newHeuristicPoolWithGraphicsEngineID:(unsigned long long)arg1;
- (id)newFrameStatisticsFinding;
- (unsigned int)_stateMirrorProcessFunctionAndAnnotate:(const struct Function *)arg1 functionIndex:(int)arg2;
- (unsigned int)_stateMirrorProcessFunction:(const struct Function *)arg1 functionIndex:(int)arg2;
- (void)_stateMirrorInitialize;
- (unsigned int)_supportedGraphicsAPI;
- (id)nameForVariable:(const char *)arg1 graphicsEngineID:(unsigned long long)arg2;
- (id)getObjectLabel:(unsigned long long)arg1 objectType:(int)arg2 objectID:(int)arg3;
- (BOOL)isUniformFullyPreUpdatedInCapture:(unsigned long long)arg1 programID:(unsigned int)arg2 uniformLoc:(int)arg3;
- (BOOL)isObjectDataUpdatedInCapture:(unsigned long long)arg1 objectType:(int)arg2 objectID:(unsigned int)arg3;
- (BOOL)doesProgramHaveLinkedShader:(unsigned long long)arg1 programID:(unsigned int)arg2 shaderType:(int)arg3;
- (BOOL)isObjectCreatedInCapture:(unsigned long long)arg1 objectType:(int)arg2 objectID:(unsigned int)arg3;
- (BOOL)isObjectUsedInCapture:(unsigned long long)arg1 objectType:(int)arg2 objectID:(unsigned int)arg3;
- (BOOL)isObjectFullyPreUpdatedInCapture:(unsigned long long)arg1 objectType:(int)arg2 objectID:(unsigned int)arg3;
- (id)drawCallsUsingProgram:(unsigned int)arg1 graphicsEngineID:(unsigned long long)arg2;
- (void)enableStateDeltaGeneratorHeuristics;
- (void)configureForArchive:(id)arg1;
- (StateMirrorManager_4613010e *)getStateMirrorManager;
- (struct Device<GPUTools::SM::MTL::DefaultBaseObjectTypes> *)getStateMirrorDevice:(unsigned long long)arg1;
- (id)getStaticProgramIdArray:(unsigned long long)arg1;
- (id)getStaticShaderIdArray:(unsigned long long)arg1;
- (id)getStaticBufferIdArray:(unsigned long long)arg1;
- (id)getStaticTextureIdArray:(unsigned long long)arg1;
- (void)processFunction:(const struct Function *)arg1 blockMode:(int)arg2 streamMode:(BOOL)arg3 analyzeInserted:(BOOL)arg4 findingsHandler:(CDUnknownBlockType)arg5;
- (id)init;

@end

