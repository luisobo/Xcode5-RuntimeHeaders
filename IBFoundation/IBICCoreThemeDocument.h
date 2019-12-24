/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CoreThemeDocument, NSString;

@interface IBICCoreThemeDocument : NSObject
{
    CoreThemeDocument *_document;
    NSString *_exclusiveScratchDirectory;
    BOOL _importedContent;
}

+ (id)makeTemporaryDocumentWithOptions:(id)arg1 returningError:(id *)arg2;
+ (BOOL)isMigrationError:(id)arg1;
- (void).cxx_destruct;
- (void)distillToPath:(id)arg1 completionHandler:(id)arg2;
- (void)setContent:(id)arg1 completionHandler:(id)arg2;
- (long long)coreUIResizingModeForResizingBehavior:(id)arg1;
- (long long)coreUIRenditionTypeForResizingBehavior:(id)arg1;
- (CDStruct_c519178c)coreUINamedAssetImportEdgeInsetsForResizingBehavior:(id)arg1;
- (void)logAssets;
- (void)logAsset:(id)arg1;
- (void)logAssetImport:(id)arg1;
- (id)stringFromResizingMode:(long long)arg1;
- (id)stringFromRenditionType:(long long)arg1;
- (id)stringFromIdiom:(long long)arg1;
- (void)close;
- (id)initWithCoreThemeDocument:(id)arg1 exclusiveScratchDirectory:(id)arg2;

@end

