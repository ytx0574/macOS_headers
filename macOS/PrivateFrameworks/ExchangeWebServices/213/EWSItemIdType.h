//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ExchangeWebServices/EWSBaseItemIdType.h>

#import <ExchangeWebServices/NSCopying-Protocol.h>

@class NSString;

@interface EWSItemIdType : EWSBaseItemIdType <NSCopying>
{
    NSString *_Id;
    NSString *_ChangeKey;
}

+ (id)definition;
@property(copy) NSString *ChangeKey; // @synthesize ChangeKey=_ChangeKey;
@property(copy) NSString *Id; // @synthesize Id=_Id;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end

