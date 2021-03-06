//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURLCacheInternal;

@interface NSURLCache : NSObject
{
    NSURLCacheInternal *_internal;
}

+ (void)_setVaryHeaderSupport;
+ (void)setSharedURLCache:(id)arg1;
+ (id)sharedURLCache;
- (BOOL)_isVaryHeaderSupportEnabled;
- (void)_updateVaryState:(id)arg1 forURL:(id)arg2;
- (id)_varyStateForURL:(id)arg1;
- (id)_diskCacheDefaultPath;
- (id)_cacheDirectory;
-     // Error parsing type: r^{_CFURLCache={__CFRuntimeBase=QAQ}{shared_ptr<__CFURLCache>=^{__CFURLCache}^{__shared_weak_count}}}16@0:8, name: _CFURLCache
- (void)dealloc;
@property(readonly) unsigned long long currentDiskUsage;
@property(readonly) unsigned long long currentMemoryUsage;
@property unsigned long long diskCapacity;
@property unsigned long long memoryCapacity;
- (void)removeCachedResponsesSinceDate:(id)arg1;
- (void)removeAllCachedResponses;
- (void)removeCachedResponseForRequest:(id)arg1;
- (void)storeCachedResponse:(id)arg1 forRequest:(id)arg2;
- (id)cachedResponseForRequest:(id)arg1;
- (void)flushWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithMemoryCapacity:(unsigned long long)arg1 diskCapacity:(unsigned long long)arg2 diskPath:(id)arg3;
-     // Error parsing type: @24@0:8^{_CFURLCache={__CFRuntimeBase=QAQ}{shared_ptr<__CFURLCache>=^{__CFURLCache}^{__shared_weak_count}}}16, name: _initWithExistingCFURLCache:
-     // Error parsing type: @24@0:8^{_CFURLCache={__CFRuntimeBase=QAQ}{shared_ptr<__CFURLCache>=^{__CFURLCache}^{__shared_weak_count}}}16, name: initWithExistingSharedCFURLCache:
- (id)_initVaryHeaderEnabledWithPath:(id)arg1;
- (id)init;
- (id)_initWithIdentifier:(id)arg1 memoryCapacity:(long long)arg2 diskCapacity:(long long)arg3 private:(_Bool)arg4;
- (long long)_nscfBridgeURLCacheCurrentDiskUsage;
- (long long)_nscfBridgeURLCacheCurrentMemoryUsage;
- (long long)_nscfBridgeURLCacheMemoryCapacity;
- (void)_nscfBridgeURLCacheRemoveAllCachedResponses;
- (void)_nscfBridgeURLCacheRemoveCachedResponseForRequest:(id)arg1;
- (void)_nscfBridgeURLCacheSetDiskCapacity:(long long)arg1;
- (void)_nscfBridgeURLCacheSetMemoryCapacity:(long long)arg1;
- (long long)_nscfBridgeURLCacheDiskCapacity;
-     // Error parsing type: v32@0:8^{_CFCachedURLResponse={__CFRuntimeBase=QAQ}^{__CFCachedURLResponse}}16^{_CFURLRequest=}24, name: _nscfBridgeURLCacheStoreCachedResponse:forRequest:
-     // Error parsing type: ^{_CFCachedURLResponse={__CFRuntimeBase=QAQ}^{__CFCachedURLResponse}}24@0:8^{_CFURLRequest=}16, name: _nscfBridgeURLCacheCopyResponseForRequest:
- (void)removeCachedResponseForDataTask:(id)arg1;
- (void)getCachedResponseForDataTask:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)storeCachedResponse:(id)arg1 forDataTask:(id)arg2;

@end

