//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, NSURL, XCSService;

@interface XCSIntegrationAsset : NSObject
{
    NSString *_relativePath;
    unsigned long long _size;
    NSDictionary *_infoDictionary;
    NSDictionary *_metadata;
    XCSService *_service;
}

@property __weak XCSService *service; // @synthesize service=_service;
@property(retain) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain) NSDictionary *infoDictionary; // @synthesize infoDictionary=_infoDictionary;
@property unsigned long long size; // @synthesize size=_size;
@property(retain) NSString *relativePath; // @synthesize relativePath=_relativePath;
- (void).cxx_destruct;
- (id)downloadURLForService:(id)arg1 friendly:(BOOL)arg2;
@property(readonly) NSURL *downloadURL;
- (id)dictionaryRepresentation;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)initWithRelativePath:(id)arg1 size:(unsigned long long)arg2 infoDictionary:(id)arg3 metadata:(id)arg4;
- (id)init;

@end

