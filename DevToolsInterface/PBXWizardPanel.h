//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPanel.h"

@class NSBox, NSButton, NSImageView, NSMutableArray, NSTextField, PBXWizard;

@interface PBXWizardPanel : NSPanel
{
    NSButton *_cancelButton;
    NSButton *_prevPageButton;
    NSButton *_nextPageButton;
    NSButton *_tellMeMoreButton;
    NSBox *_wizardPageBox;
    NSImageView *_imageView;
    NSTextField *_messageField;
    BOOL _runningModal;
    id _modalDelegate;
    SEL _modalDidEndSelector;
    void *_modalContextInfo;
    NSMutableArray *_pageHistory;
    unsigned long long _currentPageIndex;
    PBXWizard *_wizardBeingRunModal;
}

+ (id)sharedWizardPanel;
+ (void)set_sharedPanel:(id)arg1;
+ (id)nibName;
- (void)tellMeMore:(id)arg1;
- (BOOL)makeFirstResponder:(id)arg1;
- (void)finish:(id)arg1;
- (void)nextPage:(id)arg1;
- (void)previousPage:(id)arg1;
- (void)performClose:(id)arg1;
- (void)close;
- (void)cancel:(id)arg1;
- (void)update;
- (void)_wizardSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)center;
- (void)beginWizard:(id)arg1 modalForWindow:(id)arg2 modalDelegate:(id)arg3 didEndSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (BOOL)runModalWithWizard:(id)arg1;
- (void)_removeAllPages;
- (void)_removeTailPages;
- (void)_removePagesFromIndex:(unsigned long long)arg1 revertRemovedPages:(BOOL)arg2;
- (id)_tailPages;
- (void)_addPage:(id)arg1;
- (void)_setCurrentPage:(id)arg1;
- (void)_setCurrentPageIndex:(unsigned long long)arg1;
- (id)nextPageWithView;
- (id)nextPage;
- (id)previousPageWithView;
- (id)previousPage;
- (id)currentPage;
- (BOOL)isRunning;

@end

