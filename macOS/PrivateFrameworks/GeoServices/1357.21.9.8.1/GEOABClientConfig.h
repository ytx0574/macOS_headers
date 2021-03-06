//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBUnknownFields;

@interface GEOABClientConfig : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_assignedAbBranchId;
    NSMutableArray *_configKeyValues;
    NSMutableArray *_debugExperimentBranchs;
}

+ (Class)debugExperimentBranchType;
+ (Class)configKeyValueType;
@property(retain, nonatomic) NSMutableArray *debugExperimentBranchs; // @synthesize debugExperimentBranchs=_debugExperimentBranchs;
@property(retain, nonatomic) NSString *assignedAbBranchId; // @synthesize assignedAbBranchId=_assignedAbBranchId;
@property(retain, nonatomic) NSMutableArray *configKeyValues; // @synthesize configKeyValues=_configKeyValues;
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
- (id)debugExperimentBranchAtIndex:(unsigned long long)arg1;
- (unsigned long long)debugExperimentBranchsCount;
- (void)addDebugExperimentBranch:(id)arg1;
- (void)clearDebugExperimentBranchs;
@property(readonly, nonatomic) BOOL hasAssignedAbBranchId;
- (id)configKeyValueAtIndex:(unsigned long long)arg1;
- (unsigned long long)configKeyValuesCount;
- (void)addConfigKeyValue:(id)arg1;
- (void)clearConfigKeyValues;

@end

