//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GSSPCmdBase.h"

#import "GSSPAutoDecodable-Protocol.h"

@class GSSPCellUID, NSArray, NSString, NSUUID;

@interface GSSPCmdSheetInsertDrawables : GSSPCmdBase <GSSPAutoDecodable>
{
    NSUUID *mSheetId;
    BOOL mForPaste;
    NSArray *mDrawableInfoList;
    NSArray *mArgsList;
    NSString *mTableInfoIdPath;
    GSSPCellUID *mTopLeftCell;
    GSSPCellUID *mBottomRightCell;
    BOOL mShouldTriggerRtuAnimation;
    BOOL mDefinedTableInfoIdPath;
    BOOL mDefinedTopLeftCell;
    BOOL mDefinedBottomRightCell;
    BOOL mDefinedShouldTriggerRtuAnimation;
}

+ (Class)realClass;
+ (void)registerRealGsspClass:(Class)arg1;
+ (CDUnknownFunctionPointerType)defaultDecodeConversionFunc;
+ (CDUnknownFunctionPointerType)autoDecodeConversionFunc;
+ (void)setAutoDecodeConversionFuncForDocServer:(CDUnknownFunctionPointerType)arg1;
+ (Class)autoDecodedClass;
@property(readonly, nonatomic) BOOL definedShouldTriggerRtuAnimation; // @synthesize definedShouldTriggerRtuAnimation=mDefinedShouldTriggerRtuAnimation;
@property(readonly, nonatomic) BOOL definedBottomRightCell; // @synthesize definedBottomRightCell=mDefinedBottomRightCell;
@property(readonly, nonatomic) BOOL definedTopLeftCell; // @synthesize definedTopLeftCell=mDefinedTopLeftCell;
@property(readonly, nonatomic) BOOL definedTableInfoIdPath; // @synthesize definedTableInfoIdPath=mDefinedTableInfoIdPath;
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
- (void)dealloc;
- (BOOL)clearShouldTriggerRtuAnimation;
- (BOOL)clearBottomRightCell;
- (BOOL)clearTopLeftCell;
- (BOOL)clearTableInfoIdPath;
- (void)setShouldTriggerRtuAnimation:(BOOL)arg1;
- (BOOL)shouldTriggerRtuAnimation;
- (void)setBottomRightCell:(id)arg1;
- (id)bottomRightCell;
- (void)setTopLeftCell:(id)arg1;
- (id)topLeftCell;
- (void)setTableInfoIdPath:(id)arg1;
- (id)tableInfoIdPath;
- (void)setArgsList:(id)arg1;
- (id)argsList;
- (void)setDrawableInfoList:(id)arg1;
- (id)drawableInfoList;
- (void)setForPaste:(BOOL)arg1;
- (BOOL)forPaste;
- (void)setSheetId:(id)arg1;
- (id)sheetId;

@end

