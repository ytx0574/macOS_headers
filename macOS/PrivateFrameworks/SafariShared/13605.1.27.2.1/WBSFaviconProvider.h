//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSSiteMetadataProvider-Protocol.h>

@class NSCache, NSCalendar, NSMutableDictionary, NSString, NSURL, WBSFaviconProviderPersistenceController;
@protocol OS_dispatch_queue, WBSSiteMetadataProviderDelegate;

@interface WBSFaviconProvider : NSObject <WBSSiteMetadataProvider>
{
    NSMutableDictionary *_hostsToRequestsMap;
    NSCache *_responseCache;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_internalSavingQueue;
    NSMutableDictionary *_urlsToFaviconRecordsSavedDuringMigration;
    WBSFaviconProviderPersistenceController *_persistenceController;
    NSCalendar *_calendar;
    double _expirationInterval;
    long long _providerState;
    NSMutableDictionary *_sizeToDefaultFaviconDictionary;
    unsigned long long _privateDataRetentionCount;
    id <WBSSiteMetadataProviderDelegate> _providerDelegate;
    NSURL *_baseURL;
    NSString *_persistenceName;
}

@property(readonly, copy, nonatomic) NSString *persistenceName; // @synthesize persistenceName=_persistenceName;
@property(readonly, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(nonatomic) __weak id <WBSSiteMetadataProviderDelegate> providerDelegate; // @synthesize providerDelegate=_providerDelegate;
- (void).cxx_destruct;
- (void)_linkPageURL:(id)arg1 toIconWithInfo:(id)arg2 isPrivate:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_atomicallyLinkPageURLs:(id)arg1 toIconWithInfo:(id)arg2 isPrivate:(BOOL)arg3;
- (void)_getIconForRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_prepareAndSendResponseForRequests:(id)arg1 forceDidReceiveNewData:(BOOL)arg2;
- (void)_updateOutstandingRequestsForPageURL:(id)arg1 forceDidReceiveNewData:(BOOL)arg2;
- (id)_requestsForHost:(id)arg1;
- (void)_registerRequest:(id)arg1;
- (id)_hostFromRequest:(id)arg1;
- (void)_setProviderState:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_responseCacheKeyForRequest:(id)arg1;
- (id)_responseDictionaryKeyForRequest:(id)arg1;
- (void)_removeCachedResponsesForRequest:(id)arg1;
- (void)_removeCachedResponsesForURL:(id)arg1;
- (void)_addCachedResponse:(id)arg1 forRequest:(id)arg2;
- (id)_cachedResponseForRequest:(id)arg1;
- (void)savePendingChangesBeforeTermination;
- (void)emptyCaches;
- (void)stopWatchingUpdatesForRequest:(id)arg1;
- (id)responseForRequest:(id)arg1 willProvideUpdates:(char *)arg2;
- (void)prepareResponseForRequest:(id)arg1 allowDelayedResponse:(BOOL)arg2;
- (BOOL)canHandleRequest:(id)arg1;
- (void)cleanUpAfterPersistenceSetUpDidSucceed:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)imageForRequestDuringPersistenceSetUp:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setUpPersistenceAtPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)releasePrivateData;
- (void)retainPrivateData;
- (void)flushPrivateDataFromMemoryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeIconForURLString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeAllIconsForURLStringsNotIn:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_saveImageData:(id)arg1 iconURL:(id)arg2 pageURL:(id)arg3 originalPageURL:(id)arg4 isPrivate:(BOOL)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)_confirmImageDataShouldBeSaved:(id)arg1 pageURL:(id)arg2 includingPrivateData:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_atomicallySaveImageData:(id)arg1 iconURL:(id)arg2 pageURL:(id)arg3 originalPageURL:(id)arg4 isPrivate:(BOOL)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)saveFaviconImageData:(id)arg1 iconURL:(id)arg2 pageURL:(id)arg3 originalPageURL:(id)arg4 isPrivate:(BOOL)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (BOOL)_isIconDateExpired:(id)arg1;
- (void)shouldIconDataBeSavedForIconWithPageURL:(id)arg1 originalPageURL:(id)arg2 iconURL:(id)arg3 size:(struct CGSize)arg4 isPrivate:(BOOL)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)setUpWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_defaultFaviconForSize:(struct CGSize)arg1;
- (void)setDefaultFavicon:(id)arg1 forSize:(struct CGSize)arg2;
- (long long)providerState;
- (id)persistenceController;
- (void)dealloc;
- (id)initWithPersistenceBaseURL:(id)arg1 persistenceName:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

