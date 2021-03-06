//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FREventCenterObserving-Protocol.h"

@class FCKeyValueStore, NSHashTable, NSMutableOrderedSet, NSOrderedSet, NSString;

@interface FRRecommendedTagEngagementMonitor : NSObject <FREventCenterObserving>
{
    NSHashTable *_observers;
    NSMutableOrderedSet *_mutableExposedTagIDs;
    FCKeyValueStore *_store;
}

@property(retain, nonatomic) FCKeyValueStore *store; // @synthesize store=_store;
@property(retain, nonatomic) NSMutableOrderedSet *mutableExposedTagIDs; // @synthesize mutableExposedTagIDs=_mutableExposedTagIDs;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
- (void).cxx_destruct;
- (void)_addExposureForTagID:(id)arg1 date:(id)arg2;
- (void)eventCenter:(id)arg1 eventDidFire:(id)arg2;
@property(readonly, copy, nonatomic) NSOrderedSet *exposureTagIDs;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)initWithPrivateDataContext:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

