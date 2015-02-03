//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSBundle, NSColor, NSDictionary, NSFont, NSGradient, NSImage;

@interface DVTTheme : NSObject
{
    NSBundle *_bundle;
    NSDictionary *_contents;
    BOOL _shouldUseSingleLineNavigatorItems;
    BOOL _shouldShowWindowTitleBars;
    BOOL _shouldDrawBordersOnToolbarButtons;
    BOOL _shouldUseVibrancy;
}

+ (id)_loadThemeFromURL:(id)arg1 error:(id *)arg2;
+ (id)_parseFontElement:(id)arg1 name:(id *)arg2 error:(id *)arg3;
+ (id)_parseInsetElement:(id)arg1 name:(id *)arg2 error:(id *)arg3;
+ (id)_parseGradientElement:(id)arg1 name:(id *)arg2 error:(id *)arg3;
+ (id)_parseColorElement:(id)arg1 requireName:(BOOL)arg2 name:(id *)arg3 allowLocation:(BOOL)arg4 location:(double *)arg5 error:(id *)arg6;
+ (id)currentTheme;
+ (void)initialize;
+ (void)editNumber:(id)arg1;
+ (void)editGradient:(id)arg1;
+ (void)editColor:(id)arg1;
@property(readonly) BOOL shouldUseVibrancy; // @synthesize shouldUseVibrancy=_shouldUseVibrancy;
@property(readonly) BOOL shouldDrawBordersOnToolbarButtons; // @synthesize shouldDrawBordersOnToolbarButtons=_shouldDrawBordersOnToolbarButtons;
@property(readonly) BOOL shouldShowWindowTitleBars; // @synthesize shouldShowWindowTitleBars=_shouldShowWindowTitleBars;
@property(readonly, nonatomic) BOOL shouldUseSingleLineNavigatorItems; // @synthesize shouldUseSingleLineNavigatorItems=_shouldUseSingleLineNavigatorItems;
- (void).cxx_destruct;
- (void)updateHeightOfBarView:(id)arg1 barHasTopBorder:(BOOL)arg2 barHasBottomBorder:(BOOL)arg3 adjacentView:(id)arg4;
- (void)updateHeightOfBarView:(id)arg1 barHasBorder:(BOOL)arg2 adjacentView:(id)arg3;
- (double)barHeightIncludeTopBorder:(BOOL)arg1 includeBottomBorder:(BOOL)arg2;
- (double)barHeightIncludeBorder:(BOOL)arg1;
@property(readonly) NSColor *activityViewScrollingTextFieldTextColorInactive;
@property(readonly) NSColor *activityViewScrollingTextFieldTextColorActive;
@property(readonly) NSGradient *bluePunchOutGradient;
- (id)pressedTextShadowForTextColor:(id)arg1;
- (id)editorAnnotationTestSuccess10;
- (id)editorAnnotationTestFail10;
- (id)editorAnnotationTest10;
- (id)statusTestFailureImageOfSize:(unsigned long long)arg1 isDisabled:(BOOL)arg2;
- (id)statusTestFailureImageOfSize:(unsigned long long)arg1;
- (id)statusTestFailureMixedImageOfSize:(unsigned long long)arg1 isDisabled:(BOOL)arg2;
- (id)statusTestFailureMixedImageOfSize:(unsigned long long)arg1;
- (id)statusTestSuccessMixedImageOfSize:(unsigned long long)arg1 isDisabled:(BOOL)arg2;
- (id)statusTestSuccessMixedImageOfSize:(unsigned long long)arg1;
- (id)statusTestSuccessImageOfSize:(unsigned long long)arg1 isDisabled:(BOOL)arg2;
- (id)statusTestSuccessImageOfSize:(unsigned long long)arg1;
- (id)statusTestSuccessOutlineImageOfSize:(unsigned long long)arg1 isDisabled:(BOOL)arg2;
- (id)statusTestSuccessOutlineImageOfSize:(unsigned long long)arg1;
- (id)statusTestOutlineImageOfSize:(unsigned long long)arg1;
- (id)statusTestMissingBaselineForPerformanceMetricsImageOfSize:(unsigned long long)arg1 isDisabled:(BOOL)arg2;
- (id)statusTestMissingBaselineForPerformanceMetricsImageOfSize:(unsigned long long)arg1;
- (id)statusTestMeasuredPerformanceMetricsImageOfSize:(unsigned long long)arg1 isDisabled:(BOOL)arg2;
- (id)statusTestMeasuredPerformanceMetricsImageOfSize:(unsigned long long)arg1;
- (id)statusCanceledImageOfSize:(unsigned long long)arg1 isDisabled:(BOOL)arg2;
- (id)statusCanceledImageOfSize:(unsigned long long)arg1;
- (id)statusWarningFixitImageOfSize:(unsigned long long)arg1 isDisabled:(BOOL)arg2;
- (id)statusWarningFixitImageOfSize:(unsigned long long)arg1;
- (id)statusWarningImageOfSize:(unsigned long long)arg1 isDisabled:(BOOL)arg2;
- (id)statusWarningImageOfSize:(unsigned long long)arg1;
- (id)statusSuccessImageOfSize:(unsigned long long)arg1 isDisabled:(BOOL)arg2;
- (id)statusSuccessImageOfSize:(unsigned long long)arg1;
- (id)statusStaticAnalysisWarningImageOfSize:(unsigned long long)arg1 isDisabled:(BOOL)arg2;
- (id)statusStaticAnalysisWarningImageOfSize:(unsigned long long)arg1;
- (id)statusStaticAnalysisStepImageOfSize:(unsigned long long)arg1 isDisabled:(BOOL)arg2;
- (id)statusStaticAnalysisStepImageOfSize:(unsigned long long)arg1;
- (id)statusStaticAnalysisIssueImageOfSize:(unsigned long long)arg1 isDisabled:(BOOL)arg2;
- (id)statusStaticAnalysisIssueImageOfSize:(unsigned long long)arg1;
- (id)statusStaticAnalysisControlFlowStepImageOfSize:(unsigned long long)arg1 isDisabled:(BOOL)arg2;
- (id)statusStaticAnalysisControlFlowStepImageOfSize:(unsigned long long)arg1;
- (id)statusMessageImageOfSize:(unsigned long long)arg1 isDisabled:(BOOL)arg2;
- (id)statusMessageImageOfSize:(unsigned long long)arg1;
- (id)statusGenericIssueImageOfSize:(unsigned long long)arg1 isDisabled:(BOOL)arg2;
- (id)statusGenericIssueImageOfSize:(unsigned long long)arg1;
- (id)statusFailureImageOfSize:(unsigned long long)arg1 isDisabled:(BOOL)arg2;
- (id)statusFailureImageOfSize:(unsigned long long)arg1;
- (id)statusErrorFixitImageOfSize:(unsigned long long)arg1 isDisabled:(BOOL)arg2;
- (id)statusErrorFixitImageOfSize:(unsigned long long)arg1;
- (id)statusErrorImageOfSize:(unsigned long long)arg1 isDisabled:(BOOL)arg2;
- (id)statusErrorImageOfSize:(unsigned long long)arg1;
- (id)statusBuildInProgressImageOfSize:(unsigned long long)arg1 isDisabled:(BOOL)arg2;
- (id)statusBuildInProgressImageOfSize:(unsigned long long)arg1;
@property(readonly) NSImage *removeButtonTemplate;
@property(readonly) NSImage *addButtonTemplate;
@property(readonly) NSImage *hideContentTemplateImage;
@property(readonly) NSImage *showContentTemplateImage;
@property(readonly) NSImage *gearTemplateImage;
@property(readonly) NSImage *infoTemplateImage;
@property(readonly) NSImage *quickLookTemplateImage;
@property(readonly) NSImage *favoriteOffSelectedImage;
@property(readonly) NSImage *favoriteOffImage;
@property(readonly) NSImage *favoriteOnSelectedImage;
@property(readonly) NSImage *favoriteOnImage;
@property(readonly) NSColor *bezelAlertShadowColor;
@property(readonly) NSColor *bezelAlertFontColor;
@property(readonly) NSColor *bezelAlertBackgroundColor;
@property(readonly) NSGradient *buttonSeparatorHighlightGradient;
@property(readonly) NSGradient *buttonSeparatorGradient;
@property(readonly) NSGradient *pathSeparatorHighlightGradientInactive;
@property(readonly) NSGradient *pathSeparatorGradientInactive;
@property(readonly) NSGradient *pathSeparatorHighlightGradient;
@property(readonly) NSGradient *pathSeparatorGradient;
@property(readonly) NSImage *testRuntimeImage;
@property(readonly) NSImage *testClassImage;
@property(readonly) NSImage *testMethodImage;
@property(readonly) NSImage *botIcon;
@property(readonly) NSImage *ideProjectIcon;
@property(readonly) NSImage *canvasZoomInImage;
@property(readonly) NSImage *canvasZoomActualImage;
@property(readonly) NSImage *canvasZoomOutImage;
@property(readonly) NSImage *alternateFilterFieldImage;
@property(readonly) NSImage *filterFieldImage;
@property(readonly) NSImage *consoleButtonClearImage;
@property(readonly) NSImage *toolbarButtonViewRevisionImage;
@property(readonly) NSImage *toolbarButtonSwitchBranchImage;
@property(readonly) NSImage *toolbarButtonScreenshotImage;
@property(readonly) NSImage *toolbarButtonRestoreSnapshotImage;
@property(readonly) NSImage *toolbarButtonRemoveImage;
@property(readonly) NSImage *toolbarButtonRefreshImage;
@property(readonly) NSImage *toolbarButtonNewDirectoryImage;
@property(readonly) NSImage *toolbarButtonLaunchImage;
@property(readonly) NSImage *toolbarButtonImportRepositoryImage;
@property(readonly) NSImage *toolbarButtonImportImage;
@property(readonly) NSImage *toolbarButtonHistoryImage;
@property(readonly) NSImage *toolbarButtonExportImage;
@property(readonly) NSImage *toolbarButtonDeleteImage;
@property(readonly) NSImage *toolbarButtonCommitPushImage;
@property(readonly) NSImage *toolbarButtonClearConsoleImage;
@property(readonly) NSImage *toolbarButtonCheckoutPullImage;
@property(readonly) NSImage *toolbarButtonAddPopupImage;
@property(readonly) NSImage *toolbarButtonAddImage;
@property(readonly) NSImage *editorVersionLogsTemplate;
@property(readonly) NSImage *editorVersionBlameTemplate;
@property(readonly) NSImage *editorVersionComparisonTemplate;
@property(readonly) NSImage *editorGeniusTemplate;
@property(readonly) NSImage *editorBasicTemplate;
@property(readonly) NSImage *buildTemplate;
@property(readonly) NSImage *breakpointTemplate;
@property(readonly) NSImage *stopTemplate;
@property(readonly) NSImage *pauseTemplate;
@property(readonly) NSImage *profileTemplate;
@property(readonly) NSImage *testTemplate;
@property(readonly) NSImage *analyzeTemplate;
@property(readonly) NSImage *runTemplate;
@property(readonly) NSGradient *toolbarButtonDisabledGradient;
@property(readonly) NSGradient *toolbarButtonActiveGradient;
@property(readonly) NSGradient *toolbarButtonNaturalGradient;
@property(readonly) NSImage *inFieldGoToButtonSmall;
@property(readonly) NSImage *inFieldChooseButtonSmall;
@property(readonly) NSImage *inFieldChooseButtonRegular;
@property(readonly) NSImage *scopeBarConfigurationShadowImage;
- (id)insetTabPressedImage;
@property(readonly) NSImage *roundDeleteButton;
@property(readonly) NSImage *roundAddButton;
@property(readonly) NSImage *smallPullDownArrow;
@property(readonly) NSImage *offlineIndicatorSelected;
@property(readonly) NSImage *offlineIndicator;
@property(readonly) NSImage *statusClearImage;
@property(readonly) NSImage *statusIndeterminateImage;
@property(readonly) NSImage *statusUnavailableImage;
@property(readonly) NSImage *statusAvailableImage;
@property(readonly) NSImage *showHideViewOnRightAlternateTemplate;
@property(readonly) NSImage *showHideViewOnRightTemplate;
@property(readonly) NSImage *showHideViewOnLeftAlternateTemplate;
@property(readonly) NSImage *showHideViewOnLeftTemplate;
@property(readonly) NSImage *statusItemDeleteSelectedPressedImage;
@property(readonly) NSImage *statusItemDeletePressedImage;
@property(readonly) NSImage *statusItemDeleteSelectedImage;
@property(readonly) NSImage *statusItemDeleteImage;
@property(readonly) NSImage *statusItemAddSelectedPressedImage;
@property(readonly) NSImage *statusItemAddPressedImage;
@property(readonly) NSImage *statusItemAddSelectedImage;
@property(readonly) NSImage *statusItemAddImage;
@property(readonly) NSImage *smallLightCheckmarkImage;
@property(readonly) NSImage *smallDarkCheckmarkImage;
@property(readonly) double splitViewDividerSnappingTolerance;
@property(readonly) NSColor *infoHeaderDescriptionColor;
@property(readonly) NSColor *infoHeaderBigTitleColor;
@property(readonly) NSColor *infoHeaderBorderColor;
@property(readonly) NSColor *infoHeaderBackgroundColor2;
@property(readonly) NSColor *infoHeaderBackgroundColor;
@property(readonly) struct CGColor *navigationHUDTabBarLayerTabGradientContainsOpeningURLEndColor;
@property(readonly) struct CGColor *navigationHUDTabBarLayerTabGradientContainsOpeningURLStartColor;
@property(readonly) NSGradient *navigationHUDTemplateImageInnerGradient;
@property(readonly) struct CGColor *navigationHUDEditorContextInactiveSelectionGradientEndColor;
@property(readonly) struct CGColor *navigationHUDEditorContextInactiveSelectionGradientStartColor;
@property(readonly) struct CGColor *navigationHUDEditorContextActiveSelectionGradientEndColor;
@property(readonly) struct CGColor *navigationHUDEditorContextActiveSelectionGradientStartColor;
@property(readonly) NSColor *navigationHUDTabBarLayerInnerActiveSelectionShadowColor;
@property(readonly) NSColor *navigationHUDTabBarLayerInnerInactiveSelectionShadowColor;
@property(readonly) struct CGColor *navigationHUDTabBarLayerTabGradientActiveSelectionEndColor;
@property(readonly) struct CGColor *navigationHUDTabBarLayerTabGradientActiveSelectionStartColor;
@property(readonly) struct CGColor *navigationHUDTabBarLayerTabGradientInactiveSelectionEndColor;
@property(readonly) struct CGColor *navigationHUDTabBarLayerTabGradientInactiveSelectionStartColor;
@property(readonly) struct CGColor *navigationHUDTabBarOverflowIndicationColor;
@property(readonly) struct CGColor *navigationHUDLineHighlightColor;
@property(readonly) struct CGColor *navigationHUDLineColor;
@property(readonly) struct CGColor *navigationHUDTabBarLayerTabGradientEndColor;
@property(readonly) struct CGColor *navigationHUDTabBarLayerTabGradientStartColor;
@property(readonly) NSGradient *navigationHUDPlusImageGradient;
@property(readonly) struct CGColor *navigationHUDCoverFlowSelectedLayerShadowColor;
@property(readonly) struct CGColor *navigationHUDWindowLayerBorderColor;
@property(readonly) struct CGColor *navigationHUDWindowLayerBackgroundGradientEndColor;
@property(readonly) struct CGColor *navigationHUDWindowLayerBackgroundGradientStartColor;
@property(readonly) struct CGColor *navigationHUDTextShadowColor;
@property(readonly) NSColor *navigationHUDTextColor;
@property(readonly) NSColor *navigationHUDWindowBorderColor;
@property(readonly) NSGradient *navigationHUDWindowBackgroundGradient;
@property(readonly) NSColor *menuStrokeColor;
@property(readonly) NSColor *menuSecondaryColor;
@property(readonly) NSColor *menuWhiteColor;
@property(readonly) NSColor *ibDockGroupSeparatorColor;
@property(readonly) NSGradient *ibDockItemSelectionGradientInactive;
@property(readonly) NSColor *ibDockItemSelectionBorderColorInactive;
@property(readonly) NSGradient *ibDockItemSelectionGradientActive;
@property(readonly) NSColor *ibDockItemSelectionBorderColorActive;
@property(readonly) NSGradient *ibDocumentOutlineViewCapsuleHeaderGradient;
@property(readonly) NSColor *ibDockInactiveBackgroundColor;
@property(readonly) NSColor *ibDockActiveBackgroundColor;
@property(readonly) NSGradient *HUDPopUpHighlightGradient;
@property(readonly) NSColor *HUDPopUpBackgroundColor;
@property(readonly) NSColor *HUDPopUpBorderColor;
@property(readonly) NSColor *libraryTileViewBackgroundColor;
@property(readonly) NSColor *libraryRightClickedAssetBorderColor;
@property(readonly) NSColor *libraryInactiveSelectedAssetBorderColor;
@property(readonly) NSColor *librarySelectedAssetBorderColor;
@property(readonly) NSColor *libraryInactiveSelectedAssetBackgroundColor;
@property(readonly) NSColor *librarySelectedAssetBackgroundColor;
@property(readonly) NSColor *libraryAssetBorderColor;
@property(readonly) NSColor *libraryAssetBackgroundColor;
@property(readonly) struct CGColor *activityViewScanLineColor;
@property(readonly) NSGradient *activityViewInnerBezelGradient;
@property(readonly) NSGradient *activityViewOuterBezelGradient;
@property(readonly) NSColor *activityViewHighlightShadowColor;
@property(readonly) NSGradient *activityViewBackgroundGradient;
@property(readonly) NSGradient *activityViewPopUpBottomBarGradientClicked;
@property(readonly) NSGradient *activityViewPopUpBottomBarGradient;
@property(readonly) struct CGColor *activityViewPopUpBackgroundColor;
@property(readonly) struct CGColor *activityViewPopUpLineCGColor;
@property(readonly) struct CGColor *activityViewPopUpBorderCGColor;
@property(readonly) NSColor *activityViewPopUpBorderColor;
@property(readonly) struct CGColor *activityViewProgressIndicatorDiagonalsColorPopUpStyle;
@property(readonly) struct CGColor *activityViewProgressIndicatorDiagonalsColorMainStyle;
@property(readonly) NSColor *activityViewProgressIndicatorHighlightColor;
@property(readonly) NSColor *activityViewProgressIndicatorVerticalBorderColor;
@property(readonly) NSColor *activityViewProgressIndicatorInnerShadowColorPopUpStyle;
@property(readonly) NSColor *activityViewProgressIndicatorInnerShadowColorMainStyle;
@property(readonly) NSColor *activityViewProgressIndicatorBackgroundFillColor;
@property(readonly) struct CGColor *activityViewProgressIndicatorProgressBorderColorInactive;
@property(readonly) struct CGColor *activityViewProgressIndicatorProgressBorderColorActive;
@property(readonly) struct CGColor *activityViewProgressIndicatorProgressEndColorInactive;
@property(readonly) struct CGColor *activityViewProgressIndicatorProgressStartColorInactive;
@property(readonly) struct CGColor *activityViewProgressIndicatorProgressEndColorActive;
@property(readonly) struct CGColor *activityViewProgressIndicatorProgressStartColorActive;
@property(readonly) struct CGColor *activityViewProgressIndicatorDeterminateBarShadowColor;
@property(readonly) struct CGColor *activityViewProgressIndicatorProgressColorPopUp;
@property(readonly) struct CGColor *activityViewProgressIndicatorBackgroundColorPopUp;
@property(readonly) NSColor *activityViewScrollingTextFieldTextShadowColorInactive;
@property(readonly) NSColor *activityViewScrollingTextFieldTextShadowColorActive;
@property(readonly) NSColor *activityViewBackgroundInnerGlowColor;
- (struct CGColor *)activityViewBorderCGColorForView:(id)arg1;
- (struct CGColor *)activityViewBorderCGColorInactive;
- (struct CGColor *)activityViewBorderCGColorActive;
@property(readonly) NSColor *activityViewBorderColor;
- (struct CGColor *)activityViewHighlightCGColorForView:(id)arg1;
- (struct CGColor *)activityViewHighlightColorInactive;
- (struct CGColor *)activityViewHighlightColorActive;
- (struct CGColor *)activityViewBackgroundBottomColorForView:(id)arg1;
- (struct CGColor *)activityViewBackgroundGradientBottomColorInactive;
- (struct CGColor *)activityViewBackgroundGradientBottomColorActive;
- (struct CGColor *)activityViewBackgroundTopColorForView:(id)arg1;
- (struct CGColor *)activityViewBackgroundGradientTopColorInactive;
- (struct CGColor *)activityViewBackgroundGradientTopColorActive;
@property(readonly) NSColor *imageCatalogTitleColor;
@property(readonly) NSColor *imageCatalogVariationTitleColor;
@property(readonly) NSFont *imageCatalogVariationTitleFont;
@property(readonly) NSColor *imageCatalogIdiomTitleColor;
@property(readonly) NSFont *imageCatalogIdiomTitleFont;
@property(readonly) NSGradient *imageCatalogImageSetIdiomTitleBackground;
@property(readonly) NSFont *imageCatalogTitleFont;
@property(readonly) NSColor *bluePunchOutInactiveColor;
@property(readonly) NSColor *bluePunchOutColor;
@property(readonly) NSColor *blueOnStateTextColor;
@property(readonly) NSColor *reportColorGraphGreen;
@property(readonly) NSColor *reportColorGraphBlue;
@property(readonly) NSColor *reportColorLightGray;
@property(readonly) NSColor *reportColorGray;
@property(readonly) NSColor *reportColorDarkGray;
@property(readonly) NSColor *reportColorMagenta;
@property(readonly) NSColor *reportColorBlue;
@property(readonly) NSColor *reportColorCyan;
@property(readonly) NSColor *reportColorGreen;
@property(readonly) NSColor *reportColorYellow;
@property(readonly) NSColor *reportColorRed;
@property(readonly) NSColor *reportCapacityOtherColor;
@property(readonly) NSColor *reportCapacityProcessColor;
@property(readonly) NSColor *reportCapacityUnusedColor;
@property(readonly) NSColor *reportCapacityBorderColor;
@property(readonly) CDStruct_bf6d4a14 reportContentMargins;
@property(readonly) NSColor *reportBackgroundColor;
@property(readonly) NSColor *reportSectionMidLabelColor;
@property(readonly) NSFont *reportSectionMidUnitLabelFont;
@property(readonly) NSFont *reportSectionMidNumberLabelFont;
@property(readonly) NSColor *reportSectionBigLabelColor;
@property(readonly) NSFont *reportSectionBigUnitLabelFont;
@property(readonly) NSFont *reportSectionBigNumberLabelFont;
@property(readonly) NSColor *reportSectionBackgroundColor;
@property(readonly) NSColor *reportSectionBorderColor;
@property(readonly) NSColor *reportSectionBackgroundLabelColor;
@property(readonly) NSFont *reportSectionBackgroundLabelFont;
@property(readonly) NSColor *reportSectionTitleLabelColor;
@property(readonly) NSFont *reportSectionTitleLabelFont;
@property(readonly) NSColor *reportTopSectionDescriptionColor;
@property(readonly) NSFont *reportTopSectionDescriptionFont;
@property(readonly) NSColor *reportTopSectionDescriptionLabelColor;
@property(readonly) NSFont *reportTopSectionDescriptionLabelFont;
@property(readonly) NSColor *reportTopSectionSubtitleColor;
@property(readonly) NSFont *reportTopSectionSubtitleFont;
@property(readonly) NSColor *reportTopSectionTitleLabelColor;
@property(readonly) NSFont *reportTopSectionTitleLabelFont;
@property(readonly) NSColor *headerSliceIssueStripeColor;
@property(readonly) NSGradient *headerSliceIssueBackgroundGradient;
@property(readonly) NSColor *headerSliceDisclosureButtonHighlightColor;
@property(readonly) NSColor *headerSliceDisclosureButtonColor;
@property(readonly) NSFont *headerSliceDisclosureButtonFont;
@property(readonly) NSColor *headerSliceLabelColor;
@property(readonly) NSFont *headerSliceLabelFont;
@property(readonly) NSGradient *headerSliceBackgroundGradient;
@property(readonly) NSColor *headerSliceBottomStrokeColor;
@property(readonly) NSColor *headerSliceTopStrokeColor;
@property(readonly) NSColor *greenEmphasisBoxStrokeColor;
@property(readonly) NSColor *greenEmphasisBoxBackgroundColor;
@property(readonly) NSColor *selectedTokenColor;
@property(readonly) NSColor *tokenStrokeColor;
@property(readonly) NSColor *tokenBackgroundColor;
@property(readonly) NSFont *noContentMarkerFont;
@property(readonly) NSColor *findHiddenCharacterColor;
@property(readonly) NSColor *findUnderlineColor4;
@property(readonly) NSColor *findUnderlineColor3;
@property(readonly) NSColor *findUnderlineColor2;
@property(readonly) NSColor *findUnderlineColor1;
@property(readonly) NSGradient *findBackgroundGradient4;
@property(readonly) NSGradient *findBackgroundGradient3;
@property(readonly) NSGradient *findBackgroundGradient2;
@property(readonly) NSGradient *findBackgroundGradient1;
@property(readonly) NSColor *scmLogHeaderTextColor;
@property(readonly) double scmBlameAgeHue;
@property(readonly) NSGradient *scmLogHeaderGradient;
@property(readonly) NSColor *versionsDiffInactiveStrokeColor2;
@property(readonly) NSColor *versionsDiffInactiveStrokeColor1;
@property(readonly) NSColor *versionsDiffUnfocusedStrokeColor2;
@property(readonly) NSColor *versionsDiffUnfocusedStrokeColor1;
@property(readonly) NSColor *versionsDiffInactiveHighlightColor2;
@property(readonly) NSColor *versionsDiffInactiveHighlightColor1;
@property(readonly) NSColor *versionsDiffUnfocusedHighlightColor2;
@property(readonly) NSColor *versionsDiffUnfocusedHighlightColor1;
@property(readonly) NSColor *versionsDiffInactiveDisabledStrokeColor2;
@property(readonly) NSColor *versionsDiffInactiveDisabledStrokeColor1;
@property(readonly) NSColor *versionsDiffUnfocusedDisabledStrokeColor2;
@property(readonly) NSColor *versionsDiffUnfocusedDisabledStrokeColor1;
@property(readonly) NSColor *versionsDiffInactiveDisabledHighlightColor2;
@property(readonly) NSColor *versionsDiffInactiveDisabledHighlightColor1;
@property(readonly) NSColor *versionsDiffUnfocusedDisabledHighlightColor2;
@property(readonly) NSColor *versionsDiffUnfocusedDisabledHighlightColor1;
@property(readonly) NSColor *versionsConflictDiffInactiveStrokeColor2;
@property(readonly) NSColor *versionsConflictDiffUnfocusedStrokeColor2;
@property(readonly) NSColor *versionsConflictDiffStrokeColor2;
@property(readonly) NSColor *versionsConflictDiffInactiveHighlightColor2;
@property(readonly) NSColor *versionsConflictDiffUnfocusedHighlightColor2;
@property(readonly) NSColor *versionsConflictDiffHighlightColor2;
@property(readonly) NSColor *versionsConflictDiffInactiveStrokeColor1;
@property(readonly) NSColor *versionsConflictDiffUnfocusedStrokeColor1;
@property(readonly) NSColor *versionsConflictDiffStrokeColor1;
@property(readonly) NSColor *versionsConflictDiffInactiveHighlightColor1;
@property(readonly) NSColor *versionsConflictDiffUnfocusedHighlightColor1;
@property(readonly) NSColor *versionsConflictDiffHighlightColor1;
@property(readonly) NSColor *versionsDiffDisabledStrokeColor2;
@property(readonly) NSColor *versionsDiffDisabledHighlightColor2;
@property(readonly) NSColor *versionsDiffDisabledStrokeColor1;
@property(readonly) NSColor *versionsDiffDisabledHighlightColor1;
@property(readonly) NSColor *versionsDiffStrokeColor2;
@property(readonly) NSColor *versionsDiffHighlightColor2;
@property(readonly) NSColor *versionsDiffStrokeColor1;
@property(readonly) NSColor *versionsDiffHighlightColor1;
@property(readonly) NSColor *diffButtonDisabledInactiveStroke;
@property(readonly) NSColor *diffButtonDisabledUnfocusedStroke;
@property(readonly) NSColor *diffButtonDisabledDepressedStroke;
@property(readonly) NSColor *diffButtonDisabledStroke;
@property(readonly) NSColor *diffButtonEnabledInactiveStroke;
@property(readonly) NSColor *diffButtonEnabledUnfocusedStroke;
@property(readonly) NSColor *diffButtonEnabledDepressedStroke;
@property(readonly) NSColor *diffButtonEnabledStroke;
@property(readonly) NSGradient *diffButtonDisabledInactiveGradient;
@property(readonly) NSGradient *diffButtonDisabledUnfocusedGradient;
@property(readonly) NSGradient *diffButtonDisabledDepressedGradient;
@property(readonly) NSGradient *diffButtonDisabledGradient;
@property(readonly) NSGradient *diffButtonEnabledInactiveGradient;
@property(readonly) NSGradient *diffButtonEnabledUnfocusedGradient;
@property(readonly) NSGradient *diffButtonEnabledDepressedGradient;
@property(readonly) NSGradient *diffButtonEnabledGradient;
@property(readonly) NSColor *scmBlameAnnotationLineColor;
@property(readonly) NSColor *inspectorDisabledSliverLabelColor;
@property(readonly) NSColor *inspectorSliverLabelColor;
@property(readonly) NSFont *inspectorSliverLabelFont;
@property(readonly) NSColor *inspectorSectionTitleColor;
@property(readonly) NSFont *inspectorSectionTitleFont;
@property(readonly) NSFont *lineNumberFont;
@property(readonly) NSColor *messageBubbleButtonForegroundColor;
@property(readonly) NSColor *messageBubbleButtonBackgroundColor;
@property(readonly) NSGradient *scrollbarMarkerDiffConflictGradient;
@property(readonly) NSGradient *scrollbarMarkerDiffGradient;
@property(readonly) NSGradient *scrollbarMarkerAnalyzerGradient;
@property(readonly) NSGradient *scrollbarMarkerWarningGradient;
@property(readonly) NSGradient *scrollbarMarkerErrorGradient;
@property(readonly) NSColor *pageGuideColor;
@property(readonly) NSColor *analyzerFlowArrowsColor;
@property(readonly) NSGradient *foldingRibbonGradient;
@property(readonly) NSGradient *textCompletionScrollerSlotGradient;
@property(readonly) NSGradient *textCompletionScrollerKnobGradient;
@property(readonly) NSColor *textCompletionListNotRecommendedStrikeThroughColor;
@property(readonly) NSColor *textCompletionListTypeColor;
@property(readonly) NSColor *textCompletionListTitleColor;
@property(readonly) NSGradient *textCompletionListBackgroundGradient;
@property(readonly) NSFont *infoHeaderBigTitleFont;
@property(readonly) NSFont *scmLogFont;
@property(readonly) NSFont *variablesRawValueFont;
@property(readonly) NSFont *variablesChangedFont;
@property(readonly) NSFont *variablesSummaryFont;
@property(readonly) NSFont *variablesValueFont;
@property(readonly) NSFont *variablesTypeFont;
@property(readonly) NSFont *variablesNameFont;
@property(readonly) NSColor *scmLogLinkTextColor;
@property(readonly) NSColor *scmLogSubtextColor;
@property(readonly) NSColor *variablesChangedColor;
@property(readonly) NSColor *variablesSummaryColor;
@property(readonly) NSColor *variablesInactiveColor;
@property(readonly) NSColor *variablesTextColor;
@property(readonly) NSGradient *hudScrollerSlotGradient;
@property(readonly) NSGradient *hudScrollerKnobGradient;
@property(readonly) NSColor *breakpointStrokeColor;
@property(readonly) NSGradient *breakpointBackgroundGradient;
- (id)statusBadgeConflictColorForSelected:(BOOL)arg1;
@property(readonly) NSColor *statusBadgeConflictColor;
@property(readonly) NSColor *statusBadgeConflictHighlightColor;
- (id)statusBadgeForegroundColorForView:(id)arg1 selected:(BOOL)arg2;
- (id)statusBadgeBackgroundColorForView:(id)arg1 selected:(BOOL)arg2;
@property(readonly) NSColor *statusBadgeInactiveColor;
@property(readonly) NSColor *statusBadgeActiveGraphiteColor;
@property(readonly) NSColor *statusBadgeActiveAquaColor;
@property(readonly) NSColor *statusBadgeFocusedGraphiteColor;
@property(readonly) NSColor *statusBadgeFocusedAquaColor;
- (id)navigatorSelectionTopCapColorForView:(id)arg1;
- (id)navigatorSelectionGradientForView:(id)arg1;
@property(readonly) NSColor *navigatorPlaceholderTextColor;
@property(readonly) NSColor *navigatorSecondarySelectionColor2;
@property(readonly) NSColor *navigatorSecondarySelectionColor;
@property(readonly) NSColor *navigatorSelectionTopCapInactiveColor;
@property(readonly) NSColor *navigatorSelectionTopCapActiveGraphiteColor;
@property(readonly) NSColor *navigatorSelectionTopCapActiveAquaColor;
@property(readonly) NSColor *navigatorSelectionTopCapFocusedGraphiteColor;
@property(readonly) NSColor *navigatorSelectionTopCapFocusedAquaColor;
@property(readonly) NSGradient *navigatorSelectionInactiveGradient;
@property(readonly) NSGradient *navigatorSelectionActiveGraphiteGradient;
@property(readonly) NSGradient *navigatorSelectionActiveAquaGradient;
@property(readonly) NSGradient *navigatorSelectionFocusedGraphiteGradient;
@property(readonly) NSGradient *navigatorSelectionFocusedAquaGradient;
@property(readonly) NSGradient *navigatorGroupHeaderInactiveGradient;
@property(readonly) NSGradient *navigatorGroupHeaderGradient;
@property(readonly) NSFont *secondaryListFont;
@property(readonly) NSFont *boldListFont;
@property(readonly) NSFont *listFont;
@property(readonly) NSGradient *subToolbarDividerGradient;
@property(readonly) NSGradient *inactiveGradient;
@property(readonly) NSGradient *scopeBar2Gradient;
@property(readonly) NSGradient *scopeBar1Gradient;
@property(readonly) NSGradient *selectedGlassGradient;
@property(readonly) NSGradient *glassGradient;
@property(readonly) NSGradient *selectedActiveGradient;
@property(readonly) NSGradient *active2Gradient;
@property(readonly) NSGradient *active1Gradient;
@property(readonly) NSColor *inspectorAreaButtonBarBackgroundColor;
@property(readonly) NSColor *editorAreaBackgroundColor;
@property(readonly) NSColor *glassSeparatorColor;
@property(readonly) NSGradient *sourceListSelectionGraphiteUnfocusedGradient;
@property(readonly) NSColor *sourceListSelectionTopCapGraphiteUnfocusedColor;
@property(readonly) NSGradient *sourceListSelectionGraphiteGradient;
@property(readonly) NSColor *sourceListSelectionTopCapGraphiteColor;
@property(readonly) NSGradient *sourceListSelectionAquaUnfocusedGradient;
@property(readonly) NSColor *sourceListSelectionTopCapAquaUnfocusedColor;
@property(readonly) NSGradient *sourceListSelectionAquaGradient;
@property(readonly) NSColor *sourceListSelectionTopCapAquaColor;
@property(readonly) NSGradient *sourceListSelectionInactiveGradient;
@property(readonly) NSColor *sourceListSelectionTopCapInactiveColor;
@property(readonly) NSColor *sourceListBackgroundColor;
@property(readonly) NSColor *blackShadow2Color;
@property(readonly) NSColor *blackShadow1Color;
@property(readonly) NSColor *whiteShadow3Color;
@property(readonly) NSColor *whiteShadow2Color;
@property(readonly) NSColor *whiteShadow1Color;
@property(readonly) NSColor *parameterTextColor;
@property(readonly) NSColor *stroke7Color;
@property(readonly) NSColor *stroke6Color;
@property(readonly) NSColor *stroke5Color;
@property(readonly) NSColor *stroke4Color;
@property(readonly) NSColor *stroke3Color;
@property(readonly) NSColor *stroke2Color;
@property(readonly) NSColor *stroke1Color;
@property(readonly) NSColor *background2Color;
@property(readonly) NSColor *background1Color;
@property(readonly) NSColor *inactiveColor;
@property(readonly) NSColor *active2Color;
@property(readonly) NSColor *active1Color;
@property(readonly) NSColor *whiteColor;
@property(readonly) NSColor *blackColor;
@property(readonly) NSColor *windowBackgroundColor;
- (void)_setContents:(id)arg1;
- (id)_contents;
- (id)debugDescription;
- (id)_initWithDictionary:(id)arg1;

@end

