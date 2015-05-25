//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XCSCore/XCSLogDestination.h>

@class NSDateFormatter, NSURL;

@interface XCSFileLogDestination : XCSLogDestination
{
    NSURL *_fileURL;
    NSDateFormatter *_dateFormatter;
}

@property(retain) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void).cxx_destruct;
- (void)logMessageFromFile:(id)arg1 lineNumber:(long long)arg2 className:(id)arg3 methodName:(id)arg4 tags:(id)arg5 userInfo:(id)arg6 message:(id)arg7;
- (id)initWithPath:(id)arg1 tagsToInclude:(id)arg2 tagsToExclude:(id)arg3;
- (id)initWithDictionary:(id)arg1;

@end

