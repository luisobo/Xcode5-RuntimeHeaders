//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTComparisonDocumentLocation, NSString;

@interface IDELocalizationXLIFFComparisonIssue : NSObject
{
    int _category;
    NSString *_message;
    DVTComparisonDocumentLocation *_location;
}

@property(readonly) DVTComparisonDocumentLocation *location; // @synthesize location=_location;
@property(readonly) int category; // @synthesize category=_category;
@property(readonly) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)description;
- (id)initWithMessage:(id)arg1 category:(int)arg2 oldLocation:(id)arg3 newLocation:(id)arg4;

@end

