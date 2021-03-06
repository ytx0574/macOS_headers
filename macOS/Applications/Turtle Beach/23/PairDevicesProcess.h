//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WorkflowNode-Protocol.h"

@class Device, NSString, NSThread, ProgressMessage;
@protocol WorkflowNodeDelegate;

@interface PairDevicesProcess : NSObject <WorkflowNode>
{
    id <WorkflowNodeDelegate> delegate;
    Device *device;
    Device *secondDevice;
    NSThread *processThread;
    unsigned long long retryCount;
    ProgressMessage *progressState;
}

- (void).cxx_destruct;
- (id)getTitle;
- (id)initWithDelegate:(id)arg1;
- (int)avrGetMacStateResponse:(id)arg1 withDevice:(id)arg2;
- (id)pairCommand:(id)arg1;
- (id)powerOnCommand:(id)arg1;
- (id)writeThenRead:(id)arg1 cmd:(id)arg2;
- (void)doPair:(id)arg1;
- (void)retry;
- (void)cancel;
- (void)start;
- (void)startWithContext:(id)arg1;
- (id)initWithDelegate:(id)arg1 withDevice:(id)arg2 withSecondDevice:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

