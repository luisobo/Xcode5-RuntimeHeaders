/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEViewController.h"

#import "DVTInfoPlistValueCellDelegate-Protocol.h"
#import "IDECapsuleListViewDataSource-Protocol.h"
#import "Xcode3ImageViewDelegate-Protocol.h"

@class DVTGradientImageButton, DVTInfoPlistValueCell, DVTStackView_ML, IDECapsuleListView, IDECodesigningSettingsMacViewController, IDEViewController<IDECapsuleViewController>, NSComboBox, NSDictionaryController, NSMutableArray, NSPopUpButton, NSString, NSTextField, NSView, Xcode3CodesignTroubleshootingViewController, Xcode3ImageView;

@interface Xcode3MacOSTargetEditor : IDEViewController <DVTInfoPlistValueCellDelegate, Xcode3ImageViewDelegate, IDECapsuleListViewDataSource>
{
    id _targetViewController;
    id _appIdentifierFieldNotificationObserver;
    IDEViewController<IDECapsuleViewController> *_frameworksViewController;
    IDEViewController<IDECapsuleViewController> *_embeddedBinariesViewController;
    IDEViewController<IDECapsuleViewController> *_identityViewController;
    IDEViewController<IDECapsuleViewController> *_deploymentInfoViewController;
    IDEViewController<IDECapsuleViewController> *_appIconsViewController;
    IDECapsuleListView *_capsuleList;
    NSDictionaryController *_appCategoriesController;
    NSView *_codesigningSettingsView;
    IDECodesigningSettingsMacViewController *_codesigningSettingsViewController;
    DVTInfoPlistValueCell *_appIdentifierCell;
    NSTextField *_appIdentifierField;
    NSComboBox *_deploymentOSCombo;
    Xcode3ImageView *_appImageView;
    DVTStackView_ML *_identityStack;
    NSView *_chooseInfoPListView;
    NSView *_originalIdentityContentView;
    NSMutableArray *_subviewControllers;
    Xcode3CodesignTroubleshootingViewController *_codesignTroubleController;
    DVTStackView_ML *_appIconStackView;
    NSView *_appCategorySlice;
    NSView *_plistAppIconView;
    NSView *_assetCatalogAppIconView;
    NSPopUpButton *_assetCatalogPopUpButton;
    DVTGradientImageButton *_assetCatalogGoToButton;
    DVTStackView_ML *_deploymentInfoStackView;
    NSView *_mainInterfaceSlice;
    NSView *_appExtensionAPISlice;
}

+ (id)defaultViewNibBundle;
+ (id)defaultViewNibName;
@property(retain) NSView *appExtensionAPISlice; // @synthesize appExtensionAPISlice=_appExtensionAPISlice;
@property(retain) NSView *mainInterfaceSlice; // @synthesize mainInterfaceSlice=_mainInterfaceSlice;
@property(retain) DVTStackView_ML *deploymentInfoStackView; // @synthesize deploymentInfoStackView=_deploymentInfoStackView;
@property(retain) DVTGradientImageButton *assetCatalogGoToButton; // @synthesize assetCatalogGoToButton=_assetCatalogGoToButton;
@property(retain) NSPopUpButton *assetCatalogPopUpButton; // @synthesize assetCatalogPopUpButton=_assetCatalogPopUpButton;
@property(retain) NSView *assetCatalogAppIconView; // @synthesize assetCatalogAppIconView=_assetCatalogAppIconView;
@property(retain) NSView *plistAppIconView; // @synthesize plistAppIconView=_plistAppIconView;
@property(retain) NSView *appCategorySlice; // @synthesize appCategorySlice=_appCategorySlice;
@property(retain) DVTStackView_ML *appIconStackView; // @synthesize appIconStackView=_appIconStackView;
@property(retain, nonatomic) id targetViewController; // @synthesize targetViewController=_targetViewController;
- (void).cxx_destruct;
- (id)capsuleListView:(id)arg1 viewControllerForRow:(long long)arg2;
- (long long)numberOfObjectsInCapsuleListView:(id)arg1;
- (id)infoPlistValueCell:(id)arg1 expandedValueForString:(id)arg2;
- (void)rebuildAssetCatalogMenu;
- (void)goToAssetCatalog:(id)arg1;
- (void)selectAssetCatalogSet:(id)arg1;
- (void)convertToAssetCatalog:(id)arg1;
- (id)imageModels;
- (void)pickInfoPlistFile:(id)arg1;
- (id)deploymentOSVersions;
- (void)imageView:(id)arg1 removeImage:(id)arg2;
- (void)imageView:(id)arg1 acceptSelectedFileURL:(id)arg2;
- (BOOL)imageView:(id)arg1 acceptDrop:(id)arg2;
- (BOOL)_imageView:(id)arg1 acceptURL:(id)arg2;
- (unsigned long long)imageView:(id)arg1 validateDrop:(id)arg2;
- (id)imageView:(id)arg1 pathForImageNamed:(id)arg2;
- (id)appImageName;
@property(copy) NSString *selectedAppCategory;
- (void)_setTargetAppExtensionInterface:(id)arg1;
- (id)_targetAppExtensionInterface;
- (void)_setTargetInterface:(id)arg1;
@property(copy) NSString *targetMainNib;
- (void)setTargetBuildVersion:(id)arg1;
- (id)targetBuildVersion;
@property(copy) NSString *targetVersion;
@property(copy) NSString *targetIdentifier;
@property BOOL allowAppExtensionAPIOnly;
@property(copy) NSString *targetDeploymentOS;
@property(copy) NSString *productName;
- (id)target;
- (void)_refreshAppIconStack;
- (void)_refreshIdentityStack;
- (void)_refreshDeploymentStack;
- (void)_reloadCapsuleList;
- (void)primitiveInvalidate;
- (void)loadView;
- (void)loadAppCategories;
- (void)appIdentifierChanged:(id)arg1;
- (void)refreshAppIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

