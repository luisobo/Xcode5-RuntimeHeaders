//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMenu, NSTableView;

@interface PBXTableColumnManager : NSObject
{
    NSTableView *_tableView;
    id <PBXTableColumnProvider> _provider;
    NSMenu *_headerMenu;
}

- (BOOL)validateMenuItem:(id)arg1;
- (void)menuSelected:(id)arg1;
- (id)createColumnChoiceMenu;
- (void)syncMenu;
- (id)headerMenu;
- (id)tableView;
- (void)dealloc;
- (id)initWithTable:(id)arg1 provider:(id)arg2;

@end

