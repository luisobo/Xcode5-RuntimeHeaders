//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOrderedSet;

@interface IDEToyViewControllerFactory : NSObject
{
    NSOrderedSet *_registeredSpecializedRepresentationClasses;
    NSOrderedSet *_registeredSingleRepresentationClasses;
    NSOrderedSet *_registeredMultipleRepresentationClasses;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (Class)_viewControllerClassForDisplayingReflectionTags:(id)arg1 fromSet:(id)arg2;
- (id)_viewControllerClassesForDisplayingValueHistoryToy:(id)arg1;
- (BOOL)viewControllerClass:(Class)arg1 canDisplayToy:(id)arg2;
- (id)viewControllerClassesForDisplayingToy:(id)arg1;
- (id)init;

@end

