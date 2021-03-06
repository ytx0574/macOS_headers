//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"

@class NSString, NSXPCConnection;

@interface IASUnifiedProgressManager : NSObject <NSXPCListenerDelegate>
{
    NSXPCConnection *_progressAppConnection;
}

+ (id)sharedManager;
@property(retain) NSXPCConnection *progressAppConnection; // @synthesize progressAppConnection=_progressAppConnection;
- (void)dealloc;
- (id)init;
- (void)writePhaseRangeToNVRAMForPhase:(id)arg1;
- (BOOL)currentlyShowingUI;
- (BOOL)currentlyHasProgressInfo;
- (float)currentProgress;
- (void)clear;
- (void)addPhaseNamed:(id)arg1 withProgress:(double)arg2 exitDelay:(int)arg3;
- (void)addPhaseNamed:(id)arg1 withProgress:(double)arg2;
- (BOOL)_isModernOS;
- (id)_progressAppProxy;
- (id)_progressApp;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

