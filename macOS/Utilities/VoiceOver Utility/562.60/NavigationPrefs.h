//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "PrefsBase.h"

@class NSMenu, NSPopUpButton;

@interface NavigationPrefs : PrefsBase
{
    NSPopUpButton *_mouseCursorFollowsPopUp;
    NSPopUpButton *_fastSearchKeyPopUp;
    NSPopUpButton *_groupingModePopUp;
    NSMenu *_groupingModeMenu;
}

- (void).cxx_destruct;
- (void)selectMouseCursorFollows:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)helpAnchor;
- (void)_updateMouseCursorFollowsPopUp;
- (void)_updateGroupingBehaviorPopUp;
- (void)_setupGroupingBehaviorPopUp;
- (void)selectGroupingBehavior:(id)arg1;
- (void)selectFastSearchKey:(id)arg1;
- (void)_updateFastSearchKey;
- (void)fastSearchEnabled:(id)arg1;
- (void)_showFastSearchInformationAlert;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;

@end

