//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GSSPStylePropertyChangeSet.h"

#import "GSSPAutoDecodable-Protocol.h"

@class TSCHSpecChart3dVector, TSSSpecBool, TSSSpecDouble, TSSSpecInteger, TSSSpecString;

@interface GSSPChartNonStylePropertyChangeSet : GSSPStylePropertyChangeSet <GSSPAutoDecodable>
{
    TSSSpecInteger *mDefault3dBarShape;
    TSSSpecBool *mDefault3dBevelEdges;
    TSSSpecDouble *mDefault3dInterSetDepthGap;
    TSCHSpecChart3dVector *mDefault3dRotation;
    TSCHSpecChart3dVector *mArea3dScale;
    TSCHSpecChart3dVector *mBar3dScale;
    TSCHSpecChart3dVector *mColumn3dScale;
    TSCHSpecChart3dVector *mDefault3dScale;
    TSCHSpecChart3dVector *mLine3dScale;
    TSCHSpecChart3dVector *mPie3dScale;
    TSCHSpecChart3dVector *mDefault3dViewport;
    TSSSpecInteger *mAreaCalloutLineType;
    TSSSpecInteger *mBarCalloutLineType;
    TSSSpecInteger *mBubbleCalloutLineType;
    TSSSpecInteger *mDefaultCalloutLineType;
    TSSSpecInteger *mLineCalloutLineType;
    TSSSpecInteger *mPieCalloutLineType;
    TSSSpecInteger *mScatterCalloutLineType;
    TSSSpecInteger *mStackedAreaCalloutLineType;
    TSSSpecInteger *mStackedBarCalloutLineType;
    TSSSpecInteger *mDefaultDataSetNameLocation;
    TSSSpecBool *mDefaultDonutPlaceTitleAtCenter;
    TSSSpecDouble *mDefaultInnerRadius;
    TSSSpecInteger *mDefaultMultiDataControlType;
    TSSSpecDouble *mDefaultPieStartAngle;
    TSSSpecBool *mDefaultShowLegend;
    TSSSpecBool *mDefaultShowTitle;
    TSSSpecBool *mDefaultSkipHiddenData;
    TSSSpecString *mDefaultTitle;
    BOOL mDefinedDefault3dBarShape;
    BOOL mDefinedDefault3dBevelEdges;
    BOOL mDefinedDefault3dInterSetDepthGap;
    BOOL mDefinedDefault3dRotation;
    BOOL mDefinedArea3dScale;
    BOOL mDefinedBar3dScale;
    BOOL mDefinedColumn3dScale;
    BOOL mDefinedDefault3dScale;
    BOOL mDefinedLine3dScale;
    BOOL mDefinedPie3dScale;
    BOOL mDefinedDefault3dViewport;
    BOOL mDefinedAreaCalloutLineType;
    BOOL mDefinedBarCalloutLineType;
    BOOL mDefinedBubbleCalloutLineType;
    BOOL mDefinedDefaultCalloutLineType;
    BOOL mDefinedLineCalloutLineType;
    BOOL mDefinedPieCalloutLineType;
    BOOL mDefinedScatterCalloutLineType;
    BOOL mDefinedStackedAreaCalloutLineType;
    BOOL mDefinedStackedBarCalloutLineType;
    BOOL mDefinedDefaultDataSetNameLocation;
    BOOL mDefinedDefaultDonutPlaceTitleAtCenter;
    BOOL mDefinedDefaultInnerRadius;
    BOOL mDefinedDefaultMultiDataControlType;
    BOOL mDefinedDefaultPieStartAngle;
    BOOL mDefinedDefaultShowLegend;
    BOOL mDefinedDefaultShowTitle;
    BOOL mDefinedDefaultSkipHiddenData;
    BOOL mDefinedDefaultTitle;
}

+ (Class)realClass;
+ (void)registerRealGsspClass:(Class)arg1;
+ (CDUnknownFunctionPointerType)defaultDecodeConversionFunc;
+ (CDUnknownFunctionPointerType)autoDecodeConversionFunc;
+ (void)setAutoDecodeConversionFuncForDocServer:(CDUnknownFunctionPointerType)arg1;
+ (Class)autoDecodedClass;
@property(readonly, nonatomic) BOOL definedDefaultTitle; // @synthesize definedDefaultTitle=mDefinedDefaultTitle;
@property(readonly, nonatomic) BOOL definedDefaultSkipHiddenData; // @synthesize definedDefaultSkipHiddenData=mDefinedDefaultSkipHiddenData;
@property(readonly, nonatomic) BOOL definedDefaultShowTitle; // @synthesize definedDefaultShowTitle=mDefinedDefaultShowTitle;
@property(readonly, nonatomic) BOOL definedDefaultShowLegend; // @synthesize definedDefaultShowLegend=mDefinedDefaultShowLegend;
@property(readonly, nonatomic) BOOL definedDefaultPieStartAngle; // @synthesize definedDefaultPieStartAngle=mDefinedDefaultPieStartAngle;
@property(readonly, nonatomic) BOOL definedDefaultMultiDataControlType; // @synthesize definedDefaultMultiDataControlType=mDefinedDefaultMultiDataControlType;
@property(readonly, nonatomic) BOOL definedDefaultInnerRadius; // @synthesize definedDefaultInnerRadius=mDefinedDefaultInnerRadius;
@property(readonly, nonatomic) BOOL definedDefaultDonutPlaceTitleAtCenter; // @synthesize definedDefaultDonutPlaceTitleAtCenter=mDefinedDefaultDonutPlaceTitleAtCenter;
@property(readonly, nonatomic) BOOL definedDefaultDataSetNameLocation; // @synthesize definedDefaultDataSetNameLocation=mDefinedDefaultDataSetNameLocation;
@property(readonly, nonatomic) BOOL definedStackedBarCalloutLineType; // @synthesize definedStackedBarCalloutLineType=mDefinedStackedBarCalloutLineType;
@property(readonly, nonatomic) BOOL definedStackedAreaCalloutLineType; // @synthesize definedStackedAreaCalloutLineType=mDefinedStackedAreaCalloutLineType;
@property(readonly, nonatomic) BOOL definedScatterCalloutLineType; // @synthesize definedScatterCalloutLineType=mDefinedScatterCalloutLineType;
@property(readonly, nonatomic) BOOL definedPieCalloutLineType; // @synthesize definedPieCalloutLineType=mDefinedPieCalloutLineType;
@property(readonly, nonatomic) BOOL definedLineCalloutLineType; // @synthesize definedLineCalloutLineType=mDefinedLineCalloutLineType;
@property(readonly, nonatomic) BOOL definedDefaultCalloutLineType; // @synthesize definedDefaultCalloutLineType=mDefinedDefaultCalloutLineType;
@property(readonly, nonatomic) BOOL definedBubbleCalloutLineType; // @synthesize definedBubbleCalloutLineType=mDefinedBubbleCalloutLineType;
@property(readonly, nonatomic) BOOL definedBarCalloutLineType; // @synthesize definedBarCalloutLineType=mDefinedBarCalloutLineType;
@property(readonly, nonatomic) BOOL definedAreaCalloutLineType; // @synthesize definedAreaCalloutLineType=mDefinedAreaCalloutLineType;
@property(readonly, nonatomic) BOOL definedDefault3dViewport; // @synthesize definedDefault3dViewport=mDefinedDefault3dViewport;
@property(readonly, nonatomic) BOOL definedPie3dScale; // @synthesize definedPie3dScale=mDefinedPie3dScale;
@property(readonly, nonatomic) BOOL definedLine3dScale; // @synthesize definedLine3dScale=mDefinedLine3dScale;
@property(readonly, nonatomic) BOOL definedDefault3dScale; // @synthesize definedDefault3dScale=mDefinedDefault3dScale;
@property(readonly, nonatomic) BOOL definedColumn3dScale; // @synthesize definedColumn3dScale=mDefinedColumn3dScale;
@property(readonly, nonatomic) BOOL definedBar3dScale; // @synthesize definedBar3dScale=mDefinedBar3dScale;
@property(readonly, nonatomic) BOOL definedArea3dScale; // @synthesize definedArea3dScale=mDefinedArea3dScale;
@property(readonly, nonatomic) BOOL definedDefault3dRotation; // @synthesize definedDefault3dRotation=mDefinedDefault3dRotation;
@property(readonly, nonatomic) BOOL definedDefault3dInterSetDepthGap; // @synthesize definedDefault3dInterSetDepthGap=mDefinedDefault3dInterSetDepthGap;
@property(readonly, nonatomic) BOOL definedDefault3dBevelEdges; // @synthesize definedDefault3dBevelEdges=mDefinedDefault3dBevelEdges;
@property(readonly, nonatomic) BOOL definedDefault3dBarShape; // @synthesize definedDefault3dBarShape=mDefinedDefault3dBarShape;
- (void).cxx_destruct;
- (id)description;
- (id)dspClassName;
- (id)jsonNSDictionaryValue;
- (void)populateJsonNSDictionaryValueToDictionary:(id)arg1;
- (int)p_getDiffEncodingScoreWith:(id)arg1;
- (void)p_populateStructHashKey:(struct GSSPHashKeyBuilder *)arg1;
- (unsigned long long)p_getStructHashKeyLength;
- (int)getStructHashId;
- (void)serializeRequiredFieldsWithSerializationContext:(struct GSSPSerializationContext *)arg1 withNextFieldNeedSerialize:(BOOL)arg2 diffBy:(id)arg3;
- (void)serializeOptionalFieldsWithSerializationContext:(struct GSSPSerializationContext *)arg1 withNextFieldNeedSerialize:(BOOL)arg2 diffBy:(id)arg3;
- (id)dspTypeIdString;
- (void)populateRequiredField:(int)arg1 fromContext:(struct GSSPDeserializationContext *)arg2;
- (void)populateOptionalField:(int)arg1 fromContext:(struct GSSPDeserializationContext *)arg2;
- (void)shallowCopyAllFieldsFrom:(id)arg1;
- (BOOL)clearDefaultTitle;
- (BOOL)clearDefaultSkipHiddenData;
- (BOOL)clearDefaultShowTitle;
- (BOOL)clearDefaultShowLegend;
- (BOOL)clearDefaultPieStartAngle;
- (BOOL)clearDefaultMultiDataControlType;
- (BOOL)clearDefaultInnerRadius;
- (BOOL)clearDefaultDonutPlaceTitleAtCenter;
- (BOOL)clearDefaultDataSetNameLocation;
- (BOOL)clearStackedBarCalloutLineType;
- (BOOL)clearStackedAreaCalloutLineType;
- (BOOL)clearScatterCalloutLineType;
- (BOOL)clearPieCalloutLineType;
- (BOOL)clearLineCalloutLineType;
- (BOOL)clearDefaultCalloutLineType;
- (BOOL)clearBubbleCalloutLineType;
- (BOOL)clearBarCalloutLineType;
- (BOOL)clearAreaCalloutLineType;
- (BOOL)clearDefault3dViewport;
- (BOOL)clearPie3dScale;
- (BOOL)clearLine3dScale;
- (BOOL)clearDefault3dScale;
- (BOOL)clearColumn3dScale;
- (BOOL)clearBar3dScale;
- (BOOL)clearArea3dScale;
- (BOOL)clearDefault3dRotation;
- (BOOL)clearDefault3dInterSetDepthGap;
- (BOOL)clearDefault3dBevelEdges;
- (BOOL)clearDefault3dBarShape;
- (void)setDefaultTitle:(id)arg1;
- (id)defaultTitle;
- (void)setDefaultSkipHiddenData:(id)arg1;
- (id)defaultSkipHiddenData;
- (void)setDefaultShowTitle:(id)arg1;
- (id)defaultShowTitle;
- (void)setDefaultShowLegend:(id)arg1;
- (id)defaultShowLegend;
- (void)setDefaultPieStartAngle:(id)arg1;
- (id)defaultPieStartAngle;
- (void)setDefaultMultiDataControlType:(id)arg1;
- (id)defaultMultiDataControlType;
- (void)setDefaultInnerRadius:(id)arg1;
- (id)defaultInnerRadius;
- (void)setDefaultDonutPlaceTitleAtCenter:(id)arg1;
- (id)defaultDonutPlaceTitleAtCenter;
- (void)setDefaultDataSetNameLocation:(id)arg1;
- (id)defaultDataSetNameLocation;
- (void)setStackedBarCalloutLineType:(id)arg1;
- (id)stackedBarCalloutLineType;
- (void)setStackedAreaCalloutLineType:(id)arg1;
- (id)stackedAreaCalloutLineType;
- (void)setScatterCalloutLineType:(id)arg1;
- (id)scatterCalloutLineType;
- (void)setPieCalloutLineType:(id)arg1;
- (id)pieCalloutLineType;
- (void)setLineCalloutLineType:(id)arg1;
- (id)lineCalloutLineType;
- (void)setDefaultCalloutLineType:(id)arg1;
- (id)defaultCalloutLineType;
- (void)setBubbleCalloutLineType:(id)arg1;
- (id)bubbleCalloutLineType;
- (void)setBarCalloutLineType:(id)arg1;
- (id)barCalloutLineType;
- (void)setAreaCalloutLineType:(id)arg1;
- (id)areaCalloutLineType;
- (void)setDefault3dViewport:(id)arg1;
- (id)default3dViewport;
- (void)setPie3dScale:(id)arg1;
- (id)pie3dScale;
- (void)setLine3dScale:(id)arg1;
- (id)line3dScale;
- (void)setDefault3dScale:(id)arg1;
- (id)default3dScale;
- (void)setColumn3dScale:(id)arg1;
- (id)column3dScale;
- (void)setBar3dScale:(id)arg1;
- (id)bar3dScale;
- (void)setArea3dScale:(id)arg1;
- (id)area3dScale;
- (void)setDefault3dRotation:(id)arg1;
- (id)default3dRotation;
- (void)setDefault3dInterSetDepthGap:(id)arg1;
- (id)default3dInterSetDepthGap;
- (void)setDefault3dBevelEdges:(id)arg1;
- (id)default3dBevelEdges;
- (void)setDefault3dBarShape:(id)arg1;
- (id)default3dBarShape;

@end

