//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSApplicationDelegate-Protocol.h"
#import "NSTouchBarProvider-Protocol.h"

@class NSString, NSTouchBar, SPTClientMenuHandler, SPTFullScreenBackdrop;
@protocol NSObject;

@interface SPTClientAppDelegate : NSObject <NSApplicationDelegate, NSTouchBarProvider>
{
    BOOL appHasBeenCreated;
    BOOL shuttingDown;
    BOOL isFullscreen;
    SPTFullScreenBackdrop *fullscreen_toggle_button_;
    SPTClientMenuHandler *menu_handler_;
    id <NSObject> _appNapActivity;
}

@property(retain, nonatomic) id <NSObject> appNapActivity; // @synthesize appNapActivity=_appNapActivity;
@property(readonly, getter=isFullscreen) BOOL isFullscreen; // @synthesize isFullscreen;
@property(readonly) NSTouchBar *touchBar;
- (BOOL)applicationShouldHandleReopen:(id)arg1 hasVisibleWindows:(BOOL)arg2;
- (void)handleURLEvent:(id)arg1 withReplyEvent:(id)arg2;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)showMainWindow;
- (void)applicationWillFinishLaunching:(id)arg1;
- (void)handleOpenApplicationEvent:(id)arg1 replyEvent:(id)arg2;
- (unsigned long long)applicationShouldTerminate:(id)arg1;
- (void)tryToTerminateApplication:(id)arg1;
- (void)updateMenu;
- (void)setLoggedIn:(BOOL)arg1;
- (id)applicationDockMenu:(id)arg1;
@property(readonly) SPTClientMenuHandler *clientMenuHandler;
- (void)preferredScrollerStyleChanged:(id)arg1;
- (void)willExitFull:(id)arg1;
- (void)willEnterFull:(id)arg1;
- (void)dealloc;
- (void)applicationDidChangeOcclusionState:(id)arg1;
- (void)setupScrollerStyleListener;
- (void)setupFullscreenSupportForWindow:(id)arg1;
- (void)invalidateApplicationTouchbar;
- (void)createApp:(id)arg1;
- (void)createTitleTextFieldForWindow:(id)arg1;
- (BOOL)isShuttingDown;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

