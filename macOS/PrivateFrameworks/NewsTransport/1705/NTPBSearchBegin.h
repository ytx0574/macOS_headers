//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBSearchBegin : PBCodable <NSCopying>
{
    NSString *_campaignId;
    NSString *_campaignType;
    NSString *_creativeId;
    int _searchLocation;
    struct {
        unsigned int searchLocation:1;
    } _has;
}

@property(retain, nonatomic) NSString *creativeId; // @synthesize creativeId=_creativeId;
@property(retain, nonatomic) NSString *campaignType; // @synthesize campaignType=_campaignType;
@property(retain, nonatomic) NSString *campaignId; // @synthesize campaignId=_campaignId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasCreativeId;
@property(readonly, nonatomic) BOOL hasCampaignType;
@property(readonly, nonatomic) BOOL hasCampaignId;
- (int)StringAsSearchLocation:(id)arg1;
- (id)searchLocationAsString:(int)arg1;
@property(nonatomic) BOOL hasSearchLocation;
@property(nonatomic) int searchLocation; // @synthesize searchLocation=_searchLocation;

@end

