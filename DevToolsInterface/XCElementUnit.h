//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XCElementAnchorDelegateP.h"

@interface XCElementUnit : NSObject <XCElementAnchorDelegateP>
{
}

- (void)dealloc;
- (void)anchorClearView:(struct NSObject *)arg1;
- (void)_releaseValuesUnit;
- (void)anchorClose:(struct NSObject *)arg1;
- (BOOL)anchorPrepareToClose:(struct NSObject *)arg1;
- (BOOL)anchorCanBeClosed:(struct NSObject *)arg1;
- (void)anchorAddToView:(struct NSObject *)arg1;
- (void)anchorRemoveFromView:(struct NSObject *)arg1;
- (void)anchor:(struct NSObject *)arg1 observeTogglerForChangeLayout:(struct NSObject *)arg2;
- (void)anchor:(struct NSObject *)arg1 observeForChangeLayout:(id)arg2 keyPath:(id)arg3;
- (void)anchor:(struct NSObject *)arg1 observeForUpdateLayout:(id)arg2 keyPath:(id)arg3;
- (void)anchor:(struct NSObject *)arg1 startObservingTableSelection:(id)arg2;
- (void)_tableSelectionDidChangeForTable:(id)arg1 anchor:(struct NSObject *)arg2;
- (id)objectForTable:(id)arg1 row:(long long)arg2;
- (BOOL)prepareToHide;
- (BOOL)prepareToShow;
- (BOOL)anchorIsInEditingState:(struct NSObject *)arg1;
- (BOOL)anchorIsEditing:(struct NSObject *)arg1;
- (void)anchorDiscardEditing:(struct NSObject *)arg1;
- (BOOL)anchorCommitEditing:(struct NSObject *)arg1;
- (void)anchor:(struct NSObject *)arg1 objectDidEndEditing:(struct NSObject *)arg2 inElement:(struct NSObject *)arg3;
- (void)anchor:(struct NSObject *)arg1 objectDidBeginEditing:(struct NSObject *)arg2 inElement:(struct NSObject *)arg3;
- (void)anchorObjectDidChange:(struct NSObject *)arg1;
- (void)anchorUpdateLayout:(struct NSObject *)arg1;
- (void)anchorChangeLayout:(struct NSObject *)arg1;
- (void)anchor:(struct NSObject *)arg1 initialLayoutWithinFace:(id)arg2;
- (void)anchor:(struct NSObject *)arg1 layoutSimpleContentGroupWithinFace:(id)arg2;
- (void)anchor:(struct NSObject *)arg1 layoutChangingContentGroupWithinFace:(id)arg2;
- (void)anchor:(struct NSObject *)arg1 createLayoutWithinFace:(id)arg2;
- (id)anchorTitleForDisclosure:(struct NSObject *)arg1;
- (void)allowReuseOfFace:(id)arg1;
- (id)newOrRetainedFace;
- (void)anchorDidChangeContentGroupDisplayed:(struct NSObject *)arg1;
- (void)anchor:(struct NSObject *)arg1 didChangeRepresentedObject:(id)arg2 previousObject:(id)arg3;
- (BOOL)anchor:(struct NSObject *)arg1 confirmRepresentedObject:(id)arg2;
- (BOOL)anchorContentDisplayed:(struct NSObject *)arg1;

@end

