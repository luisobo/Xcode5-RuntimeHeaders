//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTMutableRangeArray, NSArray, NSUndoTextOperation;

@interface DVTTokenizedEditingUndoHelper : NSObject
{
    NSUndoTextOperation *_undoTextOperation;
    DVTMutableRangeArray *_affectedRanges;
    DVTMutableRangeArray *_replacementRanges;
    unsigned long long _editedTokenIndex;
}

@property(readonly) NSArray *replacementRanges; // @synthesize replacementRanges=_replacementRanges;
@property(readonly) NSArray *affectedRanges; // @synthesize affectedRanges=_affectedRanges;
- (void).cxx_destruct;
- (void)didUndoRedo:(id)arg1;
- (void)willUndoRedo:(id)arg1;
- (void)didCoalesceAffectedRange:(struct _NSRange)arg1 replacementRange:(struct _NSRange)arg2 selectedRange:(struct _NSRange)arg3 text:(id)arg4;
- (void)willCoalesceAffectedRange:(struct _NSRange)arg1 replacementRange:(struct _NSRange)arg2 selectedRange:(struct _NSRange)arg3 text:(id)arg4;
- (id)initWithUndoTextOperation:(id)arg1 affectedRange:(struct _NSRange)arg2 layoutManager:(id)arg3 undoManager:(id)arg4 replacementRange:(struct _NSRange)arg5;

@end

