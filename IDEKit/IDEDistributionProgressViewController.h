/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEViewController.h>

@class NSProgressIndicator, NSString;

@interface IDEDistributionProgressViewController : IDEViewController
{
    NSString *_message;
    NSProgressIndicator *_spinner;
}

@property(retain) NSProgressIndicator *spinner; // @synthesize spinner=_spinner;
@property(copy) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)loadView;
- (id)nibName;

@end

