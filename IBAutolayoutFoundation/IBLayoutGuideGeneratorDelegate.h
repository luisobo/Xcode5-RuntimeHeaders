/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import <IBAutolayoutFoundation/IBLayoutGuideGeneratorDelegate-Protocol.h>

@class NSArray, NSString;

@interface IBLayoutGuideGeneratorDelegate : NSObject <IBLayoutGuideGeneratorDelegate>
{
    long long disabledContainmentGuidesCount;
    long long disabledSiblingGuidesCount;
    id <IBAutolayoutInfoProvider> layoutInfo;
}

@property(readonly) id <IBAutolayoutInfoProvider> layoutInfo; // @synthesize layoutInfo;
- (void).cxx_destruct;
- (Class)symbolicLayoutConstantClassForLayoutGuideGenerator:(id)arg1;
- (Class)layoutConstantClassForLayoutGuideGenerator:(id)arg1;
- (long long)userInterfaceLayoutDirectionForLayoutGuideGenerator:(id)arg1;
- (BOOL)layoutGuideGenerator:(id)arg1 shouldConsiderSiblingGuidesFromSelection:(id)arg2 toView:(id)arg3;
- (BOOL)layoutGuideGenerator:(id)arg1 shouldConsiderSelectionEdge:(unsigned int)arg2 toSiblingEdge:(unsigned int)arg3 guideFromSelection:(id)arg4 toView:(id)arg5;
- (BOOL)layoutGuideGenerator:(id)arg1 isEdge:(unsigned int)arg2 ofAncestor:(id)arg3 fixedDuringResizingOfSubviews:(id)arg4 fromKnob:(long long)arg5;
- (BOOL)layoutGuideGenerator:(id)arg1 isEdge:(unsigned int)arg2 ofSubview:(id)arg3 fixedInPositionOnWindowDuringResizeFromKnob:(long long)arg4;
- (BOOL)layoutGuideGenerator:(id)arg1 isDistanceFromSubviewEdge:(unsigned int)arg2 ofSubview:(id)arg3 toSameEdgeOfSuperviewChangingOneToOneWithKnob:(long long)arg4;
- (BOOL)layoutGuideGenerator:(id)arg1 isViewVerticallyResizable:(id)arg2;
- (BOOL)layoutGuideGenerator:(id)arg1 isViewHorizontallyResizable:(id)arg2;
- (CDStruct_c519178c)layoutGuideGenerator:(id)arg1 layoutInsetOfView:(id)arg2;
- (double)layoutGuideGenerator:(id)arg1 baselineOfView:(id)arg2 atIndex:(long long)arg3;
- (long long)layoutGuideGenerator:(id)arg1 numberOfBaselinesOfView:(id)arg2;
- (struct CGSize)layoutGuideGenerator:(id)arg1 preferredSizeForView:(id)arg2 suggestedSize:(struct CGSize)arg3 suggestedWidth:(char *)arg4 suggestedHeight:(char *)arg5 scaleAxesIndependently:(char *)arg6;
- (CDStruct_c519178c)layoutGuideGenerator:(id)arg1 insetToDesignableContentAreaForView:(id)arg2;
- (id)layoutGuideGenerator:(id)arg1 containerWidgetTypeForView:(id)arg2;
- (id)layoutGuideGenerator:(id)arg1 widgetTypeForView:(id)arg2;
- (id)layoutGuideGenerator:(id)arg1 viewsForSelectionToSubviewsGuides:(id)arg2;
- (BOOL)layoutGuideGenerator:(id)arg1 shouldViewHaveContainedSubviewGuides:(id)arg2;
- (id)layoutGuideGenerator:(id)arg1 siblingsForApplyingGuidesToViews:(id)arg2;
- (void)addBaselinesForResizingSingleView:(id)arg1 toArray:(id)arg2 fromKnob:(long long)arg3 withUnalignedSelectionFrame:(struct CGRect)arg4 coordinateSpaceView:(id)arg5;
- (id)layoutGuideGenerator:(id)arg1 baselinesForViews:(id)arg2 withSuggestedLayoutFrame:(struct CGRect)arg3 andKnobPosition:(long long)arg4;
- (struct CGRect)boundingLayoutFrameForViews:(id)arg1;
- (id)userLayoutGuidesForLayoutGuideGenerator:(id)arg1;
@property(readonly) NSArray *userLayoutGuides;
- (id)layoutGuideGenerator:(id)arg1 viewForContainmentGuides:(id)arg2;
- (id)designableContentViewForView:(id)arg1;
- (void)disableContainmentGuidesWhileInvoking:(id)arg1;
- (void)disableSiblingToSiblingGuidesWhileInvoking:(id)arg1;
- (id)initWithLayoutInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

