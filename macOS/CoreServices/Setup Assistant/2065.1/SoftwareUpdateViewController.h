//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "MacBuddyViewController.h"

#import "SUSoftwareUpdateControllerDelegate-Protocol.h"

@class IASTimeRemainingFormatter, NSAlert, NSButton, NSDictionary, NSProgressIndicator, NSString, NSTextField, NSTimer, NSView, SUSoftwareUpdateController;

@interface SoftwareUpdateViewController : MacBuddyViewController <SUSoftwareUpdateControllerDelegate>
{
    BOOL _progressIsIndeterminate;
    BOOL _handledRadios;
    BOOL _isMandatoryUpdate;
    float _progressValue;
    float _timeRemaining;
    NSView *_updateProgressView;
    NSView *_updateRadioView;
    NSView *_updateRestartView;
    NSView *_mandatoryUpdateLandingView;
    NSView *_viewHolder;
    NSString *_progressState;
    NSString *_progressMessage;
    NSButton *_installNowRadioButton;
    NSProgressIndicator *_progressBar;
    NSProgressIndicator *_restartSpinner;
    NSButton *_updateLaterButton;
    NSTextField *_mandatoryUpdateTextField;
    NSTextField *_autoUpdateTextField;
    long long _selectedInstallTimeframe;
    IASTimeRemainingFormatter *_timeFormatter;
    SUSoftwareUpdateController *_updateController;
    NSString *_mandatoryUpdateProductKey;
    long long _autoInstallTimeRemaining;
    NSTimer *_autoInstallTimer;
    NSDictionary *_suErrorUserInfo;
    NSAlert *_suErrorAlert;
}

@property(retain) NSAlert *suErrorAlert; // @synthesize suErrorAlert=_suErrorAlert;
@property(retain) NSDictionary *suErrorUserInfo; // @synthesize suErrorUserInfo=_suErrorUserInfo;
@property(retain) NSTimer *autoInstallTimer; // @synthesize autoInstallTimer=_autoInstallTimer;
@property long long autoInstallTimeRemaining; // @synthesize autoInstallTimeRemaining=_autoInstallTimeRemaining;
@property(retain) NSString *mandatoryUpdateProductKey; // @synthesize mandatoryUpdateProductKey=_mandatoryUpdateProductKey;
@property BOOL isMandatoryUpdate; // @synthesize isMandatoryUpdate=_isMandatoryUpdate;
@property BOOL handledRadios; // @synthesize handledRadios=_handledRadios;
@property(retain) SUSoftwareUpdateController *updateController; // @synthesize updateController=_updateController;
@property(retain) IASTimeRemainingFormatter *timeFormatter; // @synthesize timeFormatter=_timeFormatter;
@property long long selectedInstallTimeframe; // @synthesize selectedInstallTimeframe=_selectedInstallTimeframe;
@property float timeRemaining; // @synthesize timeRemaining=_timeRemaining;
@property __weak NSTextField *autoUpdateTextField; // @synthesize autoUpdateTextField=_autoUpdateTextField;
@property __weak NSTextField *mandatoryUpdateTextField; // @synthesize mandatoryUpdateTextField=_mandatoryUpdateTextField;
@property __weak NSButton *updateLaterButton; // @synthesize updateLaterButton=_updateLaterButton;
@property __weak NSProgressIndicator *restartSpinner; // @synthesize restartSpinner=_restartSpinner;
@property __weak NSProgressIndicator *progressBar; // @synthesize progressBar=_progressBar;
@property __weak NSButton *installNowRadioButton; // @synthesize installNowRadioButton=_installNowRadioButton;
@property BOOL progressIsIndeterminate; // @synthesize progressIsIndeterminate=_progressIsIndeterminate;
@property float progressValue; // @synthesize progressValue=_progressValue;
@property(retain) NSString *progressMessage; // @synthesize progressMessage=_progressMessage;
@property(retain) NSString *progressState; // @synthesize progressState=_progressState;
@property __weak NSView *viewHolder; // @synthesize viewHolder=_viewHolder;
@property __weak NSView *mandatoryUpdateLandingView; // @synthesize mandatoryUpdateLandingView=_mandatoryUpdateLandingView;
@property __weak NSView *updateRestartView; // @synthesize updateRestartView=_updateRestartView;
@property __weak NSView *updateRadioView; // @synthesize updateRadioView=_updateRadioView;
@property __weak NSView *updateProgressView; // @synthesize updateProgressView=_updateProgressView;
- (void).cxx_destruct;
- (BOOL)batteryPowerStatusIsPluggedIn;
- (void)_didGetConnectedToACPower;
- (void)stopMonitoringPowerStatus;
- (void)monitorPowerStatus;
- (id)downloadStatusStringForSU:(id)arg1;
- (void)softwareUpdate:(id)arg1 didChangeProgress:(double)arg2 currentState:(long long)arg3 estimatedTimeForState:(double)arg4;
- (BOOL)softwareUpdate:(id)arg1 shouldContinueWithNonProductionCatalogAtURL:(id)arg2;
- (void)softwareUpdateWasCancelled:(id)arg1;
- (void)softwareUpdate:(id)arg1 didFailWithError:(id)arg2;
- (void)softwareUpdateDidFinish:(id)arg1;
- (void)softwareUpdateDidBegin:(id)arg1;
- (void)presentFailureAlertForError:(id)arg1;
- (id)autoInstallAlertMessageForTimeRemaining:(long long)arg1;
- (void)_updateProgress:(double)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setupCookiesForRestart;
- (void)restartAfterSoftwareUpdate;
- (void)scheduleSoftwareUpdateForTonight;
- (void)startSoftwareUpdateNow;
- (void)alternatePaneWithHandler:(CDUnknownBlockType)arg1;
- (void)forwardPaneWithHandler:(CDUnknownBlockType)arg1;
- (void)radioPressed:(id)arg1;
- (id)alternateViewIdentifier;
- (id)nextViewIdentifier;
- (void)willBecomeInvisible;
- (void)didBecomeVisible;
- (void)willBecomeVisible;
- (void)awakeFromNib;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

