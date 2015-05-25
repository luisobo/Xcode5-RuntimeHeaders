//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDateFormatter;

@interface XCDateTimeUtilities : NSObject
{
    NSDateFormatter *_shortDateFormatter;
    NSDateFormatter *_shortTimeFormatter;
    NSDateFormatter *_shortDateTimeFormatter;
    NSDateFormatter *_mediumDateTimeFormatter;
    NSDateFormatter *_longDateTimeFormatter;
    NSDateFormatter *_fullDateTimeFormatter;
}

+ (id)sharedDateTimeUtilities;
@property(readonly) NSDateFormatter *fullDateTimeFormatter; // @synthesize fullDateTimeFormatter=_fullDateTimeFormatter;
@property(readonly) NSDateFormatter *longDateTimeFormatter; // @synthesize longDateTimeFormatter=_longDateTimeFormatter;
@property(readonly) NSDateFormatter *mediumDateTimeFormatter; // @synthesize mediumDateTimeFormatter=_mediumDateTimeFormatter;
@property(readonly) NSDateFormatter *shortDateTimeFormatter; // @synthesize shortDateTimeFormatter=_shortDateTimeFormatter;
@property(readonly) NSDateFormatter *shortTimeFormatter; // @synthesize shortTimeFormatter=_shortTimeFormatter;
@property(readonly) NSDateFormatter *shortDateFormatter; // @synthesize shortDateFormatter=_shortDateFormatter;
- (void)dealloc;
- (id)init;

@end

