//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTKit/DVTTextAnnotation.h>

@class DVTViewController, NSView;

@interface DVTAccessoryViewAnnotation : DVTTextAnnotation
{
    DVTViewController *_viewController;
    Class _controllerClass;
}

- (void).cxx_destruct;
@property(readonly) NSView *view;
@property(readonly) DVTViewController *viewController;
@property(readonly, getter=isViewLoaded) BOOL viewLoaded;
- (id)initWithViewControllerClass:(Class)arg1;

@end

