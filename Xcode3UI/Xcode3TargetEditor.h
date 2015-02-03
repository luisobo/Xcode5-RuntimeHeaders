//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEViewController.h"

#import "Xcode3SourceListItemEditor.h"

@class DVTSourceExpression, DVTStackView_ML, IDEContainerQuery, NSArray, NSMutableDictionary, NSString, PBXNativeTarget, Xcode3CodesignTroubleshootingViewController, Xcode3ProjectEditor;

@interface Xcode3TargetEditor : IDEViewController <Xcode3SourceListItemEditor>
{
    Xcode3ProjectEditor *_projectEditor;
    id <IDEBlueprint> _inspectedBlueprint;
    PBXNativeTarget *_pbxTarget;
    IDEViewController *_innerViewController;
    DVTStackView_ML *_stackView;
    IDEContainerQuery *_interfaceFileNameQuery;
    NSArray *_targetMainInterfaceFiles;
    NSMutableDictionary *_assetCatalogWrappersByImageType;
}

+ (id)keyPathsForValuesAffectingTargetNibFiles;
+ (id)validValuesForBuildSetting:(id)arg1 inTarget:(id)arg2;
+ (void)setValue:(id)arg1 forBuildSetting:(id)arg2 inTarget:(id)arg3;
+ (id)valueForBuildSetting:(id)arg1 inTarget:(id)arg2;
+ (void)convertAllNibFilesInTarget:(id)arg1 toGroupAndFolder:(id)arg2 withConversionHandler:(CDUnknownBlockType)arg3;
+ (id)duplicateTarget:(id)arg1;
+ (id)_duplicateTarget:(id)arg1;
+ (BOOL)canInspectBlueprint:(id)arg1;
+ (Class)targetSummaryEditorClassWithProductType:(id)arg1 platformIdentifier:(id)arg2 productFileExtension:(id)arg3;
+ (id)extensionForTargetSummaryEditorWithProductType:(id)arg1 platformIdentifier:(id)arg2 productFileExtension:(id)arg3;
+ (id)defaultViewNibBundle;
+ (id)defaultViewNibName;
+ (id)localizedSourceListItemEditorName;
@property(retain, nonatomic) id <IDEBlueprint> inspectedBlueprint; // @synthesize inspectedBlueprint=_inspectedBlueprint;
@property(retain) Xcode3ProjectEditor *projectEditor; // @synthesize projectEditor=_projectEditor;
- (void).cxx_destruct;
- (void)showLaunchImageAlertForImageName:(id)arg1;
- (void)pickInfoPlistFile:(id)arg1;
- (void)_infoPlistPickerPanel:(id)arg1 completedWithResult:(unsigned long long)arg2;
- (void)configureInfoPlistPickerPanel:(id)arg1;
- (id)infoPlistPickerItemFilter;
- (id)rootItemsForInfoPlistPickerPanel;
- (BOOL)targetConvertNibFile:(id)arg1 asFile:(id)arg2 inGroupAndFolder:(id)arg3 withConversionHandler:(CDUnknownBlockType)arg4;
- (BOOL)targetRemoveImageWithName:(id)arg1;
- (BOOL)targetAddImageFromUrl:(id)arg1 withName:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (BOOL)renameImagesAtFilePaths:(id)arg1 toFilePaths:(id)arg2;
- (void)copyImagesAtFilePaths:(id)arg1 toFilePaths:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)targetFilePathForImageName:(id)arg1;
- (void)setDefaultCodeSigningIdentity;
- (id)fileReferenceForFileName:(id)arg1;
- (void)convertToImageTable:(id)arg1;
- (void)populateAssetCatalogPopUpMenu:(id)arg1 forImageType:(int)arg2;
- (void)navigateToSelectedAssetCatalogForImageType:(int)arg1;
- (void)convertToAssetCatalogForImageType:(int)arg1 imageModelsToMigrate:(id)arg2 optionalImageType:(int)arg3 optionalImageModelsToMigrate:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)_convertImageType:(int)arg1 imageModels:(id)arg2 toAssetCatalogAtPath:(id)arg3;
- (void)_convertImageType:(int)arg1 imageModels:(id)arg2 toImageSet:(id)arg3;
- (void)convertToAssetCatalogForImageType:(int)arg1 imageModelsToMigrate:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)migrateToAssetCatalogForImagesModels:(id)arg1 imageType:(int)arg2;
- (void)_emitContentsJSONToImageSetFilePath:(id)arg1 forImageModels:(id)arg2;
- (id)selectedAssetCatalogWrapperForImageType:(int)arg1;
- (void)setAssetCatalogSetName:(id)arg1 forImageType:(int)arg2;
- (id)assetCatalogSetNameForImageType:(int)arg1;
- (id)assetCatalogSetBuildSettingForImageType:(int)arg1;
- (id)uniqueImageSetNameForAssetCatalogFilePath:(id)arg1 imageType:(int)arg2;
- (id)defaultAssetCatalogSetNameWithExtensionForImageType:(int)arg1;
- (id)defaultAssetCatalogSetNameForImageType:(int)arg1;
- (id)assetCatalogSetPathExtensionForImageType:(int)arg1;
- (id)displayStringForImageType:(int)arg1;
- (void)removeAssetCatalogWrappersForImageType:(int)arg1;
- (id)assetCatalogWrappersForImageType:(int)arg1;
- (void)createImageSetNamed:(id)arg1 inAssetCatalogAtFilePath:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)createAssetCatalogWithSetName:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)targetAssetCatalogFilePaths;
- (id)targetNibFiles;
- (id)targetMainInterfaceFiles;
- (id)validValuesForBuildSetting:(id)arg1;
- (id)expandedValueForString:(id)arg1;
- (id)expandedValueForString:(id)arg1 overridingConditionSet:(id)arg2;
- (void)setValue:(id)arg1 forBuildSetting:(id)arg2;
- (id)rawValueForProjectBuildSetting:(id)arg1;
- (id)rawValueForTargetBuildSetting:(id)arg1;
- (id)_rawValueForBuildSetting:(id)arg1 inConfigurationList:(id)arg2;
- (id)valueForBuildSetting:(id)arg1;
- (void)setValue:(id)arg1 forPlistSetting:(id)arg2;
- (id)valueForPlistSetting:(id)arg1 ofType:(Class)arg2;
- (BOOL)plistFileExists;
- (BOOL)plistSettingsAreValid;
- (BOOL)isAFrameworkEditor;
- (BOOL)isAnAppExtensionEditor;
- (BOOL)isAnAppEditor;
- (id)portalCoordinator;
- (id)infoPlistCoordinator;
@property(readonly) Xcode3CodesignTroubleshootingViewController *codesignTroubleViewController;
- (id)frameworksViewController;
- (id)embeddedBinariesViewController;
- (void)loadView;
- (void)_refreshEditor:(id)arg1;
- (Class)targetSummaryEditorClass;
- (void)primitiveInvalidate;

// Remaining properties
@property(readonly) struct CGRect currentSelectionFrame;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSArray *inspectedBlueprints;
@property(readonly, nonatomic) DVTSourceExpression *mouseOverExpression;
@property(readonly, nonatomic) DVTSourceExpression *selectedExpression;
@property(readonly) Class superclass;

@end

