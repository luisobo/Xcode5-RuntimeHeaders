//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEViewController.h"

@class IDEToy, NSDate, NSString;

@interface IDEToyViewController : IDEViewController
{
    IDEToy *_toy;
    NSString *_titleForDisplay;
    NSDate *_resultDisplayDate;
    id <IDEToyViewControllerDelegate> _delegate;
}

+ (BOOL)shouldBeLayerBacked;
@property(retain, nonatomic) id <IDEToyViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy) NSDate *resultDisplayDate; // @synthesize resultDisplayDate=_resultDisplayDate;
@property(copy) NSString *titleForDisplay; // @synthesize titleForDisplay=_titleForDisplay;
@property(retain) IDEToy *toy; // @synthesize toy=_toy;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)toolTip;
- (id)alternateIconImage;
- (id)iconImage;
- (double)preferredVerticalInset;
- (double)preferredHorizontalInset;
- (struct CGSize)preferredContentSizeConstrainedToSize:(struct CGSize)arg1;
- (void)playgroundExecutionEndedAndCompleted:(BOOL)arg1;
- (void)playgroundExecutionStarted;
- (void)renderResultsForceRedraw:(BOOL)arg1;
- (void)viewDidInstall;
- (void)loadView;
- (id)initWithToy:(id)arg1;

@end

