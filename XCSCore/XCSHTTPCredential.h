/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSURLCredential.h"

@interface XCSHTTPCredential : NSURLCredential
{
    unsigned long long _numberOfChallengeAttempts;
}

+ (id)credentialWithUser:(id)arg1 password:(id)arg2 persistence:(unsigned long long)arg3;
@property(nonatomic) unsigned long long numberOfChallengeAttempts; // @synthesize numberOfChallengeAttempts=_numberOfChallengeAttempts;
- (id)increaseNumberOfChallengeAttemptsWithError:(id *)arg1;
- (id)initWithUser:(id)arg1 password:(id)arg2 persistence:(unsigned long long)arg3;

@end

