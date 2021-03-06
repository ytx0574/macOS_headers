//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AVTouchBarCaptureInputSourceItem, NSArray, NSNumber;

@protocol AVTouchBarRecordingControlsControlling <NSObject>
- (void)stopRecording;
- (void)resumeRecording;
- (void)pauseRecording;
- (void)startRecording;
@property(nonatomic, readonly) BOOL canStopRecording;
@property(nonatomic, readonly) BOOL canResumeRecording;
@property(nonatomic, readonly) BOOL canPauseRecording;
@property(nonatomic, readonly) BOOL canStartRecording;
- (BOOL)isPaused;
- (BOOL)isRecording;
@property(nonatomic, readonly) NSNumber *recordedFileSize;
@property(nonatomic, readonly) double recordedTime;

@optional
- (void)selectTouchBarInputSourceItem:(AVTouchBarCaptureInputSourceItem *)arg1;
@property(nonatomic, readonly) AVTouchBarCaptureInputSourceItem *selectedScreenTouchBarInputSourceItem;
@property(nonatomic, readonly) NSArray *screenTouchBarInputSourceItems;
@property(nonatomic, readonly) AVTouchBarCaptureInputSourceItem *selectedAudioTouchBarInputSourceItem;
@property(nonatomic, readonly) NSArray *audioTouchBarInputSourceItems;
@property(nonatomic, readonly) AVTouchBarCaptureInputSourceItem *selectedVideoTouchBarInputSourceItem;
@property(nonatomic, readonly) NSArray *videoTouchBarInputSourceItems;

// Remaining properties
@property(nonatomic, readonly) BOOL paused;
@property(nonatomic, readonly) BOOL recording;
@end

