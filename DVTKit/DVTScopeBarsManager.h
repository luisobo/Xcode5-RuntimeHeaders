/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"
#import "NSAnimationDelegate-Protocol.h"

@class DVTMapTable, DVTStackBacktrace, NSArray, NSMutableArray, NSString, NSViewAnimation;

@interface DVTScopeBarsManager : NSObject <DVTInvalidation, NSAnimationDelegate>
{
    id <DVTScopeBarHost> _host;
    NSMutableArray *_scopeBarControllers;
    DVTMapTable *_contentHeightObservers;
    NSViewAnimation *_currentAnimation;
    id _currentCompletionBlock;
    int _borderSides;
}

+ (void)initialize;
@property(readonly, nonatomic) __weak NSViewAnimation *currentAnimation; // @synthesize currentAnimation=_currentAnimation;
@property(nonatomic) int borderSides; // @synthesize borderSides=_borderSides;
@property(readonly) NSArray *scopeBarControllers; // @synthesize scopeBarControllers=_scopeBarControllers;
- (void).cxx_destruct;
- (void)animationDidEnd:(id)arg1;
- (void)_adjustViewsForHeightOffset:(double)arg1 animate:(BOOL)arg2 extraAnimations:(id)arg3 completionBlock:(id)arg4;
- (BOOL)dismissLastScopeBar;
- (void)removeAllScopeBarsAnimate:(BOOL)arg1;
- (void)removeScopeBar:(id)arg1 animate:(BOOL)arg2;
- (void)removeScopeBar:(id)arg1 animate:(BOOL)arg2 completionBlock:(id)arg3;
- (void)insertScopeBar:(id)arg1 atIndex:(unsigned long long)arg2 animate:(BOOL)arg3;
- (void)primitiveInvalidate;
- (id)initWithHost:(id)arg1;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

