//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSError, NSWindow;

@interface IBDocumentPluginLiberationContext : NSObject <NSCopying>
{
    BOOL _locatePlugin;
    void *_originalContext;
    NSWindow *_window;
    NSError *_error;
}

@property(nonatomic) BOOL locatePlugin; // @synthesize locatePlugin=_locatePlugin;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSWindow *window; // @synthesize window=_window;
@property(nonatomic) void *originalContext; // @synthesize originalContext=_originalContext;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

