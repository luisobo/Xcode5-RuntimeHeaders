//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IDEiTunesDistributionErrorContext : NSObject
{
    NSString *_portalTeamId;
    NSString *_iTunesTeamId;
    NSString *_portalTeamName;
    NSString *_accountUsername;
    NSString *_bundleIdentifier;
}

@property(retain) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain) NSString *accountUsername; // @synthesize accountUsername=_accountUsername;
@property(retain, nonatomic) NSString *portalTeamName; // @synthesize portalTeamName=_portalTeamName;
@property(retain) NSString *iTunesTeamId; // @synthesize iTunesTeamId=_iTunesTeamId;
@property(retain) NSString *portalTeamId; // @synthesize portalTeamId=_portalTeamId;
- (void).cxx_destruct;

@end

