/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEDiagnosticActivityLogMessage.h"

@interface IDESwiftDiagnosticActivityLogMessage : IDEDiagnosticActivityLogMessage
{
    int _diagnosticSeverity;
    unsigned long long _diagnosticLevel;
}

@property(readonly) unsigned long long diagnosticLevel; // @synthesize diagnosticLevel=_diagnosticLevel;
- (id)description;
- (id)initWithDiagnostic:(CDStruct_3b0d17db)arg1 documentURL:(id)arg2;
- (int)diagnosticSeverity;

@end

