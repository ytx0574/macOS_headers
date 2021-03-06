//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSObject, TMAInsertPopoverContentViewController, TSADrawableFactory, TSDDrawableInfo, TSDInsertionContext, TSKDocumentRoot;
@protocol TSDCanvasEditor, TSDDrawableInsertionEditor;

@protocol TMAInsertPopoverContentViewControllerDelegate <NSObject>
- (void)insertEditablePathForDrawableInfo:(TSDDrawableInfo *)arg1;
- (TSKDocumentRoot *)documentRoot;
- (NSObject<TSDDrawableInsertionEditor> *)editorForInsertingDrawables:(NSArray *)arg1 insertionContext:(TSDInsertionContext *)arg2;
- (NSObject<TSDCanvasEditor> *)insertPopoverContentViewControllerCanvasEditor:(TMAInsertPopoverContentViewController *)arg1;
- (TSADrawableFactory *)insertPopoverContentViewControllerDrawableFactory:(TMAInsertPopoverContentViewController *)arg1;
@end

