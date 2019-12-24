/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <XCSCore/XCSObject.h>

@class NSArray, NSDictionary, NSString, XCSBotConfiguration, XCSBotGroup, XCSBotSCMBlueprint, XCSValidator;

@interface XCSBot : XCSObject
{
    struct NSArray *_groups;
    XCSBotSCMBlueprint *_lastRevisionBlueprint;
    XCSValidator *_validator;
}

+ (id)botWithName:(id)arg1 group:(id)arg2 type:(unsigned long long)arg3 configuration:(id)arg4 schedules:(struct NSArray *)arg5 lastRevisionBlueprint:(id)arg6 validationErrors:(id *)arg7;
@property(retain, nonatomic) XCSValidator *validator; // @synthesize validator=_validator;
@property(retain, nonatomic) XCSBotSCMBlueprint *lastRevisionBlueprint; // @synthesize lastRevisionBlueprint=_lastRevisionBlueprint;
@property(retain, nonatomic) NSArray *groups; // @synthesize groups=_groups;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *botSCMBlueprintAsDictionary;
- (void)newestNonFatalIntegrationWithCompletionBlock:(id)arg1;
- (void)newestIntegrationWithCompletionBlock:(id)arg1;
- (BOOL)_validateID:(id)arg1 name:(id)arg2 group:(id)arg3 type:(unsigned long long)arg4 configuration:(id)arg5 schedules:(struct NSArray *)arg6 lastRevisionBlueprint:(id)arg7;
- (id)_initWithID:(id)arg1 rev:(id)arg2 tinyID:(id)arg3 name:(id)arg4 group:(id)arg5 type:(unsigned long long)arg6 configuration:(id)arg7 schedules:(id)arg8 lastRevisionBlueprint:(id)arg9 service:(id)arg10 validationErrors:(id *)arg11;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)patchRepresentation;
- (id)saveRepresentationHumanReadable:(BOOL)arg1;
- (id)saveRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;

// Remaining properties
@property(nonatomic) XCSBotConfiguration *configuration; // @dynamic configuration;
@property(retain, nonatomic) XCSBotGroup *group; // @dynamic group;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) NSArray *schedules; // @dynamic schedules;
@property(nonatomic) unsigned long long type; // @dynamic type;

@end

