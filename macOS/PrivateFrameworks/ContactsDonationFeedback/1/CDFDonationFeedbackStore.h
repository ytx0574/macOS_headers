//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableSet, NSNumber, NSUbiquitousKeyValueStore;

@interface CDFDonationFeedbackStore : NSObject
{
    NSUbiquitousKeyValueStore *_kvs;
    NSMutableSet *_hashes;
    NSNumber *_resetGeneration;
    NSNumber *_resetTimestamp;
    NSData *_deviceSalt;
    NSData *_userSalt;
}

- (void).cxx_destruct;
- (void)_hashStrings:(id)arg1 salt:(id)arg2 digest:(char *)arg3;
- (id)_sha256BytesForStrings:(id)arg1 salt:(id)arg2;
- (id)_randomDataOfLength:(unsigned long long)arg1;
- (id)_keychainDataForKey:(id)arg1 size:(unsigned long long)arg2;
- (void)synchronize;
- (void)_saveResetInfo;
- (id)_loadResetInfo;
- (void)_saveHashes:(id)arg1 key:(id)arg2;
- (id)_loadHashesForKey:(id)arg1;
- (id)_loadSalts;
- (void)_handleHashesChangedNotification:(id)arg1;
- (id)_hashesForDonation:(id)arg1 contactIdentifier:(id)arg2;
- (void)_confirmOrRejectDonatedValues:(id)arg1 contactIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)reset;
- (BOOL)donatedValueHasBeenConfirmedOrRejected:(id)arg1 contactIdentifier:(id)arg2;
- (void)rejectDonatedValues:(id)arg1 contactIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)confirmDonatedValues:(id)arg1 contactIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)description;
- (id)init;

@end

