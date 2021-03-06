//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TSCECellValue, TSTCellChooserControlSpec, TSTCellRegion, TSTCellUIDList, TSTInfo;

@interface TSTApplyPopupControlHelper : NSObject
{
    TSTCellRegion *_cellRegion;
    TSTInfo *_tableInfo;
    int _action;
    BOOL _startWithFirstItem;
    int _replacementIndex;
    TSCECellValue *_deletedItem;
    TSTCellUIDList *_emptyCellUIDs;
    TSTCellChooserControlSpec *_popupCellSpec;
    TSTCellRegion *_cellRegionEmptyCells;
}

+ (id)diffMapApplyingPopupModel:(id)arg1 tableInfo:(id)arg2 cellRegion:(id)arg3 actionFlag:(int)arg4 startWithFirstItem:(BOOL)arg5 deletingItem:(id)arg6 replacementIndex:(unsigned long long)arg7 emptyCells:(id)arg8;
- (void).cxx_destruct;
- (BOOL)p_cellIsInEmptyCells:(struct TSUCellCoord)arg1;
- (void)p_mutateCurrentCell:(id)arg1 cellID:(struct TSUCellCoord)arg2;
- (id)resultDiffMap;
- (id)initWithTableInfo:(id)arg1 cellRegion:(id)arg2 actionFlag:(int)arg3 popUpModel:(id)arg4 startWithFirstItem:(BOOL)arg5 deletingItem:(id)arg6 replacementIndex:(unsigned long long)arg7 emptyCells:(id)arg8;

@end

