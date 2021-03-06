//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "iTermPreferencesBaseViewController.h"

#import "NSTabViewDelegate-Protocol.h"
#import "ProfileListViewDelegate-Protocol.h"
#import "ProfilesGeneralPreferencesViewControllerDelegate-Protocol.h"
#import "iTermProfilePreferencesBaseViewControllerDelegate-Protocol.h"

@class NSButton, NSPopUpButton, NSString, NSTabView, NSTabViewItem, ProfileListView, ProfilesAdvancedPreferencesViewController, ProfilesColorsPreferencesViewController, ProfilesGeneralPreferencesViewController, ProfilesKeysPreferencesViewController, ProfilesSessionPreferencesViewController, ProfilesTerminalPreferencesViewController, ProfilesTextPreferencesViewController, ProfilesWindowPreferencesViewController;
@protocol ProfilePreferencesViewControllerDelegate;

@interface ProfilePreferencesViewController : iTermPreferencesBaseViewController <iTermProfilePreferencesBaseViewControllerDelegate, NSTabViewDelegate, ProfileListViewDelegate, ProfilesGeneralPreferencesViewControllerDelegate>
{
    ProfileListView *_profilesListView;
    NSPopUpButton *_otherActionsPopup;
    NSTabView *_tabView;
    NSButton *_removeProfileButton;
    NSButton *_addProfileButton;
    NSButton *_toggleTagsButton;
    NSButton *_copyToProfileButton;
    ProfilesGeneralPreferencesViewController *_generalViewController;
    NSTabViewItem *_generalTab;
    NSTabViewItem *_colorsTab;
    NSTabViewItem *_textTab;
    NSTabViewItem *_windowTab;
    NSTabViewItem *_terminalTab;
    NSTabViewItem *_sessionTab;
    NSTabViewItem *_keysTab;
    NSTabViewItem *_advancedTab;
    ProfilesColorsPreferencesViewController *_colorsViewController;
    ProfilesTextPreferencesViewController *_textViewController;
    ProfilesWindowPreferencesViewController *_windowViewController;
    ProfilesTerminalPreferencesViewController *_terminalViewController;
    ProfilesSessionPreferencesViewController *_sessionViewController;
    ProfilesKeysPreferencesViewController *_keysViewController;
    ProfilesAdvancedPreferencesViewController *_advancedViewController;
    double _minWidth;
    id <ProfilePreferencesViewControllerDelegate> _delegate;
}

@property(nonatomic) id <ProfilePreferencesViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tabView:(id)arg1 didSelectTabViewItem:(id)arg2;
- (void)profilesGeneralPreferencesNameDidEndEditing;
- (void)profilesGeneralPreferencesNameDidChange;
- (void)profilesGeneralPreferencesNameWillChange;
- (id)profilePreferencesCurrentModel;
- (id)profilePreferencesCurrentProfile;
- (void)bulkCopyControllerCloseSheet:(id)arg1 returnCode:(int)arg2 contextInfo:(id)arg3;
- (void)sessionProfileDidChange:(id)arg1;
- (void)reloadProfiles;
- (void)refreshProfileTable;
- (void)copyProfileJson:(id)arg1;
- (void)copyAllProfilesJson:(id)arg1;
- (id)jsonForProfile:(id)arg1 error:(id *)arg2;
- (void)setAsDefault:(id)arg1;
- (void)duplicateProfile:(id)arg1;
- (void)openCopyBookmarks:(id)arg1;
- (void)copyToProfile:(id)arg1;
- (void)toggleTags:(id)arg1;
- (void)addProfile:(id)arg1;
- (void)profileWasDeleted:(id)arg1;
- (void)removeProfile:(id)arg1;
- (void)resizeWindowForTabViewItem:(id)arg1 animated:(BOOL)arg2;
- (void)reloadData;
- (void)updateSubviewsForProfile:(id)arg1;
- (id)tabViewControllers;
- (BOOL)confirmProfileDeletion:(id)arg1;
- (void)profileTableTagsVisibilityDidChange:(id)arg1;
- (void)profileTableFilterDidChange:(id)arg1;
- (id)profileTable:(id)arg1 menuForEvent:(id)arg2;
- (void)profileTableRowSelected:(id)arg1;
- (void)profileTableSelectionDidChange:(id)arg1;
- (void)resizeWindowForCurrentTab;
- (void)changeFont:(id)arg1;
- (void)openToProfileWithGuid:(id)arg1 selectGeneralTab:(BOOL)arg2;
- (void)reloadProfileInProfileViewControllers;
- (void)selectGeneralTab;
@property(readonly, nonatomic) struct CGSize size;
- (id)selectedProfile;
- (void)selectFirstProfileIfNecessary;
- (void)selectGuid:(id)arg1;
- (void)layoutSubviewsForEditCurrentSessionMode;
- (void)refresh;
- (void)awakeFromNib;
- (void)windowWillClose;
- (void)setPreferencePanel:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

