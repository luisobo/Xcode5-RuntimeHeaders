//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDEEditorDocument<SKEDocumentProtocol>;

@interface SKEDocumentEdition : NSObject
{
    IDEEditorDocument<SKEDocumentProtocol> *_document;
}

- (void).cxx_destruct;
- (BOOL)revert;
- (BOOL)apply;
- (id)initWithDocument:(id)arg1;

@end

