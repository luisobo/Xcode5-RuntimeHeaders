//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSAttributedString, NSImage, NSString;

@protocol XCRefactoringModuleItem
- (BOOL)shouldHaveCheckbox;
- (BOOL)isGroupRow;
- (void)drawBackgroundInRect:(struct CGRect)arg1 rowRect:(struct CGRect)arg2;
- (NSString *)details;
- (NSAttributedString *)attributedName;
- (NSString *)name;
- (NSImage *)icon;
- (id <XCRefactoringModuleItem>)childAtIndex:(long long)arg1;
- (unsigned long long)numberOfChildren;
- (BOOL)isExpandable;
@end

