//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDFill.h"

#import "GSSPAutoEncodable-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"
#import "TSDMixing-Protocol.h"
#import "TSSPresetSource-Protocol.h"

@class NSObject, TSDImageFillCachedImage, TSPData, TSUColor;
@protocol OS_dispatch_queue;

@interface TSDImageFill : TSDFill <GSSPAutoEncodable, TSDMixing, TSSPresetSource, NSCopying, NSMutableCopying>
{
    TSPData *mImageData;
    int mTechnique;
    TSUColor *mTintColor;
    TSDImageFillCachedImage *mStandardSizeTintedImage;
    TSDImageFillCachedImage *mHalfSizeTintedImage;
    TSDImageFillCachedImage *mQuarterSizeTintedImage;
    TSUColor *mReferenceColor;
    struct CGSize mFillSize;
    BOOL mHasIndicatedInterestInProvider;
    NSObject<OS_dispatch_queue> *mTempRenderLock;
    struct CGImage *mTempRenderCopy;
    struct CGImage *mSourceOfTempRenderCopy;
    long long mTempRenderCount;
}

+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (id)presetKinds;
+ (id)tsImageFillFromQDTexturedImageFill:(id)arg1 state:(id)arg2;
+ (id)p_tspImageDataFromQDTexturedImageFill:(id)arg1 state:(id)arg2 downloadRequested:(char *)arg3;
+ (id)instanceWithArchive:(const struct FillArchive *)arg1 unarchiver:(id)arg2;
@property(readonly, copy, nonatomic) TSUColor *tintColor; // @synthesize tintColor=mTintColor;
@property(nonatomic) int technique; // @synthesize technique=mTechnique;
@property(readonly, retain, nonatomic) TSPData *imageData; // @synthesize imageData=mImageData;
- (void).cxx_destruct;
- (void)p_drawPDFWithProvider:(id)arg1 inContext:(struct CGContext *)arg2 bounds:(struct CGRect)arg3;
- (void)p_drawBitmapImage:(struct CGImage *)arg1 withOrientation:(int)arg2 inContext:(struct CGContext *)arg3 bounds:(struct CGRect)arg4;
- (struct CGRect)p_drawnRectForImageSize:(struct CGSize)arg1 destRect:(struct CGRect)arg2 inContext:(struct CGContext *)arg3;
- (id)p_validatedImageProvider;
- (SEL)mapThemeAssetSelector;
- (id)presetKind;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)p_quarterSizeCachedImage;
- (id)p_halfSizeCachedImage;
- (id)p_standardSizeCachedImage;
- (id)p_tintedImageWithScale:(double)arg1;
- (void)paintPath:(struct CGPath *)arg1 naturalBounds:(struct CGRect)arg2 inContext:(struct CGContext *)arg3 isPDF:(BOOL)arg4;
- (void)paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)addBitmapsToRenderingQualityInfo:(id)arg1 forShapeRep:(id)arg2 inContext:(struct CGContext *)arg3;
- (void)p_paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (struct CGSize)p_sizeOfFillImageForDestRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (void)drawSwatchInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (struct CGSize)renderedImageSizeForObjectSize:(struct CGSize)arg1;
- (void)applyToCALayer:(id)arg1 withScale:(double)arg2;
- (id)p_cachedImageForSize:(struct CGSize)arg1 inContext:(struct CGContext *)arg2 orLayer:(id)arg3;
- (BOOL)shouldBeReappliedToCALayer:(id)arg1;
- (BOOL)p_shouldApplyTintedImage;
- (int)fillType;
- (BOOL)canApplyToCALayerByAddingSublayers;
- (BOOL)canApplyToCALayer;
- (BOOL)drawsInOneStep;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)referenceColor;
- (id)imageDataAtFillSize;
- (void)p_setFillSizeForApplicationData;
- (BOOL)isOpaque;
@property(readonly, nonatomic) struct CGSize fillSize; // @synthesize fillSize=mFillSize;
@property(readonly, nonatomic) double scale;
- (id)copyWithNewImageData:(id)arg1;
@property(nonatomic, setter=p_setFillSize:) struct CGSize p_fillSize;
@property(retain, nonatomic, setter=p_setTintColor:) TSUColor *p_tintColor;
@property(nonatomic, setter=p_setTechnique:) int p_technique;
@property(retain, nonatomic, setter=p_setImageData:) TSPData *p_imageData;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)p_clearTintedImageCache;
- (void)dealloc;
- (void)i_commonInit;
- (id)initWithImageData:(id)arg1 technique:(int)arg2 tintColor:(id)arg3 size:(struct CGSize)arg4;
- (BOOL)isEquivalentForPreset:(id)arg1;
- (void)icid_addMediaCompatibilityWarningsIfNeededToState:(id)arg1 forMediaContainer:(id)arg2;
- (void)saveToArchive:(struct FillArchive *)arg1 archiver:(id)arg2;
- (BOOL)p_shouldPersistFillSizeForData:(id)arg1;
- (id)initWithArchive:(const struct FillArchive *)arg1 unarchiver:(id)arg2;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;
- (void)populateGSSPImageFill:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (BOOL)tsch_hasAllResources;

@end

