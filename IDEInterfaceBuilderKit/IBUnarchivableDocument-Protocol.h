/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol IBUnarchivableDocument <NSObject>
- (Class)documentUnarchiver:(id)arg1 classForUnknownElementNamed:(id)arg2;
- (id)documentUnarchiverAllowedReferenceTypes:(id)arg1;
- (BOOL)documentUnarchiverIsUnarchivingStackBasedTreeNode:(id)arg1;
- (void)documentUnarchiver:(id)arg1 didUnarchiveObject:(id)arg2;
- (void)documentUnarchiver:(id)arg1 willUnarchiveObject:(id)arg2;
- (id)documentUnarchiver:(id)arg1 objectForReferenceID:(id)arg2 referenceType:(id)arg3;
- (void)unarchiveDocument:(id)arg1;
@end

