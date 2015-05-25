//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class IDEInspectorKeyPath, NSButton, NSTextField;

@interface IDESourceControlInspectorStatusProperty : IDEInspectorProperty
{
    NSTextField *_statusText;
    NSButton *_button;
    IDEInspectorKeyPath *_statusLetterKeyPath;
    IDEInspectorKeyPath *_statusStringKeyPath;
    IDEInspectorKeyPath *_localStatusFlagKeyPath;
    BOOL _updateForNewStatus;
}

- (void).cxx_destruct;
- (void)unignoreAction:(id)arg1;
- (void)addAction:(id)arg1;
- (void)resolveAction:(id)arg1;
- (void)revertAction:(id)arg1;
- (void)updateForNewStatus;
- (id)inspectorController;
- (void)loadView;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (id)initWithPropertyDefinition:(id)arg1 andController:(id)arg2;

@end

