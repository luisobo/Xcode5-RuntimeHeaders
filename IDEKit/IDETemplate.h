/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IDETemplateOptionParent-Protocol.h"
#import "NSPasteboardReading-Protocol.h"
#import "NSPasteboardWriting-Protocol.h"

@class DVTFilePath, IDETemplateKind, IDETemplateOption, IDEWorkspace, NSArray, NSDictionary, NSImage, NSString;

@interface IDETemplate : NSObject <NSPasteboardWriting, NSPasteboardReading, IDETemplateOptionParent>
{
    BOOL _chooserOnly;
    NSString *_defaultCompletionName;
    NSImage *_templateIcon;
    NSString *_mainTemplateFile;
    NSArray *_allowedTypes;
    NSDictionary *_templateInfo;
    DVTFilePath *_filePath;
    IDETemplateKind *_templateKind;
    NSString *_templateName;
    NSString *_templateSummary;
    NSString *_templateDescription;
    NSString *_templateCategory;
    NSArray *_templatePlatforms;
    NSArray *_templateOptions;
    NSString *_buildableType;
    long long _sortOrder;
    IDEWorkspace *_workspace;
    IDETemplateOption *_optionWithMainTemplateFiles;
    IDETemplateOption *_optionWithAllowedTypes;
}

+ (unsigned long long)readingOptionsForType:(id)arg1 pasteboard:(id)arg2;
+ (id)readableTypesForPasteboard:(id)arg1;
+ (id)cachedBasicPasteboardTypeAsArray;
+ (id)availableTemplatesOfTemplateKind:(id)arg1;
+ (id)additionalAvailableTemplatesOfTemplateKind:(id)arg1;
+ (void)_processChildrenOfFilePath:(id)arg1 enumerator:(id)arg2;
+ (void)initialize;
+ (id)_templateInfoForTemplateAtURL:(id)arg1 error:(id *)arg2;
@property(retain) IDETemplateOption *optionWithAllowedTypes; // @synthesize optionWithAllowedTypes=_optionWithAllowedTypes;
@property(retain) IDETemplateOption *optionWithMainTemplateFiles; // @synthesize optionWithMainTemplateFiles=_optionWithMainTemplateFiles;
@property(retain, nonatomic) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property long long sortOrder; // @synthesize sortOrder=_sortOrder;
@property(readonly, copy) NSString *buildableType; // @synthesize buildableType=_buildableType;
@property(readonly) BOOL chooserOnly; // @synthesize chooserOnly=_chooserOnly;
@property(readonly, copy) NSArray *templateOptions; // @synthesize templateOptions=_templateOptions;
@property(readonly) NSArray *templatePlatforms; // @synthesize templatePlatforms=_templatePlatforms;
@property(readonly, copy) NSString *templateCategory; // @synthesize templateCategory=_templateCategory;
@property(copy) NSString *templateDescription; // @synthesize templateDescription=_templateDescription;
@property(readonly, copy) NSString *templateSummary; // @synthesize templateSummary=_templateSummary;
@property(readonly, copy) NSString *templateName; // @synthesize templateName=_templateName;
@property(readonly) IDETemplateKind *templateKind; // @synthesize templateKind=_templateKind;
@property(readonly) DVTFilePath *filePath; // @synthesize filePath=_filePath;
@property(readonly, copy) NSDictionary *templateInfo; // @synthesize templateInfo=_templateInfo;
- (void).cxx_destruct;
- (id)initWithPasteboardPropertyList:(id)arg1 ofType:(id)arg2;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;
@property(readonly, copy) NSArray *allowedTypes; // @synthesize allowedTypes=_allowedTypes;
@property(readonly, copy) NSString *mainTemplateFile; // @synthesize mainTemplateFile=_mainTemplateFile;
- (void)valueDidChangeForOption:(id)arg1;
- (id)currentOptionsIdentifierValue;
- (id)productNameOption;
- (id)currentCompletionName;
@property(readonly, copy) NSString *defaultCompletionName; // @synthesize defaultCompletionName=_defaultCompletionName;
- (long long)templateCompare:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)identifier;
@property(readonly, copy) NSImage *templateIcon; // @synthesize templateIcon=_templateIcon;
- (id)fallbackTemplateIcon;
- (id)imageAtTemplateSize:(id)arg1;
- (Class)templateOptionClass;
- (id)initWithTemplateInfo:(id)arg1 filePath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

