//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSMutableArray;
@protocol AVSlowMotionSliderDelegate;

@interface AVSlowMotionSlider : NSView
{
    double _minValue;
    double _maxValue;
    id <AVSlowMotionSliderDelegate> _delegate;
    struct {
        unsigned int slowMotionSliderMouseDownEventTrackingBegan:1;
        unsigned int slowMotionSlider_tracksMouseDownEventWithCurrentValue:1;
        unsigned int slowMotionSliderMouseDownEventTrackingEnded:1;
    } _delegateRespondsTo;
    NSView *_trackView;
    NSView *_minHandleView;
    NSView *_maxHandleView;
    unsigned int _needsUpdateTrackAndHandles:1;
    NSMutableArray *_layoutConstraints;
}

+ (BOOL)automaticallyNotifiesObserversOfMaxValue;
+ (BOOL)automaticallyNotifiesObserversOfMinValue;
- (void).cxx_destruct;
- (void)_updateTrackAndHandles;
- (void)_updateTrackAndHandlesIfNeeded;
- (void)_setNeedsUpdateTrackAndHandles;
- (void)mouseDown:(id)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (id)hitTest:(struct CGPoint)arg1;
- (struct CGSize)intrinsicContentSize;
- (BOOL)allowsVibrancy;
- (void)setFrameSize:(struct CGSize)arg1;
@property __weak id <AVSlowMotionSliderDelegate> delegate;
@property double maxValue;
@property double minValue;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

