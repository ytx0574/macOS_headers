//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSDPrototypeChange-Protocol.h"

@class NSString;
@protocol TSSPropertySource;

@interface TSDNoChangePrototypeChange : NSObject <TSDPrototypeChange>
{
    id _prototype;
}

@property(readonly) id prototype; // @synthesize prototype=_prototype;
- (void).cxx_destruct;
- (BOOL)propertiesAreChanging:(id)arg1;
- (BOOL)propertyIsChanging:(int)arg1;
@property(readonly) id <TSSPropertySource> propertiesAfterChange;
@property(readonly) id <TSSPropertySource> propertiesBeforeChange;
@property(readonly) id replacement;
- (id)changedPropertySet;
@property(readonly) BOOL prototypeIsBeingDeleted;
@property(readonly) BOOL prototypeIsBeingReplaced;
@property(readonly) BOOL prototypeIsBeingModified;
@property(readonly, copy) NSString *description;
- (id)initNoChangePrototypeChangeForPrototype:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

