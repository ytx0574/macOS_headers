//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLocalizedString, GEOPDHoursThreshold, NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBusinessHours : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _end;
    unsigned long long _start;
    GEOPDHoursThreshold *_hoursThreshold;
    int _hoursType;
    GEOLocalizedString *_message;
    GEOLocalizedString *_shortMessage;
    NSMutableArray *_weeklyHours;
    struct {
        unsigned int end:1;
        unsigned int start:1;
        unsigned int hoursType:1;
    } _has;
}

+ (Class)weeklyHoursType;
+ (id)businessHoursForPlaceData:(id)arg1;
@property(retain, nonatomic) GEOPDHoursThreshold *hoursThreshold; // @synthesize hoursThreshold=_hoursThreshold;
@property(retain, nonatomic) GEOLocalizedString *shortMessage; // @synthesize shortMessage=_shortMessage;
@property(retain, nonatomic) GEOLocalizedString *message; // @synthesize message=_message;
@property(nonatomic) unsigned long long end; // @synthesize end=_end;
@property(nonatomic) unsigned long long start; // @synthesize start=_start;
@property(retain, nonatomic) NSMutableArray *weeklyHours; // @synthesize weeklyHours=_weeklyHours;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasHoursThreshold;
- (int)StringAsHoursType:(id)arg1;
- (id)hoursTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasHoursType;
@property(nonatomic) int hoursType; // @synthesize hoursType=_hoursType;
@property(readonly, nonatomic) BOOL hasShortMessage;
@property(readonly, nonatomic) BOOL hasMessage;
@property(nonatomic) BOOL hasEnd;
@property(nonatomic) BOOL hasStart;
- (id)weeklyHoursAtIndex:(unsigned long long)arg1;
- (unsigned long long)weeklyHoursCount;
- (void)addWeeklyHours:(id)arg1;
- (void)clearWeeklyHours;

@end

