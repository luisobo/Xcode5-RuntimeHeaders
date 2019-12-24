/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DVTSourceControl/DVTSourceControlRevisionLocation.h>

@class NSString;

@interface DVTSourceControlPathLocation : DVTSourceControlRevisionLocation
{
    NSString *_relativePath;
}

+ (BOOL)supportsSecureCoding;
+ (id)defaultImage;
@property(retain) NSString *relativePath; // @synthesize relativePath=_relativePath;
- (void).cxx_destruct;
- (id)description;
- (id)displayName;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)dictionaryRepresentationWithOptions:(unsigned long long)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)pathLocationByAppendingPath:(id)arg1;
- (id)initWithRelativePath:(id)arg1;
- (id)_init;
- (id)initWithRevision:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

