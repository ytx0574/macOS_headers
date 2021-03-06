//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSAnimationDelegate-Protocol.h>

@class NSMutableArray, NSPointerArray, NSString, _NSFullScreenBackdropController, _NSFullScreenContentController, _NSFullScreenCreateTileDropTargetController, _NSFullScreenModalStackController, _NSFullScreenSpaceMenuRevealAnimation, _NSFullScreenTileDividerWindow, _NSFullScreenTileOverlayWindow, _NSFullScreenTileResizeCrossfadeOverlayWindow;

__attribute__((visibility("hidden")))
@interface _NSFullScreenSpace : NSObject <NSAnimationDelegate>
{
    BOOL _modelInvalidated;
    unsigned long long _tileSpaceID;
    unsigned long long _parentSpaceID;
    unsigned long long _wallSpaceID;
    struct CGRect _tileRect;
    double _tileDividerSize;
    _NSFullScreenContentController *_contentController;
    _NSFullScreenBackdropController *_backdropController;
    _NSFullScreenModalStackController *_modalStackController;
    _NSFullScreenCreateTileDropTargetController *_createTileDropTargetController;
    NSPointerArray *_activeTransitions;
    long long _liveResizeCount;
    unsigned long long _dividerDirections;
    _NSFullScreenTileDividerWindow *_westDividerWindow;
    _NSFullScreenTileDividerWindow *_eastDividerWindow;
    BOOL _isDoingExternalCloseAnimation;
    unsigned int _exitReplacementWindowID;
    BOOL _hasSiblings;
    double _tileCreationTime;
    BOOL _messageTracedFirstUserResize;
    BOOL _suppressFetchingNewTileSize;
    _NSFullScreenTileResizeCrossfadeOverlayWindow *_resizeCrossfadeOverlay;
    double _resizeCrossfadeDuration;
    long long _tileOverlayShowCount;
    BOOL _tileHadLimitedClipping;
    _NSFullScreenTileOverlayWindow *_tileOverlayWindow;
    _NSFullScreenTileOverlayWindow *_siblingTileOverlayWindow;
    BOOL _siblingOverlayNeedsBeginPresentation;
    NSMutableArray *_animatingOverlayWindows;
    _NSFullScreenSpaceMenuRevealAnimation *_menuRevealAnimation;
    double _bottomReservedSpace;
    double _leftReservedSpace;
    double _rightReservedSpace;
}

+ (struct CGRect)tileRectForSpaceWithID:(unsigned long long)arg1;
+ (id)spaceWithContentWindowID:(unsigned int)arg1;
+ (BOOL)hasTransitionForWindowID:(unsigned int)arg1;
+ (BOOL)hasSpaceEnteringOrExitingFullScreen;
+ (id)fullScreenSpaceEnteringFullScreen;
+ (id)visibleFullScreenSpaceOnScreen:(id)arg1;
+ (id)visibleFullScreenSpaces;
+ (id)fullScreenSpaces;
+ (BOOL)hasVisibleFullScreenSpaces;
+ (void)_unregisterCGSNotificationsForAllSpaces;
+ (void)_registerCGSNotificationsIfNeededForSpace:(id)arg1;
+ (id)placeholderFullScreenSpace;
+ (id)fullScreenSpaceWithTileID:(unsigned long long)arg1 createIfNeeded:(BOOL)arg2;
+ (id)fullScreenSpaceWithTileID:(unsigned long long)arg1;
+ (id)_placeholderFullScreenInstances;
+ (id)_fullScreenMapTable;
+ (void)interruptTransitions;
@property(nonatomic) double rightReservedSpace; // @synthesize rightReservedSpace=_rightReservedSpace;
@property(nonatomic) double leftReservedSpace; // @synthesize leftReservedSpace=_leftReservedSpace;
@property(nonatomic) double bottomReservedSpace; // @synthesize bottomReservedSpace=_bottomReservedSpace;
@property(readonly, nonatomic) unsigned int exitReplacementWindowID; // @synthesize exitReplacementWindowID=_exitReplacementWindowID;
@property(readonly, nonatomic) _NSFullScreenCreateTileDropTargetController *createTileDropTargetController; // @synthesize createTileDropTargetController=_createTileDropTargetController;
@property(readonly, nonatomic) _NSFullScreenModalStackController *modalStackController; // @synthesize modalStackController=_modalStackController;
@property(readonly, nonatomic) _NSFullScreenBackdropController *backdropController; // @synthesize backdropController=_backdropController;
@property(nonatomic) _NSFullScreenContentController *contentController; // @synthesize contentController=_contentController;
@property(readonly, nonatomic) unsigned long long tileSpaceID; // @synthesize tileSpaceID=_tileSpaceID;
- (void)_removeEastTileDividerWindow;
- (void)_removeWestTileDividerWindow;
- (void)_removeTileDividerWindows;
- (void)_updateTileDividerWindows;
- (void)replaceContentWithSnapshotForClose;
- (BOOL)isPerformingExternalCloseAnimation;
- (void)beginSeparateExternalCloseAnimation;
- (id)backgroundWindowIDs;
- (id)windowIDsInTile;
- (BOOL)isLeftTile;
- (id)siblingFullScreenSpaceFromThisApp;
- (BOOL)hasSiblingFromThisApp;
- (void)updateTileShapeAndReshapeContentsUsingTileFrame:(struct CGRect)arg1 ackServer:(BOOL)arg2;
- (void)updateTileShapeAndReshapeContentsUsingTileFrame:(struct CGRect)arg1;
- (void)_updateTileShapeAndReshapeContentsWithAckServer:(BOOL)arg1;
- (void)updateTileShapeAndReshapeContents;
- (void)updateTileShapeAndReshapeContentsWithoutNotifyingServer;
- (struct CGRect)tileContentRect;
- (struct CGRect)tileToolbarContentRect;
- (struct CGSize)availableWallSpaceSize;
- (BOOL)tileFillsScreen;
- (struct CGRect)parentSpaceCGRect;
- (struct CGRect)wallSpaceRect;
- (struct CGRect)tileRect;
- (void)updateTileShape;
- (void)_cacheTileRect:(struct CGRect)arg1;
- (unsigned long long)wallSpaceID;
- (unsigned long long)parentSpaceID;
- (BOOL)modelBackingIsValid;
- (void)invalidateModelBacking;
- (id)screen;
- (void)displayChanged;
- (void)parentSpaceRelocated;
- (BOOL)suppressImplicitFullScreenForOtherWindows;
- (BOOL)_spaceConsideredVisible;
- (void)dealloc;
- (void)resolveTileSpaceID:(unsigned long long)arg1;
- (id)initWithTileSpaceID:(unsigned long long)arg1;
- (id)init;
- (void)interruptTransitions;
- (void)removeTransition:(id)arg1;
- (void)startTransition:(id)arg1;
- (BOOL)isExitingFullScreen;
- (BOOL)isEnteringFullScreen;
- (BOOL)isInFullScreen;
- (BOOL)isTransitioning;
- (BOOL)inLiveResize;
- (void)endLiveResize;
- (void)startLiveResize;
- (id)cursorForResizeDirection:(long long)arg1;
- (id)currentDividerResizeDirections;
- (BOOL)performDividerDragWithEvent:(id)arg1 forResizeDirection:(long long)arg2;
- (id)tileOverlayWindow;
- (void)updateOverlayWithBlur:(BOOL)arg1;
- (void)hideOverlayWindow;
- (void)showOverlayWindowFromFrame:(struct CGRect)arg1 blurContent:(BOOL)arg2;
- (BOOL)showingOverlayWindowFrame;
- (void)cancelSiblingOverlayAnimations;
- (void)removeSiblingOverlayWindow;
- (void)updateSiblingOverlayWindow;
- (void)beginSiblingOverlayPresentationIfNeeded;
- (void)setupSiblingOverlayWindowImmediately:(BOOL)arg1 blurContent:(BOOL)arg2;
- (BOOL)showingSiblingTileOverlayWindow;
- (void)performResizeCrossfadeIfNeeded;
- (void)prepareResizeCrossfadeOverlayWithDuration:(double)arg1 resize:(BOOL)arg2;
- (void)_cancelResizeCrosfadeAnimation;
- (void)suppressFetchingNewTileSize;
- (id)perfTestResizeWindow;
- (void)_menuBarRevealUpdated:(float)arg1;
- (void)_animateMenuBarTo:(float)arg1 startingAt:(double)arg2 duration:(double)arg3;
- (void)_cancelMenuRevealAnimationIfNeeded;
- (float)animation:(id)arg1 valueForProgress:(float)arg2;
- (void)animationDidEnd:(id)arg1;
- (struct CGImage *)captureSnapshotIncludingMenuBar:(BOOL)arg1 contentRect:(struct CGRect *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

