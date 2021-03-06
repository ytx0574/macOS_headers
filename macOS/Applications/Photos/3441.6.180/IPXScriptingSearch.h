//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSScriptCommand.h>

#import "RDLibrarySearchDelegate-Protocol.h"

@class NSMutableArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface IPXScriptingSearch : NSScriptCommand <RDLibrarySearchDelegate>
{
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSMutableArray *_results;
}

@property(retain, nonatomic) NSMutableArray *results; // @synthesize results=_results;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
- (void).cxx_destruct;
- (void)librarySearchDidComplete:(id)arg1;
- (void)librarySearch:(id)arg1 hasNewSearchResults:(id)arg2;
- (id)_performSearchForString:(id)arg1 inDatabase:(id)arg2;
- (id)_mediaItemsForVersions:(id)arg1;
- (id)performDefaultImplementation;

@end

