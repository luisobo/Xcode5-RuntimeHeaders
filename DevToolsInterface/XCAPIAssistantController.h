//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSTextViewDelegate.h"
#import "NSWindowDelegate.h"
#import "XCAPIQueryCallbackProtocol.h"

@class NSArray, NSScrollView, NSString, NSTextView<XCTextViewAdditions>, NSWindow, PBXSymbol, XCAPIAssistant, XCAPIAssistantConfigurationTableController, XCAPIQueries, XCRAAttributedStringGenerator, XCRAQuery, XCRASliceController;

@interface XCAPIAssistantController : NSObject <XCAPIQueryCallbackProtocol, NSWindowDelegate, NSTextViewDelegate>
{
    XCAPIAssistant *m_contextual_panel;
    NSWindow *m_configurationWindow;
    XCAPIAssistantConfigurationTableController *m_configurationTableController;
    NSScrollView *m_configurationScrollView;
    NSTextView<XCTextViewAdditions> *m_observedTextView;
    XCRAAttributedStringGenerator *m_stringGenerator;
    XCRASliceController *m_sliceController;
    XCAPIQueries *m_APIQueries;
    XCRAQuery *m_currentQuery;
    PBXSymbol *m_currentSymbol;
    NSWindow *m_parentWindow;
    struct CGPoint m_originOfSelectedBuildSettingRow;
    BOOL m_activatedByBuildSettingsInspector;
    BOOL m_firstTime;
    BOOL m_updateInProgress;
}

+ (BOOL)_openHeaderFileAtSymbol:(id)arg1;
+ (BOOL)isAPIAssistantVisible;
+ (id)sharedController;
+ (void)initialize;
@property(nonatomic) BOOL updateInProgress; // @synthesize updateInProgress=m_updateInProgress;
@property(nonatomic) BOOL firstTime; // @synthesize firstTime=m_firstTime;
@property(retain, nonatomic) NSScrollView *configurationScrollView; // @synthesize configurationScrollView=m_configurationScrollView;
@property(nonatomic) BOOL activatedByBuildSettingsInspector; // @synthesize activatedByBuildSettingsInspector=m_activatedByBuildSettingsInspector;
@property(nonatomic) struct CGPoint originOfSelectedBuildSettingRow; // @synthesize originOfSelectedBuildSettingRow=m_originOfSelectedBuildSettingRow;
@property(retain, nonatomic) NSWindow *parentWindow; // @synthesize parentWindow=m_parentWindow;
@property(retain, nonatomic) PBXSymbol *currentSymbol; // @synthesize currentSymbol=m_currentSymbol;
@property(retain, nonatomic) XCRAQuery *currentQuery; // @synthesize currentQuery=m_currentQuery;
@property(retain, nonatomic) XCAPIQueries *APIQueries; // @synthesize APIQueries=m_APIQueries;
@property(retain, nonatomic) XCRASliceController *sliceController; // @synthesize sliceController=m_sliceController;
@property(retain, nonatomic) XCRAAttributedStringGenerator *stringGenerator; // @synthesize stringGenerator=m_stringGenerator;
@property(retain, nonatomic) XCAPIAssistant *contextual_panel; // @synthesize contextual_panel=m_contextual_panel;
@property(nonatomic) NSTextView<XCTextViewAdditions> *observedTextView; // @synthesize observedTextView=m_observedTextView;
@property(retain, nonatomic) NSWindow *configurationWindow; // @synthesize configurationWindow=m_configurationWindow;
@property(retain, nonatomic) XCAPIAssistantConfigurationTableController *configurationTableController; // @synthesize configurationTableController=m_configurationTableController;
- (void)setPersistent:(BOOL)arg1;
- (BOOL)isPersistent;
- (void)_configureForPersistentMode;
- (id)_parametersAttributedString:(id)arg1;
- (id)_abstractAttributedString:(id)arg1;
- (id)_declarationAttributedString:(id)arg1;
- (id)_availabilityAttributedString:(id)arg1;
- (id)_returnValueAttributedString:(id)arg1;
- (id)_sampleCodeAttributedString:(id)arg1;
- (id)_relatedDocumentsAttributedString:(id)arg1;
- (id)_relatedAPIAttributedString:(id)arg1;
- (id)_prefixAttributedString:(id)arg1 withLabel:(id)arg2 breakAfterLabel:(BOOL)arg3;
- (id)localizedParametersPrefixString;
- (id)localizedAbstractPrefixString;
- (id)localizedDeclarationPrefixString;
- (id)localizedAvailabilityPrefixString;
- (id)localizedReturnValuePrefixString;
- (id)localizedRelatedDocumentsPrefixString;
- (id)localizedSampleCodePrefixString;
- (id)localizedRelatedAPIPrefixString;
- (void)configurationSheetDone:(id)arg1;
- (void)showConfigurationOptions:(id)arg1;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (BOOL)_isHeaderFileLink:(id)arg1;
- (void)showDocumentation:(id)arg1;
- (void)showHeaderFile:(id)arg1;
- (void)closeAPIAssistant:(id)arg1;
- (void)showResearchAssistant:(id)arg1;
- (void)_researchWindowDidClose:(id)arg1;
- (void)dismissHUD;
- (void)parentWindowResignedMain:(id)arg1;
- (void)parentWindowBecameKey:(id)arg1;
- (void)codeAssistantDidChangeSelection:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)stopObservingMainAndKeyWindowChangeNotifications;
- (void)observeMainAndKeyWindowChangeNotifications;
- (void)stopObservingTextViewSelectionChanges;
- (void)observeSelectionChangesInTextView;
- (void)updateWithValuesFromSliceController:(id)arg1;
- (void)showResultsForNoSymbolFound;
- (id)_filteredContextStringFromString:(id)arg1;
- (void)showResultsForNoDocumentationFoundForSymbol:(id)arg1;
- (void)clearAllContent;
- (void)updateValuesFromQuery:(id)arg1;
- (void)updateValuesForBuildSettingFromQuery:(id)arg1;
- (id)cachedSliceController;
- (void)showContextualPanelInTextView:(id)arg1;
- (void)showPanelInTextView:(id)arg1;
- (void)updatePersistentPanel:(id)arg1;
- (id)queryWithIdentifier:(id)arg1 timeout:(double)arg2 delegate:(id)arg3 userInfo:(id)arg4;
- (id)APIQueryHelper;
- (void)queryDidFinish:(id)arg1;
- (id)_genericBSIDStringFromQuery:(id)arg1;
- (void)_rerunModifiedQuery:(id)arg1;
- (void)queryDidStart:(id)arg1;
- (void)finishedContentUpdate;
- (void)resetSliceDefaults;
@property(readonly, nonatomic) NSArray *userOrderedSlices;
- (void)sliceConfigurationChanged:(id)arg1;
- (void)showDefaultHelpMessage;
- (void)activateFromBuildSettingsInspector:(id)arg1;
- (void)showForBuildSettingAtPoint:(struct CGPoint)arg1 parentWindow:(id)arg2 query:(id)arg3;
- (void)close;
- (void)activateFromHelpMenu;
- (id)defaultFont;
- (void)_performanceMeasurementStart:(BOOL)arg1;
- (id)localizedString:(id)arg1 description:(id)arg2;
- (void)awakeFromNib;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

