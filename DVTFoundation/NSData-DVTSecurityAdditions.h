//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSData.h"

@interface NSData (DVTSecurityAdditions)
- (id)dvt_dataDecryptedWithKey:(struct OpaqueSecKeyRef *)arg1 error:(id *)arg2;
- (id)dvt_dataEncryptedWithKey:(struct OpaqueSecKeyRef *)arg1 error:(id *)arg2;
@end

