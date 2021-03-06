//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface PKPaymentDeviceConfigurationData : NSObject <NSSecureCoding>
{
    BOOL _devSigned;
    NSNumber *_primaryJSBLSequenceCounter;
    NSString *_secureElementIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL devSigned; // @synthesize devSigned=_devSigned;
@property(copy, nonatomic) NSString *secureElementIdentifier; // @synthesize secureElementIdentifier=_secureElementIdentifier;
@property(copy, nonatomic) NSNumber *primaryJSBLSequenceCounter; // @synthesize primaryJSBLSequenceCounter=_primaryJSBLSequenceCounter;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

