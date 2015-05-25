//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTKit/DVTBorderedView.h>

@class DVTChoice, NSArray, NSMapTable, NSMutableArray, NSSearchField;

@interface DVTTabChooserView : DVTBorderedView
{
    NSSearchField *_searchField;
    DVTChoice *_selectedChoice;
    long long _pressedIndex;
    long long _mouseDownIndex;
    NSMutableArray *_choices;
    NSMapTable *_accessibilityProxiesByChoice;
    struct {
        unsigned int hasSearchField:1;
        unsigned int _reserved:7;
    } _flags;
    id <DVTTabChooserViewDelegate> _delegate;
    double _choicesOffset;
}

+ (id)keyPathsForValuesAffectingSelectedChoice;
+ (void)initialize;
@property double choicesOffset; // @synthesize choicesOffset=_choicesOffset;
@property __weak id <DVTTabChooserViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSSearchField *searchField; // @synthesize searchField=_searchField;
- (void).cxx_destruct;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityProxyForChoice:(id)arg1;
@property BOOL hasSearchField;
- (void)installSearchField;
- (struct CGRect)searchFieldFrame;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (id)choiceForEvent:(id)arg1 index:(long long *)arg2;
- (id)choiceForPoint:(struct CGPoint)arg1 index:(long long *)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)_drawChoiceAtIndex:(long long)arg1 withChoiceGeometry:(id)arg2;
- (void)_drawOneChoice;
- (id)attributedTitleForChoice:(id)arg1 forceActive:(BOOL)arg2;
- (id)_choiceGeometry;
- (struct CGRect)_rectForChoice:(id)arg1;
- (struct CGRect)_rectForChoiceAtIndex:(long long)arg1;
- (struct CGRect)_rectForChoiceAtIndex:(long long)arg1 withChoiceGeometry:(id)arg2;
@property(readonly) double minimumWidth;
- (struct CGRect)totalChoicesRect;
- (double)totalWidth;
- (double)_widthForChoiceAtIndex:(long long)arg1;
- (double)_widthForChoice:(id)arg1;
- (void)updateBoundSelectedObjects;
@property(retain) DVTChoice *selectedChoice; // @synthesize selectedChoice=_selectedChoice;
@property(readonly) NSMutableArray *mutableChoices;
- (void)updateBoundContent;
@property(copy) NSArray *choices;
- (id)choiceWithIdentifier:(id)arg1;
- (id)choiceAtIndex:(long long)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)commonInit;
- (id)dvtExtraBindings;

@end

