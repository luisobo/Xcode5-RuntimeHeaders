//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDocumentController.h"

#import "NSOpenSavePanelDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface PBXDocumentController : NSDocumentController <NSOpenSavePanelDelegate>
{
    BOOL _isRunningOpenPanel;
    NSMutableArray *_openedDocuments;
    NSMutableArray *_extendedTypes;
    NSMutableDictionary *_fileTypeToDocumentTypeDict;
    NSMutableDictionary *_documentTypesForClasses;
    NSMutableDictionary *_localizedFileTypes;
}

+ (void)initialize;
- (void)cancel:(id)arg1;
- (long long)_nextUntitledDocumentNumber;
- (BOOL)panel:(id)arg1 isValidFilename:(id)arg2;
- (long long)runModalOpenPanel:(id)arg1 forTypes:(id)arg2;
- (void)openDocument:(id)arg1;
- (BOOL)openDocumentsFromModalOpenPanel;
- (id)openDocumentWithContentsOfURL:(id)arg1 display:(BOOL)arg2;
- (id)openDocumentWithContentsOfFile:(id)arg1 display:(BOOL)arg2;
- (id)openDocumentWithContentsOfFile:(id)arg1 display:(BOOL)arg2 didOpenWithExternalEditor:(char *)arg3;
- (id)_innerOpenDocumentWithContentsOfFile:(id)arg1 display:(BOOL)arg2 didOpenWithExternalEditor:(char *)arg3;
- (id)_realDocumentPathForPath:(id)arg1;
- (id)_realDocumentPathForPath:(id)arg1 extension:(id)arg2;
- (void)_reviewUnsavedDocumentsWithAlertTitle:(id)arg1 cancellable:(BOOL)arg2 delegate:(id)arg3 didReviewAllSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (void)saveAllDocuments:(id)arg1;
- (void)saveAllDidReviewSaveForDocumentController:(id)arg1 didReviewAll:(BOOL)arg2 contextInfo:(void *)arg3;
- (void)reviewUnsavedDocumentsWithAlertTitle:(id)arg1 cancellable:(BOOL)arg2 delegate:(id)arg3 didReviewAllSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (id)fileDocumentsInProjectDocument:(id)arg1;
- (id)editedFileDocuments;
- (id)untitledFileDocumentWithName:(id)arg1;
- (id)fileDocuments;
- (void)_windowDidBecomeMain:(id)arg1;
- (void)_setActiveProjectForWindow:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (id)projectDocumentsContainingFile:(id)arg1;
- (id)editedProjectDocuments;
- (id)projectDocuments;
- (id)projectDocumentsIncludingOrganizerBackingProjects;
- (id)projectDocumentForProject:(id)arg1;
- (id)currentProjectDocument;
- (id)activeProject;
- (void)addDocument:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)noteNewRecentDocumentURL:(id)arg1;
- (id)_recentDocumentRecordsKeyForMenuTag:(long long)arg1;
- (id)recentProjectDocumentURLs;
- (id)typeFromFileExtension:(id)arg1;
- (id)fileExtensionsFromType:(id)arg1;
- (id)typeForContentsOfURL:(id)arg1 error:(id *)arg2;
- (id)documentTypeForFileAtPath:(id)arg1;
- (id)documentTypeForFileAtPath:(id)arg1 ignoringExternalEditors:(BOOL)arg2;
- (id)documentTypeForFileType:(id)arg1;
- (id)documentTypeForFileType:(id)arg1 ignoringExternalEditors:(BOOL)arg2;
- (id)_documentTypeForFileType:(id)arg1 usingAuxiliaryPreferenceDictionary:(id)arg2 ignoringExternalEditors:(BOOL)arg3 ignoringPrefsForFirstLevel:(BOOL)arg4;
- (id)_documentTypeForFileType:(id)arg1 usingAuxiliaryPreferenceDictionary:(id)arg2;
- (void)setDocumentType:(id)arg1 forFileType:(id)arg2;
- (id)fileTypeToDocumentTypePreferenceDictionary;
- (id)availableDocumentTypesForFileType:(id)arg1;
- (void)_addAvailableDocumentTypesForFileType:(id)arg1 toArray:(id)arg2;
- (id)_allFileTypeIdentifiersForFileType:(id)arg1;
- (id)_fileTypeToDocumentTypeDictionary;
- (id)displayNameForType:(id)arg1;
- (id)_extendedDocumentTypeNamesForDocumentClass:(Class)arg1;
- (id)documentTypes;
- (void)_buildDocumentTypesCache;
- (void)pluginDidLoad:(id)arg1;
- (void)addDocumentTypes:(id)arg1;
- (id)documentClassNames;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

