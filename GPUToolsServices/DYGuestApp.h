//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSDictionary, NSMutableArray, NSString, NSURL;

@interface DYGuestApp : NSObject <NSCoding, NSCopying>
{
    unsigned long long _kind;
    NSMutableArray *_argumentEntries;
    NSMutableArray *_environmentEntries;
    NSMutableArray *_mutableEnvironmentEntries;
    NSString *_title;
    _Bool _useDeferredLaunch;
    BOOL _applyShellTokenizationToArguments;
    NSURL *_url;
    NSURL *_trueBinary;
    NSURL *_hostURL;
    NSDictionary *_infoPlist;
    NSString *_bundleIdentifier;
    NSString *_currentWorkingDirectory;
    unsigned long long _launchArchitecture;
}

+ (id)keyPathsForValuesAffectingUrl;
+ (id)keyPathsForValuesAffectingPath;
+ (void)initialize;
@property(nonatomic) BOOL applyShellTokenizationToArguments; // @synthesize applyShellTokenizationToArguments=_applyShellTokenizationToArguments;
@property(readonly, nonatomic) NSMutableArray *mutableEnvironmentEntries; // @synthesize mutableEnvironmentEntries=_mutableEnvironmentEntries;
@property(nonatomic) _Bool useDeferredLaunch; // @synthesize useDeferredLaunch=_useDeferredLaunch;
@property(nonatomic) unsigned long long launchArchitecture; // @synthesize launchArchitecture=_launchArchitecture;
@property(copy, nonatomic) NSString *currentWorkingDirectory; // @synthesize currentWorkingDirectory=_currentWorkingDirectory;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) NSDictionary *infoPlist; // @synthesize infoPlist=_infoPlist;
@property(retain, nonatomic) NSURL *hostURL; // @synthesize hostURL=_hostURL;
@property(retain, nonatomic) NSURL *trueBinary; // @synthesize trueBinary=_trueBinary;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) unsigned long long kind; // @synthesize kind=_kind;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *environment; // @dynamic environment;
@property(readonly, nonatomic) NSArray *arguments; // @dynamic arguments;
- (id)_applyShellProcessingOnArgumentValue:(id)arg1;
- (BOOL)isArchitectureAvailable:(unsigned long long)arg1;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(copy, nonatomic) NSString *path; // @dynamic path;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initNoAlloc;
- (id)init;

// Remaining properties
@property(copy, nonatomic) NSArray *argumentEntries; // @dynamic argumentEntries;
@property(copy, nonatomic) NSArray *environmentEntries; // @dynamic environmentEntries;
@property(readonly, nonatomic) NSMutableArray *mutableArgumentEntries; // @dynamic mutableArgumentEntries;

@end

