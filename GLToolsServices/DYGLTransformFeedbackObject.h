/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GLToolsServices/DYGLResourceObject.h>

@class NSArray;

@interface DYGLTransformFeedbackObject : DYGLResourceObject
{
    BOOL _paused;
    BOOL _active;
    NSArray *_bufferBindings;
}

@property(nonatomic) BOOL active; // @synthesize active=_active;
@property(nonatomic) BOOL paused; // @synthesize paused=_paused;
@property(retain, nonatomic) NSArray *bufferBindings; // @synthesize bufferBindings=_bufferBindings;
- (void).cxx_destruct;
- (id)initWithProperties:(id)arg1;
- (id)initWithResourceObject:(id)arg1 functionStream:(id)arg2 dataResolver:(id)arg3;

@end

