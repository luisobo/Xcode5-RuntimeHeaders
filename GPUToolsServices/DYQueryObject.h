/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GPUToolsServices/DYResourceObject.h>

@interface DYQueryObject : DYResourceObject
{
    BOOL _isActive;
    unsigned int _result;
}

@property(readonly, nonatomic) BOOL isActive; // @synthesize isActive=_isActive;
@property(readonly, nonatomic) unsigned int result; // @synthesize result=_result;
- (id)initWithProperties:(id)arg1;
- (id)initWithResourceObject:(id)arg1 functionStream:(id)arg2 dataResolver:(id)arg3;

@end

