//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IBSelectionOwner, NSSet;

@protocol IBSelectionOwnerDelegate <NSObject>

@optional
- (void)selectionOwner:(IBSelectionOwner *)arg1 didSelect:(NSSet *)arg2 andDeselect:(NSSet *)arg3;
- (void)selectionOwner:(IBSelectionOwner *)arg1 willSelect:(NSSet *)arg2 andDeselect:(NSSet *)arg3;
- (BOOL)selectionOwner:(IBSelectionOwner *)arg1 canSelect:(id)arg2;
@end

