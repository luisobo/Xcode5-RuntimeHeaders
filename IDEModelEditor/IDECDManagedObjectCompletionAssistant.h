//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Xcode3FileTemplateCompletionAssistant.h"

#import "NSOpenSavePanelDelegate.h"

@class NSString;

@interface IDECDManagedObjectCompletionAssistant : Xcode3FileTemplateCompletionAssistant <NSOpenSavePanelDelegate>
{
    BOOL _usePrimitiveDataTypes;
    long long _selectedLanguageTag;
}

+ (id)keyPathsForValuesAffectingAllowPrimitiveDataTypes;
@property(nonatomic) long long selectedLanguageTag; // @synthesize selectedLanguageTag=_selectedLanguageTag;
@property BOOL usePrimitiveDataTypes; // @synthesize usePrimitiveDataTypes=_usePrimitiveDataTypes;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (BOOL)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2;
- (BOOL)panel:(id)arg1 validateURL:(id)arg2 error:(id *)arg3;
- (id)configuredSavePanel;
- (id)configuredOpenPanel;
@property(readonly) BOOL allowPrimitiveDataTypes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

