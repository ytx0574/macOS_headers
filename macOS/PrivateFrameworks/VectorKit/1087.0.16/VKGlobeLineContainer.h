//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VectorKit/VKPolylineGroupOverlayObserver-Protocol.h>
#import <VectorKit/VKPolylineObserver-Protocol.h>

@class NSMutableArray, NSMutableSet, NSString, VKPolylineOverlay;
@protocol VKGlobeLineContainerDelegate, VKRouteMatchedAnnotationPresentation;

__attribute__((visibility("hidden")))
@interface VKGlobeLineContainer : NSObject <VKPolylineGroupOverlayObserver, VKPolylineObserver>
{
    BOOL _trafficEnabled;
    id <VKRouteMatchedAnnotationPresentation> _routeLineSplitAnnotation;
    id <VKGlobeLineContainerDelegate> _delegate;
    NSMutableArray *_overlays;
    struct GlobeView *_globeView;
    struct map<VKPolylineOverlay *, std::__1::weak_ptr<altitude::RouteLineData>, std::__1::less<VKPolylineOverlay *>, std::__1::allocator<std::__1::pair<VKPolylineOverlay *const, std::__1::weak_ptr<altitude::RouteLineData>>>> _polylinesToRoutes;
    VKPolylineOverlay *_selectedPolyline;
    NSMutableSet *_persistentOverlays;
    struct VKGlobeRouteSplit *_routeSplit;
    struct RouteStyle *_routeStyle;
}

@property(nonatomic) id <VKGlobeLineContainerDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)polyline:(id)arg1 selectedSections:(id)arg2 deselectedSections:(id)arg3;
- (void)setNeedsLayoutForPolyline:(id)arg1;
- (void)polylineGroup:(id)arg1 didSelectPolyline:(id)arg2;
- (void)polylineGroup:(id)arg1 didRemovePolyline:(id)arg2;
- (void)polylineGroup:(id)arg1 didAddPolyline:(id)arg2;
- (void)setStylesheet:(id)arg1;
- (void)updateWithContext:(id)arg1;
- (void)_recreateLinesIfNeeded;
- (void)_updateRouteSplit;
@property(retain, nonatomic) id <VKRouteMatchedAnnotationPresentation> routeLineSplitAnnotation;
- (void)setTrafficEnabled:(BOOL)arg1;
- (void)setSelected:(id)arg1 selected:(BOOL)arg2;
- (void)clearLineSelection;
- (void)removeLine:(id)arg1;
- (void)addLine:(id)arg1;
- (id)persistentOverlays;
- (id)overlays;
- (void)removePersistentOverlay:(id)arg1;
- (void)removeOverlay:(id)arg1;
- (void)addPersistentOverlay:(id)arg1;
- (void)addOverlay:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithGlobeView:(struct GlobeView *)arg1 stylesheet:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

