//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSPrintPanelAccessorizing.h"

@class DVTFontAndColorTheme, DVTObservingToken, DVTPreferenceSetManager, DVTSourceTextView, IDESourceCodeEditor, NSPopUpButton;

@interface IDESourceCodePrintPanelAccessoryController : NSViewController <NSPrintPanelAccessorizing>
{
    DVTObservingToken *_fontAndColorThemesObservationToken;
    id _sourceTextSettingsChangedObsevationToken;
    IDESourceCodeEditor *_sourceCodeEditor;
    DVTSourceTextView *_textView;
    DVTFontAndColorTheme *_selectedFontAndColorTheme;
    NSPopUpButton *_fontAndColorThemesPopUpButton;
}

+ (void)initialize;
@property(retain, nonatomic) DVTSourceTextView *textView; // @synthesize textView=_textView;
@property(retain) IDESourceCodeEditor *sourceCodeEditor; // @synthesize sourceCodeEditor=_sourceCodeEditor;
- (void).cxx_destruct;
- (id)keyPathsForValuesAffectingPreview;
- (id)localizedSummaryItems;
- (void)_openFontsAndColorsPreferencesAction:(id)arg1;
- (void)_fontAndColorThemeMenuItemAction:(id)arg1;
- (void)loadView;
- (void)_updateFontAndColorThemesPopUpButton;
@property BOOL printsTextFolds;
@property BOOL printsHeaderAndFooter;
@property BOOL printsBackground;
- (void)setRepresentedObject:(id)arg1;
- (void)_updateTextFolds;
@property(retain) DVTFontAndColorTheme *selectedFontAndColorTheme; // @synthesize selectedFontAndColorTheme=_selectedFontAndColorTheme;
@property(readonly) DVTPreferenceSetManager *_preferenceSetManager;
- (void)dealloc;

@end

