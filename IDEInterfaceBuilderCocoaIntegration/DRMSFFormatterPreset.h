//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DRMSFFormatterPreset : NSObject
{
    NSString *_format;
    NSString *_sample;
    BOOL _isEditable;
    BOOL _isRemovable;
}

+ (id)presetWithFormat:(id)arg1;
- (void).cxx_destruct;
- (void)setIsRemovable:(BOOL)arg1;
- (BOOL)isRemovable;
- (void)setIsEditable:(BOOL)arg1;
- (BOOL)isEditable;
- (void)setSample:(id)arg1;
- (id)sample;
- (void)setFormat:(id)arg1;
- (id)format;
- (id)initWithFormat:(id)arg1;

@end

