//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVWeakReference, AVWeakReferencingDelegateStorage, NSArray, NSString;
@protocol AVPlayerItemLegibleOutputDependencyFactory;

@interface AVPlayerItemLegibleOutputInternal : NSObject
{
    id <AVPlayerItemLegibleOutputDependencyFactory> dependencyFactory;
    NSArray *nativeRepresentationSubtypes;
    AVWeakReferencingDelegateStorage *delegateStorage;
    struct dispatch_queue_s *ivarAccessQueue;
    AVWeakReference *weakReferenceToHost;
    BOOL suppressesPlayerRendering;
    double advanceInterval;
    NSString *textStylingResolution;
}

@end

