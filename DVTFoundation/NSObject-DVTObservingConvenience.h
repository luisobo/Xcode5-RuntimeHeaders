/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface NSObject (DVTObservingConvenience)
+ (id)dvt_creationBacktracesOfObservingTokensForObservedObject:(id)arg1;
+ (void)dvt_cancelAllObservingTokensForOwner:(id)arg1;
- (void)dvt_changeValueForKeys:(id)arg1 usingBlock:(id)arg2;
- (void)dvt_changeValueForKey:(id)arg1 usingBlock:(id)arg2;
- (id)dvt_newObserverForKeyPath:(id)arg1 options:(unsigned long long)arg2 withHandlerBlock:(id)arg3;
- (id)dvt_newObserverForKeyPath:(id)arg1 options:(unsigned long long)arg2 owner:(id)arg3 withHandlerBlock:(id)arg4;
- (id)_dvt_newObserverForKeyPath:(id)arg1 options:(unsigned long long)arg2 owner:(id)arg3 withHandlerBlock:(id)arg4;
- (void)dvt_addObserverForKeyPath:(id)arg1 options:(unsigned long long)arg2 owner:(id)arg3 withHandlerBlock:(id)arg4;
- (void)dvt_unregisterValueChangedCallbackForKeyPath:(id)arg1;
- (void)dvt_unregisterValueChangedCallbackForKeyPath:(id)arg1 ofObject:(id)arg2;
- (void)dvt_registerValueChangedCallback:(SEL)arg1 forKeyPath:(id)arg2;
- (void)dvt_registerValueChangedCallback:(SEL)arg1 forKeyPath:(id)arg2 ofObject:(id)arg3;
- (void)_dvt_setObserverTokensForKeyPath:(id)arg1;
- (id)_dvt_observerTokensForKeyPath;
@end

