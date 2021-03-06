//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSImageView, NSMutableDictionary, NSProgressIndicator, NSTextField, NSURL;
@protocol GKProgressWindowControllerDelegate;

@interface GKProgressWindowController : NSWindowController
{
    NSImageView *iconView;
    NSTextField *labelField;
    NSProgressIndicator *progressBar;
    NSMutableDictionary *_progressesForTargetURLs;
    BOOL _indeterminate;
    BOOL _shouldAnimateProgressBar;
    id <GKProgressWindowControllerDelegate> _delegate;
    NSURL *_targetURL;
    double _progress;
}

@property(readonly) BOOL shouldAnimateProgressBar; // @synthesize shouldAnimateProgressBar=_shouldAnimateProgressBar;
@property(getter=isIndeterminate) BOOL indeterminate; // @synthesize indeterminate=_indeterminate;
@property double progress; // @synthesize progress=_progress;
@property __weak id <GKProgressWindowControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cancelOperation:(id)arg1;
- (void)windowDidLoad;
- (id)windowNibName;
- (void)presentAfterInterval:(double)arg1;
@property(copy, nonatomic) NSURL *targetURL; // @synthesize targetURL=_targetURL;
- (id)initWithWindow:(id)arg1;
- (void)setFractionCompleted:(double)arg1 forURL:(id)arg2;
- (double)fractionCompletedForURL:(id)arg1;
- (void)addProgressForURLs:(id)arg1;
- (void)updateLabel;

@end

