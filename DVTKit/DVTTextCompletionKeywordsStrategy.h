//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTKit/DVTTextCompletionStrategy.h>

@interface DVTTextCompletionKeywordsStrategy : DVTTextCompletionStrategy
{
}

- (id)completionItemsForDocumentLocation:(id)arg1 context:(id)arg2 highlyLikelyCompletionItems:(id *)arg3 areDefinitive:(char *)arg4;
- (void)prepareForDocumentLocation:(id)arg1 context:(id)arg2;
- (id)_cachedKeywordCompletionsForLangSpecId:(id)arg1;
- (id)_keywordCompletionsForLangSpecId:(id)arg1;
- (id)_stringCompletionItemsForStringArray:(id)arg1;

@end

