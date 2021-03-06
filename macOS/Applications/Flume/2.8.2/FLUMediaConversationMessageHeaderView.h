//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FLUTableCellView.h"

@class FLULabel, NSString;

@interface FLUMediaConversationMessageHeaderView : FLUTableCellView
{
    NSString *_string;
    FLULabel *_label;
}

@property(retain, nonatomic) FLULabel *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *string; // @synthesize string=_string;
- (void).cxx_destruct;
- (id)labelAttributes;
- (void)refreshView;
- (void)updateFrames;
- (void)setFrame:(struct CGRect)arg1;
- (void)didChangeDesignModeOption:(id)arg1;
- (void)setupAccessibility;
- (void)dealloc;
- (void)setupWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

