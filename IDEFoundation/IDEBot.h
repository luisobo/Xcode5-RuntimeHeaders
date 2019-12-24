/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"

@class DVTStackBacktrace, IDEBotExecution, IDEBotSCMDefinition, IDEXcodeServer, NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSURL;

@interface IDEBot : NSObject <DVTInvalidation>
{
    NSMutableArray *_botExecutions;
    NSMutableDictionary *_botExecutionsByGUID;
    BOOL _performsAnalyzeAction;
    BOOL _performsTestAction;
    BOOL _performsArchiveAction;
    BOOL _enabled;
    BOOL _pollsForCommits;
    BOOL _expectsCommitTriggers;
    BOOL _notifiesCommittersOnSuccess;
    BOOL _notifiesCommittersOnFailure;
    BOOL _isFetchingBotExecutions;
    IDEXcodeServer *_server;
    NSString *_GUID;
    NSURL *_botURL;
    NSString *_name;
    NSString *_botDescription;
    IDEBotSCMDefinition *_scmDefinition;
    NSString *_schemeName;
    unsigned long long _buildsFromCleanSchedule;
    unsigned long long _scheduleType;
    unsigned long long _periodType;
    long long _dayOfWeek;
    NSDate *_timeOfDayDate;
    long long _minuteOfHour;
    NSArray *_additionalEmailsToNotifyOnSuccess;
    NSArray *_additionalEmailsToNotifyOnFailure;
    long long _destinationSelectionType;
    NSArray *_specificDestinationGUIDs;
    NSDictionary *_extendedAttributesDictionary;
    unsigned long long _maximumNumberOfLocalBotExecutions;
    unsigned long long _totalBotExecutionCount;
    IDEBotExecution *_lastBotExecution;
    IDEBotExecution *_lastCompletedBotExecution;
    unsigned long long _lastUpdateGeneration;
    long long _botRevision;
    NSMutableDictionary *_deferredBotExecutionUpdates;
    NSMutableDictionary *_deferredBotExecutionDeletes;
}

+ (BOOL)automaticallyNotifiesObserversOfLastCompletedBotExecution;
+ (BOOL)automaticallyNotifiesObserversOfLastBotExecution;
+ (id)botWithURL:(id)arg1;
+ (id)botURLForBotWithGUID:(id)arg1 server:(id)arg2;
+ (id)_strongURLToWeakBotMap;
+ (void)initialize;
@property(retain, nonatomic) NSMutableDictionary *deferredBotExecutionDeletes; // @synthesize deferredBotExecutionDeletes=_deferredBotExecutionDeletes;
@property(retain, nonatomic) NSMutableDictionary *deferredBotExecutionUpdates; // @synthesize deferredBotExecutionUpdates=_deferredBotExecutionUpdates;
@property(nonatomic) BOOL isFetchingBotExecutions; // @synthesize isFetchingBotExecutions=_isFetchingBotExecutions;
@property(nonatomic) long long botRevision; // @synthesize botRevision=_botRevision;
@property(nonatomic) unsigned long long lastUpdateGeneration; // @synthesize lastUpdateGeneration=_lastUpdateGeneration;
@property(retain, nonatomic) IDEBotExecution *lastCompletedBotExecution; // @synthesize lastCompletedBotExecution=_lastCompletedBotExecution;
@property(retain, nonatomic) IDEBotExecution *lastBotExecution; // @synthesize lastBotExecution=_lastBotExecution;
@property(nonatomic) unsigned long long totalBotExecutionCount; // @synthesize totalBotExecutionCount=_totalBotExecutionCount;
@property(readonly, nonatomic) NSArray *botExecutions; // @synthesize botExecutions=_botExecutions;
@property(nonatomic) unsigned long long maximumNumberOfLocalBotExecutions; // @synthesize maximumNumberOfLocalBotExecutions=_maximumNumberOfLocalBotExecutions;
@property(copy, nonatomic) NSDictionary *extendedAttributesDictionary; // @synthesize extendedAttributesDictionary=_extendedAttributesDictionary;
@property(copy, nonatomic) NSArray *specificDestinationGUIDs; // @synthesize specificDestinationGUIDs=_specificDestinationGUIDs;
@property(nonatomic) long long destinationSelectionType; // @synthesize destinationSelectionType=_destinationSelectionType;
@property(copy, nonatomic) NSArray *additionalEmailsToNotifyOnFailure; // @synthesize additionalEmailsToNotifyOnFailure=_additionalEmailsToNotifyOnFailure;
@property(nonatomic) BOOL notifiesCommittersOnFailure; // @synthesize notifiesCommittersOnFailure=_notifiesCommittersOnFailure;
@property(copy, nonatomic) NSArray *additionalEmailsToNotifyOnSuccess; // @synthesize additionalEmailsToNotifyOnSuccess=_additionalEmailsToNotifyOnSuccess;
@property(nonatomic) BOOL notifiesCommittersOnSuccess; // @synthesize notifiesCommittersOnSuccess=_notifiesCommittersOnSuccess;
@property(nonatomic) BOOL expectsCommitTriggers; // @synthesize expectsCommitTriggers=_expectsCommitTriggers;
@property(nonatomic) BOOL pollsForCommits; // @synthesize pollsForCommits=_pollsForCommits;
@property(nonatomic) long long minuteOfHour; // @synthesize minuteOfHour=_minuteOfHour;
@property(retain, nonatomic) NSDate *timeOfDayDate; // @synthesize timeOfDayDate=_timeOfDayDate;
@property(nonatomic) long long dayOfWeek; // @synthesize dayOfWeek=_dayOfWeek;
@property(nonatomic) unsigned long long periodType; // @synthesize periodType=_periodType;
@property(nonatomic) unsigned long long scheduleType; // @synthesize scheduleType=_scheduleType;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) BOOL performsArchiveAction; // @synthesize performsArchiveAction=_performsArchiveAction;
@property(nonatomic) BOOL performsTestAction; // @synthesize performsTestAction=_performsTestAction;
@property(nonatomic) BOOL performsAnalyzeAction; // @synthesize performsAnalyzeAction=_performsAnalyzeAction;
@property(nonatomic) unsigned long long buildsFromCleanSchedule; // @synthesize buildsFromCleanSchedule=_buildsFromCleanSchedule;
@property(retain, nonatomic) NSString *schemeName; // @synthesize schemeName=_schemeName;
@property(retain, nonatomic) IDEBotSCMDefinition *scmDefinition; // @synthesize scmDefinition=_scmDefinition;
@property(retain, nonatomic) NSString *botDescription; // @synthesize botDescription=_botDescription;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSURL *botURL; // @synthesize botURL=_botURL;
@property(readonly, nonatomic) NSString *GUID; // @synthesize GUID=_GUID;
@property(retain, nonatomic) IDEXcodeServer *server; // @synthesize server=_server;
- (void).cxx_destruct;
- (void)_fetchExecutionCount;
- (void)_fetchNotifyEmails;
- (void)_fetchSchedule;
- (void)enableBotWithCompletionBlock:(id)arg1;
- (void)disableBotWithCompletionBlock:(id)arg1;
- (void)startCleanBotExecutionWithCompletionBlock:(id)arg1;
- (void)startBotExecutionWithCompletionBlock:(id)arg1;
- (void)botExecutionForGUID:(id)arg1 integrationNumber:(unsigned long long)arg2 fetchIfNecessary:(BOOL)arg3 withCompletionBlock:(id)arg4;
- (id)_botExecutionForGUID:(id)arg1;
- (void)fetchBotExecutionsInRange:(struct _NSRange)arg1 withCompletionBlock:(id)arg2;
- (void)fetchBotExecutionsWithCompletionBlock:(id)arg1;
- (void)loadMoreBotExecutionsWithCompletionBlock:(id)arg1;
- (void)botRunGUIDDeleted:(id)arg1 botGUID:(id)arg2;
- (void)botRunModified:(id)arg1;
- (id)fullDescription;
- (id)_scheduleTypeDescriptionString;
@property(readonly, copy) NSString *description;
- (void)updateWithDictionary:(id)arg1 updateGeneration:(unsigned long long)arg2;
- (id)propertyListRepresentation;
- (void)primitiveInvalidate;
- (void)_didChangeBotExecutions;
- (void)_willChangeBotExections;
- (void)_updateLastBotExecutions;
- (id)initWithPropertyListRepresentation:(id)arg1 server:(id)arg2;
- (id)initWithServer:(id)arg1 GUID:(id)arg2;
- (void)_botCommonInit;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

