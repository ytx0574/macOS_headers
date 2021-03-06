//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXViewController.h"

#import "IPXNestedAlbumMenuControllerDelegate-Protocol.h"
#import "RDLibraryMessagesReceiver-Protocol.h"

@class IPXImportAssetsBrowserController, IPXImportAssetsSecondaryToolbarView, IPXLibrary, IPXNestedAlbumMenuController, IPXTextField, NSButton, NSImageView, NSPopUpButton, NSProgressIndicator, NSString, NSTextField, NSView, RDAlbum;

@interface IPXImportAssetsSecondaryToolbarViewController : IPXViewController <IPXNestedAlbumMenuControllerDelegate, RDLibraryMessagesReceiver>
{
    NSPopUpButton *_devicesPopup;
    NSImageView *_deviceIcon;
    NSTextField *_deviceName;
    NSButton *_ejectButton;
    NSProgressIndicator *_ejectingSpinner;
    NSButton *_autoLaunchButton;
    NSButton *_cancelButton;
    NSButton *_importCancelButton;
    NSButton *_deleteCheckbox;
    NSTextField *_albumsLabel;
    NSPopUpButton *_albumsPopupButton;
    IPXNestedAlbumMenuController *_albumMenuController;
    IPXLibrary *_localLibrary;
    NSButton *_preserveFolderPathCheckboxButton;
    IPXImportAssetsSecondaryToolbarView *_secondaryToolbarView;
    IPXImportAssetsBrowserController *_importAssetsBrowser;
    NSProgressIndicator *_importProgress;
    IPXTextField *_importProgressCountTextField;
    RDAlbum *_importAlbum;
    NSView *_leftEdgeView;
    NSView *_rightEdgeView;
}

@property __weak NSView *rightEdgeView; // @synthesize rightEdgeView=_rightEdgeView;
@property __weak NSView *leftEdgeView; // @synthesize leftEdgeView=_leftEdgeView;
@property(retain) RDAlbum *importAlbum; // @synthesize importAlbum=_importAlbum;
@property __weak IPXTextField *importProgressCountTextField; // @synthesize importProgressCountTextField=_importProgressCountTextField;
@property __weak NSProgressIndicator *importProgress; // @synthesize importProgress=_importProgress;
@property __weak IPXImportAssetsBrowserController *importAssetsBrowser; // @synthesize importAssetsBrowser=_importAssetsBrowser;
@property __weak IPXImportAssetsSecondaryToolbarView *secondaryToolbarView; // @synthesize secondaryToolbarView=_secondaryToolbarView;
- (void).cxx_destruct;
- (void)newAlbumItemSelected;
- (void)libraryItemSelected;
- (void)albumSelected:(id)arg1;
- (void)libraryUpdatedAlbum:(id)arg1 forKeyPaths:(id)arg2;
- (void)libraryDeletedAlbum:(id)arg1;
- (void)libraryCreatedAlbum:(id)arg1;
- (void)importCancelAction:(id)arg1;
- (void)closeImportAction:(id)arg1;
- (void)preserveFolderStructure:(id)arg1;
- (void)ejectMediaAction:(id)arg1;
- (void)autoLaunchAction:(id)arg1;
- (void)devicesPopupAction:(id)arg1;
- (id)userDefaultImportAlbum;
- (void)saveUserDefaultImportAlbum:(id)arg1;
- (BOOL)isLibraryMenuItem;
- (BOOL)shouldAutoLaunch;
- (BOOL)shouldUseUserDefinedAlbum;
- (BOOL)shouldDeleteAfterImport;
- (BOOL)shouldPreserveFolderStructure;
- (void)updateImportProgressPercent:(double)arg1 progressCountString:(id)arg2;
- (void)setHideProgressControls:(BOOL)arg1;
- (void)updateControls;
- (BOOL)shouldForceCondensed;
- (void)createPopUpButtonForAlbumsFromDatabase:(id)arg1;
- (void)buildControls;
- (void)_updateAlbumsPopupButton;
- (void)_updateSourcePopup;
- (void)_sourceNameChanged:(id)arg1;
- (void)dealloc;
- (void)viewDidAppear;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

