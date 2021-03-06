/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

#import "NSTabViewDelegate-Protocol.h"

@class DVTTabBarView, DVTTabbedWindowTabViewItem, DVTViewController<DVTTabbedWindowTabContentControlling>, NSTabView;

@interface DVTTabSwitcher : NSView <NSTabViewDelegate>
{
    DVTTabBarView *_tabBarView;
    NSTabView *_tabView;
    id <DVTTabSwitcherDelegate> _delegate;
    DVTTabbedWindowTabViewItem *_selectedTabViewItem;
    DVTTabbedWindowTabViewItem *_editingTab;
}

+ (id)keyPathsForValuesAffectingActiveViewController;
@property(retain) DVTTabbedWindowTabViewItem *editingTab; // @synthesize editingTab=_editingTab;
@property(retain, nonatomic) DVTTabbedWindowTabViewItem *selectedTabViewItem; // @synthesize selectedTabViewItem=_selectedTabViewItem;
@property(retain, nonatomic) DVTTabBarView *tabBarView; // @synthesize tabBarView=_tabBarView;
- (void).cxx_destruct;
- (void)tabViewDidChangeNumberOfTabViewItems:(id)arg1;
- (void)tabView:(id)arg1 didSelectTabViewItem:(id)arg2;
- (void)tabView:(id)arg1 willSelectTabViewItem:(id)arg2;
- (BOOL)tabView:(id)arg1 shouldSelectTabViewItem:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tabViewItems;
- (void)insertTabViewItem:(id)arg1 atIndex:(long long)arg2;
- (void)moveTabViewItem:(id)arg1 toIndex:(long long)arg2;
- (void)removeTabViewItem:(id)arg1;
- (long long)indexOfTabViewItem:(id)arg1;
- (id)tabViewItemAtIndex:(long long)arg1;
- (long long)numberOfTabViewItems;
- (void)selectTabViewItemAtIndex:(long long)arg1;
- (void)selectTabViewItem:(id)arg1;
- (id)newTabWithViewController:(id)arg1 atIndex:(unsigned long long)arg2;
@property(readonly) DVTViewController<DVTTabbedWindowTabContentControlling> *activeViewController;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonInit;

@end

