/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DBGCodeModule.h"

// Not exported
@interface DBGLLDBCodeModule : DBGCodeModule
{
    struct SBModule _lldbModule;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1 pathString:(id)arg2 lldbModule:(struct SBModule)arg3;

@end

