//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/XCDiffComparatorView.h>

@class PBXTableColumnManager;

@interface XCDiffTableComparatorView : XCDiffComparatorView
{
    PBXTableColumnManager *_leftTableColumnManager;
    PBXTableColumnManager *_rightTableColumnManager;
}

+ (Class)_viewClass;
+ (Class)_mergeDataSourceClass;
+ (Class)_dataSourceClass;
+ (void)initialize;
- (id)_toolTipForDiffDescriptor:(id)arg1;
- (BOOL)_scrollDiffHunkMarkerToVisible:(id)arg1;
- (struct CGSize)mergeViewContentSize;
- (struct CGSize)rightViewContentSize;
- (struct CGSize)leftViewContentSize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 diffContext:(id)arg2;

@end

