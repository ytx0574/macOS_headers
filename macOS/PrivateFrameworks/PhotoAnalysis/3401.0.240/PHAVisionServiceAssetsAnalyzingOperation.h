//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSObject, PHAAnalysisWorkerJob, PHAVisionServiceWorker;
@protocol OS_dispatch_semaphore, PHAVisionServiceAssetsAnalyzingOperationDelegate;

@interface PHAVisionServiceAssetsAnalyzingOperation : NSOperation
{
    PHAVisionServiceWorker *_visionServiceWorker;
    PHAAnalysisWorkerJob *_job;
    id <PHAVisionServiceAssetsAnalyzingOperationDelegate> _delegate;
    NSObject<OS_dispatch_semaphore> *_executionCompletionSemaphore;
    int _state;
}

+ (id)operationForVisionServiceWorker:(id)arg1 job:(id)arg2;
- (void).cxx_destruct;
- (void)main;
- (void)cancelAndWaitForCompletion;
- (id)job;
- (id)visionServiceWorker;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)initWithVisionServiceWorker:(id)arg1 job:(id)arg2;

@end

