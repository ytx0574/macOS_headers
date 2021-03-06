//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

@class IP_DBKeyMgr;

@interface IPRollInfoCache : NSObject
{
    struct map<unsigned long, RollInfoCacheRecord, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, RollInfoCacheRecord>>> *_infoMap;
    struct map<unsigned long, RollCachePhotoEntry, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, RollCachePhotoEntry>>> *_keyMap;
    IP_DBKeyMgr *_emptyEventKeys;
}

+ (id)cacheForPhotoList:(struct IPPhotoList *)arg1 emptyEvents:(struct IPSelectionList *)arg2;
+ (id)cacheForPhotoList:(struct IPPhotoList *)arg1;
- (void)restoreForPhotoList:(struct IPPhotoList *)arg1 movePhotos:(BOOL)arg2;
- (void)_cacheForPhotoList:(struct IPPhotoList *)arg1 emptyEvents:(struct IPSelectionList *)arg2;
- (void)dealloc;
- (id)init;
- (void)_clearCaches;

@end

