//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/NSSecureCoding-Protocol.h>

@interface HMCameraAudioCodec : NSObject <NSSecureCoding>
{
    unsigned long long _audioCodec;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)isValid:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long audioCodec; // @synthesize audioCodec=_audioCodec;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAudioCodecType:(unsigned long long)arg1;

@end

