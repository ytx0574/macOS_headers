//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "NSDraggingSource-Protocol.h"

@class NSMutableArray, NSString, NSTrackingArea, TSDGradient;

@interface TMAEditableGradientView : NSView <NSDraggingSource>
{
    struct CGPoint _dragStartingPoint;
    unsigned long long _dragIndex;
    unsigned long long _activeStop;
    unsigned long long _selectedStop;
    unsigned long long _stopCount;
    BOOL _stopAddAllowed;
    long long _dragType;
    BOOL _deletingStop;
    BOOL _creatingStop;
    BOOL _stopMoved;
    unsigned long long _activeMidpoint;
    unsigned long long _selectedMidpoint;
    NSMutableArray *_midpointViews;
    NSMutableArray *_stopViews;
    long long _stopEditTag;
    long long _midpointEditTag;
    NSTrackingArea *_trackingArea;
    TSDGradient *_gradient;
    NSView *_colorPanelTarget;
    struct CGRect _gradientFrame;
    struct CGRect _stopEditingFrame;
    struct CGRect _midpointEditingFrame;
}

@property(readonly, nonatomic) __weak NSView *colorPanelTarget; // @synthesize colorPanelTarget=_colorPanelTarget;
@property(readonly, nonatomic) struct CGRect midpointEditingFrame; // @synthesize midpointEditingFrame=_midpointEditingFrame;
@property(readonly, nonatomic) struct CGRect stopEditingFrame; // @synthesize stopEditingFrame=_stopEditingFrame;
@property(readonly, nonatomic) struct CGRect gradientFrame; // @synthesize gradientFrame=_gradientFrame;
@property(copy, nonatomic) TSDGradient *gradient; // @synthesize gradient=_gradient;
- (void).cxx_destruct;
- (double)i_midpointLocationAtIndex:(unsigned long long)arg1;
- (void)i_moveMidpointAtIndex:(unsigned long long)arg1 toFraction:(double)arg2;
- (void)i_setInflectionOfStopAtIndex:(unsigned long long)arg1 toFraction:(double)arg2;
- (void)i_setColorOfStopAtIndex:(unsigned long long)arg1 toColor:(id)arg2;
- (void)i_removeStopAtIndex:(unsigned long long)arg1;
- (void)i_moveStopAtIndex:(unsigned long long)arg1 toFraction:(double)arg2;
- (void)p_addStopAtFraction:(double)arg1 withColor:(id)arg2;
- (void)p_addStopAtFraction:(double)arg1;
- (void)p_updateGradient:(id)arg1;
- (id)p_mutableCopiedGradient;
- (double)p_inflectionAtStop:(unsigned long long)arg1 atFraction:(double)arg2;
- (double)p_midpointFractionAtStop:(unsigned long long)arg1;
- (struct CGPoint)p_originOfFrame:(struct CGRect)arg1 atFraction:(double)arg2 atHeight:(double)arg3;
- (void)p_updateGradientSubviews;
- (void)p_subdivideFrame;
- (BOOL)p_deletePointValid:(struct CGPoint)arg1;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)draggingSession:(id)arg1 movedToPoint:(struct CGPoint)arg2;
- (BOOL)performDragOperation:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)setUpDraggedTypes;
- (id)dragTypes;
- (double)p_adjustFractionToAlignWithImageCenter:(double)arg1 center:(double)arg2;
- (void)p_beginDraggingSessionToDeleteWithDragItems:(id)arg1 event:(id)arg2 atStartingPoint:(struct CGPoint)arg3;
- (void)mouseDown:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)updateTrackingAreas;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)p_fractionAtGradientX:(double)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setNeedsDisplay:(BOOL)arg1;
- (void)setStopColor:(id)arg1;
- (BOOL)isDeletingStop;
- (BOOL)isPossibleToDeleteStop;
- (BOOL)isFlipped;
- (void)setFrame:(struct CGRect)arg1;
- (void)setSelectedMidpoint:(unsigned long long)arg1;
- (void)setSelectedStop:(unsigned long long)arg1;
- (void)reverseSelectedStopAndMidpoint;
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

