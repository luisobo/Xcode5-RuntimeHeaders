//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSMutableArray, NSMutableData, _XCIntegerVector;

@interface XCStructuredLog : NSObject
{
    NSMutableData *_entryData;
    NSMutableData *_subsectionTable;
    NSMutableArray *_subsections;
    _XCIntegerVector *_tableOfContents;
    NSData *_closedLogData;
}

- (void)close;
- (id)appendSubsectionWithFormat:(id)arg1;
- (id)appendSubsectionWithFileSystemRepresentation:(const char *)arg1 length:(unsigned long long)arg2;
- (void)appendMessageWithFormat:(id)arg1;
- (void)appendMessageWithFileSystemRepresentation:(const char *)arg1 length:(unsigned long long)arg2;
- (unsigned long long)_appendEntryDataFileSystemRepresentation:(const char *)arg1 length:(unsigned long long)arg2;
- (unsigned long long)numberOfLinesOfEntryAtIndex:(unsigned long long)arg1 forNumberOfCharacterColumns:(unsigned long long)arg2;
- (BOOL)doesEntryAtIndex:(unsigned long long)arg1 matchString:(id)arg2;
- (id)subsectionAtIndex:(unsigned long long)arg1;
- (id)displayStringAtIndex:(unsigned long long)arg1;
- (unsigned long long)numEntries;
- (void)dealloc;
- (id)init;

@end

