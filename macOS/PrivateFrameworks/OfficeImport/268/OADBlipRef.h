//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

@class NSMutableArray, NSString, OADBlip;

@interface OADBlipRef : NSObject <NSCopying>
{
    int mIndex;
    NSString *mName;
    NSMutableArray *mEffects;
    OADBlip *mBlip;
}

+ (id)inflatedExtensionForGzippedExtension:(id)arg1;
+ (int)blipTypeForImageData:(id)arg1;
+ (int)blipTypeForContentType:(id)arg1;
+ (int)blipTypeForExtension:(id)arg1;
+ (id)blipRefWithIndex:(int)arg1 name:(id)arg2 blip:(id)arg3;
+ (id)blipRefWithIndex:(int)arg1 name:(id)arg2 blip:(id)arg3 effects:(id)arg4;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)effects;
- (BOOL)isNull;
- (void)removeEffectAtIndex:(unsigned long long)arg1;
- (id)effectAtIndex:(unsigned long long)arg1;
- (unsigned long long)effectCount;
- (void)setEffects:(id)arg1;
- (void)addEffect:(id)arg1;
- (void)setBlip:(id)arg1;
- (id)blip;
- (void)setName:(id)arg1;
- (id)name;
- (void)setIndex:(int)arg1;
- (int)index;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIndex:(int)arg1 name:(id)arg2 blip:(id)arg3;
- (id)initWithIndex:(int)arg1 name:(id)arg2 blip:(id)arg3 effects:(id)arg4;
- (id)init;

@end

