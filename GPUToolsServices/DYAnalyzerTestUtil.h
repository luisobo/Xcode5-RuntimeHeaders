/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface DYAnalyzerTestUtil : NSObject
{
}

+ (BOOL)_diffAndTestFindingsFile:(id)arg1 withTraceFile:(id)arg2 refName:(id)arg3;
+ (void)_printFindings:(id)arg1 toFile:(id)arg2;
+ (id)_openFile:(id)arg1 create:(BOOL)arg2;
+ (BOOL)_compareReferenceFindings:(id)arg1 refName:(id)arg2;
+ (BOOL)_generateReferenceFindings:(id)arg1 refName:(id)arg2;
+ (BOOL)testFindings:(id)arg1 refName:(id)arg2;
+ (id)findingsOfKind:(id)arg1 kind:(id)arg2;
+ (void)debugPrintFormattedFindingsOfKind:(id)arg1 kind:(id)arg2;
+ (void)debugPrintFormattedFindings:(id)arg1;
+ (BOOL)findingKindIsAbsent:(id)arg1 inFindings:(id)arg2;
+ (BOOL)findingKindIsPresent:(id)arg1 inFindings:(id)arg2;
+ (id)analyzeArchive:(id)arg1;

@end

