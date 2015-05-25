//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DTAsset, DTAssetView, NSSet;

@interface DTAssetAndGroupSet : NSObject
{
    NSSet *groups;
    DTAssetView *view;
    DTAsset *asset;
    BOOL isObservingAsset;
}

+ (id)observedAsssetKeyPaths;
- (void)assetViewWillDraw:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToAssetAndGroupSet:(id)arg1;
- (unsigned long long)hash;
- (id)asset;
- (id)view;
- (id)groups;
- (void)dealloc;
- (id)initWithAsset:(id)arg1 andGroups:(id)arg2;

@end

