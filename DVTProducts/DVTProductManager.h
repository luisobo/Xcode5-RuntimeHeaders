//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DVTAppStoreProductSource, DVTArchiveProductSource, DVTProductCoordinator, DVTStackBacktrace, NSArray, NSMapTable, NSMutableArray, NSString;

@interface DVTProductManager : NSObject <DVTInvalidation>
{
    NSMutableArray *_products;
    BOOL _cacheEnabled;
    BOOL _hasStartedLocating;
    DVTAppStoreProductSource *_appStoreProductSource;
    id <DVTProductManagerDelegate> _delegate;
    DVTArchiveProductSource *_archiveProductSource;
    DVTProductCoordinator *_coordinator;
    NSMapTable *_sourcesToProducts;
    Class _appStoreProductSourceClass;
    Class _archiveProductSourceClass;
}

+ (id)defaultManager;
+ (void)initialize;
@property(retain) Class archiveProductSourceClass; // @synthesize archiveProductSourceClass=_archiveProductSourceClass;
@property(retain) Class appStoreProductSourceClass; // @synthesize appStoreProductSourceClass=_appStoreProductSourceClass;
@property(readonly) NSMapTable *sourcesToProducts; // @synthesize sourcesToProducts=_sourcesToProducts;
@property BOOL hasStartedLocating; // @synthesize hasStartedLocating=_hasStartedLocating;
@property(getter=isCacheEnabled) BOOL cacheEnabled; // @synthesize cacheEnabled=_cacheEnabled;
@property(retain) DVTProductCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(retain, nonatomic) DVTArchiveProductSource *archiveProductSource; // @synthesize archiveProductSource=_archiveProductSource;
@property __weak id <DVTProductManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) DVTAppStoreProductSource *appStoreProductSource; // @synthesize appStoreProductSource=_appStoreProductSource;
- (void).cxx_destruct;
- (void)_handleLocationErrors:(id)arg1;
- (void)_handleLocationErrors:(id)arg1 fromSource:(id)arg2;
- (void)_ensureProductHasCrashPointSources:(id)arg1;
- (void)_ensureProductsHasCrashPointSources:(id)arg1;
- (void)_setProductOwnershipAndLocationResult:(id)arg1 forSource:(id)arg2;
- (void)_startLocating;
- (id)_cacheLock;
- (void)refreshProducts;
- (id)sources;
- (void)primitiveInvalidate;
- (id)initWithCacheEnabled:(BOOL)arg1;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) NSMutableArray *mutableProducts; // @dynamic mutableProducts;
@property NSArray *products; // @dynamic products;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

