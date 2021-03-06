//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "RCUIServiceCurrentRecordingViewController-Protocol.h"

@class NSString, RCAVState, RCLockScreenViewController;
@protocol RCUIClientCurrentRecordingViewController;

@interface RCCurrentRecordingServiceViewController : UIViewController <RCUIServiceCurrentRecordingViewController>
{
    BOOL _screenUpdatesDisabled;
    id <RCUIClientCurrentRecordingViewController> _remoteViewControllerProxy;
    RCLockScreenViewController *_lockscreenViewController;
    RCAVState *_AVState;
}

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
+ (BOOL)_isSecureForRemoteViewService;
@property(retain, nonatomic) RCAVState *AVState; // @synthesize AVState=_AVState;
- (void).cxx_destruct;
- (void)_sendAVStateNotification;
- (void)_clearLockscreenViewController;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)loadCaptureStateWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)dismissLockscreenInterface;
- (void)presentLockscreenInterfaceWithBackgroundColor:(id)arg1 waveformForegroundColor:(id)arg2 waveformBackgroundColor:(id)arg3;
- (void)setScreenUpdatesDisabled:(BOOL)arg1;
- (void)_willAppearInRemoteViewController:(id)arg1;
- (BOOL)rc_shouldAutoDisableUpdatesWhenInBackground;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

