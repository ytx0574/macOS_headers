//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSWPTextEditor.h"

@interface TSWPFloatingCommentTextEditor : TSWPTextEditor
{
}

- (BOOL)acceptsSectionAndPageBreaks;
- (BOOL)acceptsColumnBreaks;
- (BOOL)acceptsLineBreaks;
- (BOOL)acceptsTabs;
- (void)fontPicker:(id)arg1 choseFont:(id)arg2 preserveFace:(BOOL)arg3;
- (void)applyFormatValue:(id)arg1 forProperty:(int)arg2 coalesceable:(BOOL)arg3;
- (void)paste:(id)arg1;
- (id)topLevelInspectorViewControllers;
- (BOOL)suppressesTextInspector;
- (BOOL)suppressesStyleInspector;
- (int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;

@end

