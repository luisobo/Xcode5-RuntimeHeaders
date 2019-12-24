/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"

@class DVTExtension, DVTStackBacktrace, IDEWorkspace, NSArray, NSImage, NSMutableArray, NSString;

@interface IDEActivityReporter : NSObject <DVTInvalidation>
{
    DVTExtension *_representedExtension;
    IDEWorkspace *_workspace;
    NSArray *_activityReports;
    NSImage *_image;
}

+ (void)initialize;
+ (id)activityReporterWithExtension:(id)arg1 workspace:(id)arg2;
@property(readonly) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property(retain) DVTExtension *representedExtension; // @synthesize representedExtension=_representedExtension;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
@property(readonly) NSImage *image;
- (id)newActivityReportWithTitle:(id)arg1 options:(int)arg2 image:(id)arg3;
- (id)newActivityReportWithTitle:(id)arg1 options:(int)arg2 isUserVisible:(BOOL)arg3 image:(id)arg4 fileIOPriority:(unsigned long long)arg5 fileIOCoordinatorBlock:(id)arg6;
- (id)newActivityReportWithTitle:(id)arg1 options:(int)arg2 image:(id)arg3 fileIOPriority:(unsigned long long)arg4 fileIOCoordinatorBlock:(id)arg5;
- (id)initWithWorkspace:(id)arg1;

// Remaining properties
@property(readonly) NSArray *activityReports; // @dynamic activityReports;
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) NSMutableArray *mutableActivityReports; // @dynamic mutableActivityReports;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

