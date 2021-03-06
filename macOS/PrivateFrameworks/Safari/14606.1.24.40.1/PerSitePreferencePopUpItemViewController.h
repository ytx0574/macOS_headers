//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/PreferencesPopoverPopUpItemViewController.h>

#import <Safari/PerSitePreferencesPopoverItem-Protocol.h>

@class NSString, NSTextField, PerSitePreferencePopUpButton, WBSPerSitePreference;
@protocol WBSPerSitePreferenceManager;

__attribute__((visibility("hidden")))
@interface PerSitePreferencePopUpItemViewController : PreferencesPopoverPopUpItemViewController <PerSitePreferencesPopoverItem>
{
    WBSPerSitePreference *_perSitePreference;
    id <WBSPerSitePreferenceManager> _perSitePreferenceManager;
    NSString *_title;
    NSString *_domain;
    NSTextField *_preferenceTitleTextField;
    PerSitePreferencePopUpButton *_permissionsPopUpButton;
}

- (void)setPermissionsPopUpButton:(id)arg1;
- (id)permissionsPopUpButton;
- (void)setPreferenceTitleTextField:(id)arg1;
- (id)preferenceTitleTextField;
- (void).cxx_destruct;
- (void)updateToReflectPreferenceValue:(id)arg1;
- (void)_updatePopUpStateForDomain:(id)arg1;
- (void)updateStateForDomain:(id)arg1;
- (void)_updatePreferenceValue:(id)arg1;
- (void)_populateMenu:(id)arg1 withValuesForPerSitePreference:(id)arg2 inManager:(id)arg3 selector:(SEL)arg4;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPreference:(id)arg1 manager:(id)arg2 title:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

