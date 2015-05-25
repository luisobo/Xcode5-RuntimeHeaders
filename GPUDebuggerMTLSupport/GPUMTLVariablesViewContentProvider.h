//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUVariablesViewContentProvider.h"

@class GPUMTLStateMirror;

__attribute__((visibility("hidden")))
@interface GPUMTLVariablesViewContentProvider : GPUVariablesViewContentProvider
{
    GPUMTLStateMirror *_stateMirror;
    GPUMTLStateMirror *_comparisonStateMirror;
    RenderPipelineAttachmentDescriptor_08890bb5 _defaultRenderPipelineAttachment;
    BlitCommandEncoder_0e8e1979 _defaultBlitCommandEncoder;
    Buffer_e8b67ba7 _defaultBuffer;
    CommandBuffer_b8d892ad _defaultCommandBuffer;
    CommandQueue_f95f9d2e _defaultCommandQueue;
    ComputeCommandEncoder_926cb968 _defaultComputeCommandEncoder;
    DepthStencilState_d26ffc7c _defaultDepthStencilState;
    Device_4a5f6283 _defaultDevice;
    RenderPassDescriptor_f3ef942a _defaultRenderPass;
    RenderPassAttachmentDescriptor_6b1b57e7 _defaultRenderPassAttachment;
    Function_130258c1 _defaultFunction;
    ComputePipelineState_33f4e92c _defaultComputePipelineState;
    Library_c21f3395 _defaultLibrary;
    RenderCommandEncoder_1e21ccb5 _defaultRenderCommandEncoder;
    RenderPipelineState_4551ebb0 _defaultRenderPipelineState;
    Sampler_33396e8c _defaultSampler;
    Texture_cb848a8d _defaultTexture;
    ParallelRenderCommandEncoder_eaba1480 _defaultParallelRenderCommandEncoder;
    BOOL _drawCallFootprintIsAvailable;
}

+ (void)initialize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)imageToUseInDefaultQuickLookForNode:(id)arg1;
- (id)imageForNode:(id)arg1;
- (void)provideScopeChoices:(id)arg1;
- (id)_generateFrameStatsContent:(const Device_4a5f6283 *)arg1;
- (id)_generateComputeEncoderStatsContent:(const ComputeCommandEncoder_926cb968 *)arg1;
- (id)_generateParallelRenderEncoderStatsContent:(const ParallelRenderCommandEncoder_eaba1480 *)arg1;
- (id)_generateRenderEncoderStatsContent:(const RenderCommandEncoder_1e21ccb5 *)arg1;
- (id)_generateParallelRenderCommandEncoderContent:(const ParallelRenderCommandEncoder_eaba1480 *)arg1;
- (id)_generateTextureBindingContent:(unsigned int)arg1 fromComputeCommandEncoderID:(unsigned long long)arg2;
- (id)_generateTextureBindingContent:(unsigned int)arg1 fromFragmentTextures:(BOOL)arg2 fromRenderCommandEncoderID:(unsigned long long)arg3;
- (id)_generateTextureContent:(unsigned long long)arg1 labelPrefix:(id)arg2;
- (id)generateTextureSummary:(unsigned long long)arg1;
- (id)_generateSamplerContent:(const Sampler_33396e8c *)arg1 labelPrefix:(id)arg2;
- (id)_generateRenderPipelineStateContent:(const RenderPipelineState_4551ebb0 *)arg1;
- (id)_generateRenderCommandEncoderContent:(const RenderCommandEncoder_1e21ccb5 *)arg1;
- (id)_generateColor:(VecN_24296b45)arg1;
- (id)_generateScissorRect:(VecN_d22ea5a0)arg1;
- (id)_generateViewport:(VecN_8f1bdb46)arg1;
- (id)_generateLibraryContent:(const Library_c21f3395 *)arg1;
- (id)_generateComputePipelineStateContent:(const ComputePipelineState_33f4e92c *)arg1;
- (id)_generateVertexDescriptorContent:(const VertexDescriptor_e5d3aa79 *)arg1 withComparision:(const VertexDescriptor_e5d3aa79 *)arg2;
- (id)_generateVertexAttributeContent:(const VertexAttribute_ebed2729 *)arg1 withComparision:(const VertexAttribute_ebed2729 *)arg2 withIndex:(unsigned int)arg3;
- (id)_generateVertexBufferContent:(const VertexBuffer_34433e31 *)arg1 withComparision:(const VertexBuffer_34433e31 *)arg2 withIndex:(unsigned int)arg3;
- (id)_generateFunctionContent:(const Function_130258c1 *)arg1 withFunctionType:(id)arg2;
- (id)_generateFunctionContent:(const Function_130258c1 *)arg1 withFunctionType:(id)arg2 name:(id)arg3;
- (id)_generateRenderPassContent:(const RenderPassDescriptor_f3ef942a *)arg1;
- (id)_generateRenderPassAttachmentContent:(const RenderPassAttachmentDescriptor_6b1b57e7 *)arg1 attachmentIndex:(unsigned int)arg2 comparisonAttachment:(const RenderPassAttachmentDescriptor_6b1b57e7 *)arg3;
- (id)_generateDepthStencilStateContent:(const DepthStencilState_d26ffc7c *)arg1;
- (id)_generateCondensedSummaryForDepthStencilContent:(const DepthStencilState_d26ffc7c *)arg1;
- (id)_getCondensedStencilSummaryForSide:(const struct GPUMTLStencilSideSetup *)arg1;
- (id)_generateDeviceContent:(const Device_4a5f6283 *)arg1;
- (id)_generateComputeCommandEncoderContent:(const ComputeCommandEncoder_926cb968 *)arg1;
- (id)_generateCommandQueueContent:(const CommandQueue_f95f9d2e *)arg1;
- (id)_generateCommandBufferContent:(const CommandBuffer_b8d892ad *)arg1;
- (id)_generateSamplerBindingContent:(unsigned int)arg1 fromComputeCommandEncoderID:(unsigned long long)arg2;
- (id)_generateSamplerBindingContent:(unsigned int)arg1 fromFragmentSamplers:(BOOL)arg2 fromRenderCommandEncoderID:(unsigned long long)arg3;
- (id)_generateBufferBindingContent:(unsigned int)arg1 fromComputeCommandEncoderID:(unsigned long long)arg2;
- (id)_generateBufferBindingContent:(unsigned int)arg1 fromFragmentBuffers:(BOOL)arg2 fromRenderCommandEncoderID:(unsigned long long)arg3;
- (id)_generateIndexBufferContent:(unsigned long long)arg1 withOffset:(unsigned long long)arg2;
- (id)_generateBufferContent:(unsigned long long)arg1 labelPrefix:(id)arg2;
- (id)_generateBufferBytesContent:(unsigned long long)arg1 withIndex:(unsigned long long)arg2;
- (id)_generateBlitCommandEncoderContent:(const BlitCommandEncoder_0e8e1979 *)arg1;
- (id)_generateRenderPipelineAttachmentContent:(const RenderPipelineAttachmentDescriptor_08890bb5 *)arg1 withComparision:(const RenderPipelineAttachmentDescriptor_08890bb5 *)arg2 forIndex:(unsigned int)arg3;
- (id)_getCondensedBlendSummaryFromAttachmentContent:(const RenderPipelineAttachmentDescriptor_08890bb5 *)arg1;
- (id)_getCondensedBlendResultForChannel:(struct GPUMTLBlendChannelSetup *)arg1;
- (id)_blendFactorString:(unsigned long long)arg1;
- (id)_generateValueForColorWriteMask:(unsigned long long)arg1 andTextMode:(int)arg2;
- (void)addAnalyzerFindingContent:(id)arg1 toArray:(id)arg2;
- (void)addFrameStatsContent:(const Device_4a5f6283 *)arg1 toArray:(id)arg2;
- (void)addComputeEncoderStatsContent:(const ComputeCommandEncoder_926cb968 *)arg1 toArray:(id)arg2;
- (void)addParallelRenderEncoderStatsContent:(const ParallelRenderCommandEncoder_eaba1480 *)arg1 toArray:(id)arg2;
- (void)addRenderEncoderStatsContent:(const RenderCommandEncoder_1e21ccb5 *)arg1 toArray:(id)arg2;
- (void)addParallelRenderCommandEncoderContent:(const ParallelRenderCommandEncoder_eaba1480 *)arg1 toArray:(id)arg2;
- (void)addTextureBindingContent:(unsigned long long)arg1 fromComputeCommandEncoderID:(unsigned long long)arg2 toArray:(id)arg3;
- (void)addTextureBindingContent:(unsigned long long)arg1 fromFragmentTextures:(BOOL)arg2 fromRenderCommandEncoderID:(unsigned long long)arg3 toArray:(id)arg4;
- (void)addTextureContent:(unsigned long long)arg1 toArray:(id)arg2;
- (void)addSamplerBindingContent:(unsigned long long)arg1 fromComputeCommandEncoderID:(unsigned long long)arg2 toArray:(id)arg3;
- (void)addSamplerBindingContent:(unsigned long long)arg1 fromFragmentSamplers:(BOOL)arg2 fromRenderCommandEncoderID:(unsigned long long)arg3 toArray:(id)arg4;
- (void)addSamplerContent:(const Sampler_33396e8c *)arg1 toArray:(id)arg2;
- (void)addRenderPipelineStateContent:(const RenderPipelineState_4551ebb0 *)arg1 toArray:(id)arg2;
- (void)addRenderCommandEncoderContent:(const RenderCommandEncoder_1e21ccb5 *)arg1 toArray:(id)arg2;
- (void)addLibraryContent:(const Library_c21f3395 *)arg1 toArray:(id)arg2;
- (void)addComputePipelineStateContent:(const ComputePipelineState_33f4e92c *)arg1 toArray:(id)arg2;
- (void)addFunctionContent:(const Function_130258c1 *)arg1 toArray:(id)arg2;
- (void)addRenderPassContent:(const RenderPassDescriptor_f3ef942a *)arg1 toArray:(id)arg2;
- (void)addDepthStencilStateContent:(const DepthStencilState_d26ffc7c *)arg1 toArray:(id)arg2;
- (void)addDeviceContent:(const Device_4a5f6283 *)arg1 toArray:(id)arg2;
- (void)addComputeCommandEncoderContent:(const ComputeCommandEncoder_926cb968 *)arg1 toArray:(id)arg2;
- (void)addCommandQueueContent:(const CommandQueue_f95f9d2e *)arg1 toArray:(id)arg2;
- (void)addCommandBufferContent:(const CommandBuffer_b8d892ad *)arg1 toArray:(id)arg2;
- (void)addBufferBindingContent:(unsigned long long)arg1 fromComputeCommandEncoderID:(unsigned long long)arg2 toArray:(id)arg3;
- (void)addBufferBindingContent:(unsigned long long)arg1 fromFragmentBuffers:(BOOL)arg2 fromRenderCommandEncoderID:(unsigned long long)arg3 toArray:(id)arg4;
- (void)addIndexBufferContent:(unsigned long long)arg1 withOffset:(unsigned long long)arg2 toArray:(id)arg3;
- (void)addBufferContent:(unsigned long long)arg1 toArray:(id)arg2;
- (void)addBufferBytesContent:(unsigned long long)arg1 withIndex:(unsigned long long)arg2 toArray:(id)arg3;
- (void)addBlitCommandEncoderContent:(const BlitCommandEncoder_0e8e1979 *)arg1 toArray:(id)arg2;
- (void)addObjectContent:(id)arg1 ofType:(int)arg2 toArray:(id)arg3;
- (void)addBindingContent:(id)arg1 ofType:(int)arg2 toArray:(id)arg3;
- (void)addResourceContent:(unsigned long long)arg1 toArray:(id)arg2;
- (void)_updateFilteredListForAuto;
- (void)_updateFilteredListForContextInfo;
- (void)_addSamplersFromFunction:(const struct Function *)arg1 toArray:(id)arg2;
- (void)_addTexturesFromFunction:(const struct Function *)arg1 toArray:(id)arg2;
- (void)_addBuffersFromFunction:(const struct Function *)arg1 toArray:(id)arg2;
- (void)_addAllTexturesFromDevice:(const Device_4a5f6283 *)arg1 toValues:(id)arg2 andNodes:(id)arg3;
- (void)_addAllSamplersFromDevice:(const Device_4a5f6283 *)arg1 toValues:(id)arg2 andNodes:(id)arg3;
- (void)_addAllRenderPipelineStatesFromDevice:(const Device_4a5f6283 *)arg1 toValues:(id)arg2 andNodes:(id)arg3;
- (void)_addAllRenderCommandEncodersFromDevice:(const Device_4a5f6283 *)arg1 toValues:(id)arg2 andNodes:(id)arg3;
- (void)_addAllLibrariesFromDevice:(const Device_4a5f6283 *)arg1 toValues:(id)arg2 andNodes:(id)arg3;
- (void)_addAllComputePipelineStatesFromDevice:(const Device_4a5f6283 *)arg1 toValues:(id)arg2 andNodes:(id)arg3;
- (void)_addAllDepthStencilStatesFromDevice:(const Device_4a5f6283 *)arg1 toValues:(id)arg2 andNodes:(id)arg3;
- (void)_addAllComputeCommandEncodersFromDevice:(const Device_4a5f6283 *)arg1 toValues:(id)arg2 andNodes:(id)arg3;
- (void)_addAllCommandQueuesFromDevice:(const Device_4a5f6283 *)arg1 toValues:(id)arg2 andNodes:(id)arg3;
- (void)_addAllCommandBuffersFromDevice:(const Device_4a5f6283 *)arg1 toValues:(id)arg2 andNodes:(id)arg3;
- (void)_addAllBuffersFromDevice:(const Device_4a5f6283 *)arg1 toValues:(id)arg2 andNodes:(id)arg3;
- (void)_addAllBlitCommandEncodersFromDevice:(const Device_4a5f6283 *)arg1 toValues:(id)arg2 andNodes:(id)arg3;
- (void)_addObjectArray:(id)arg1 ofType:(int)arg2 andLabel:(id)arg3 toValues:(id)arg4 andNodes:(id)arg5;
- (void)_updateFilteredListForAllObjects;
- (void)_addBoundObjectsFromComputeCommandEncoder:(const ComputeCommandEncoder_926cb968 *)arg1 toValues:(id)arg2 andNodes:(id)arg3;
- (void)_addBoundObjectsFromRenderCommandEncoder:(const RenderCommandEncoder_1e21ccb5 *)arg1 toValues:(id)arg2 andNodes:(id)arg3;
- (void)_updateFilteredListForBoundObjects;
- (void)_updateFilteredListForCommandEncoder;
- (void)updateFilteredList;
- (void)_setEmptyVarView;
- (void)updateCurrentLocation:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithIdentifier:(id)arg1;

@end

