//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEEditorDocument.h>

@interface IDETextDocumentFactoryDocument : IDEEditorDocument
{
}

+ (id)pathToKeyConflictResolutionFromInputFilePath:(id)arg1;
+ (id)convertURLToPlainTextDataOrFile:(id)arg1 hintedFileDataType:(id *)arg2 editableFlag:(char *)arg3 error:(id *)arg4;
+ (Class)textConversionProviderClassForDataType:(id)arg1;
+ (BOOL)isBlacklistedFile:(id)arg1;
+ (BOOL)hasTextConversionProviderClassForDataType:(id)arg1;
- (id)initForURL:(id)arg1 withContentsOfURL:(id)arg2 ofType:(id)arg3 error:(id *)arg4;

@end

