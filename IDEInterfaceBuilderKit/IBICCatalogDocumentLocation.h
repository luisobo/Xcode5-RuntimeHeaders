/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTDocumentLocation.h"

@class NSString;

@interface IBICCatalogDocumentLocation : DVTDocumentLocation
{
    NSString *_relativePath;
}

+ (id)catalogDocumentLocationForItem:(id)arg1 fromDocument:(id)arg2;
+ (id)catalogDocumentLocationForRelativeItemIdentifier:(id)arg1 fromDocument:(id)arg2;
@property(readonly, nonatomic) NSString *relativePath; // @synthesize relativePath=_relativePath;
- (void).cxx_destruct;
- (BOOL)isEqualDisregardingTimestamp:(id)arg1;
- (id)copyWithURL:(id)arg1;
- (long long)compare:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentURL:(id)arg1 timestamp:(id)arg2 andRelativePath:(id)arg3;

@end

