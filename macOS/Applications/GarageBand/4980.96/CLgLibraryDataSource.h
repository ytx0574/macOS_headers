//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ChannelSettingsUtilities, LgLibraryDataSourceRevertInfo, NSMutableSet, NSTimer;
@protocol OS_dispatch_queue;

@interface CLgLibraryDataSource : NSObject
{
    struct CDocumentLogic *_document;
    struct CMenu *_dataSourceMenu;
    int _currentDataSourceMode;
    ChannelSettingsUtilities *_channelSettingsUtilities;
    CDStruct_ffe30ac1 _currentSelectionInfo;
    BOOL _notificationHandlerAdded;
    NSMutableSet *_observers;
    NSTimer *_currentArrangeTimer;
    unsigned long long _dataSourceMenuID;
    LgLibraryDataSourceRevertInfo *m_libraryDataSourceRevertInfo;
    BOOL _documentIsClosing;
    NSObject<OS_dispatch_queue> *_libraryDatasSourceDispatchQueue;
    BOOL m_disableNotificationHandler;
    BOOL _isLoading;
    BOOL _showAvailableDownloads;
}

+ (BOOL)entryIsAssetIncomplete:(struct CMenuEntry *)arg1;
+ (BOOL)entryIsDownloading:(struct CMenuEntry *)arg1;
+ (BOOL)entryIsDownloadable:(struct CMenuEntry *)arg1;
+ (BOOL)entryIsPremium:(struct CMenuEntry *)arg1;
+ (BOOL)entryHasMissingContent:(struct CMenuEntry *)arg1;
+ (BOOL)filterCMenuActionMenus:(struct CMenuEntry *)arg1;
@property(nonatomic) BOOL showAvailableDownloads; // @synthesize showAvailableDownloads=_showAvailableDownloads;
@property(readonly, nonatomic) unsigned long long dataSourceMenuID; // @synthesize dataSourceMenuID=_dataSourceMenuID;
@property(nonatomic) CDStruct_ffe30ac1 currentSelectionInfo; // @synthesize currentSelectionInfo=_currentSelectionInfo;
@property(readonly, nonatomic) int currentDataSourceMode; // @synthesize currentDataSourceMode=_currentDataSourceMode;
@property(readonly, nonatomic) struct CMenu *dataSourceMenu; // @synthesize dataSourceMenu=_dataSourceMenu;
- (id).cxx_construct;
- (id)currentLibraryPathForSelectedMenuItem:(struct CMenuEntry *)arg1;
- (struct CMenuEntry *)selectionMatchedMenuEntry;
- (BOOL)nothingOrFolderSelected;
- (id)currentLibraryPath;
- (BOOL)menuEntryIsValid:(struct CMenuEntry *)arg1;
- (struct CMenuEntry *)getMenuEntryForPath:(id)arg1;
- (struct CMenuEntry *)_recursiveFindMenuEntryForMenuEntry:(struct CMenuEntry *)arg1 pathArray:(id)arg2;
- (void)deleteUserFileWithMenuEntry:(struct CMenuEntry *)arg1;
- (void)saveUserFile;
- (void)loadSettingForMenuEntry:(struct CMenuEntry *)arg1 enablePatchMerging:(BOOL)arg2 withPatchMergeFilterFlags:(unsigned int)arg3 force:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (BOOL)isLoading;
- (void)loadPrevNextSetting:(BOOL)arg1 enablePatchMerging:(BOOL)arg2 withPatchMergeFilterFlags:(unsigned int)arg3 localMenuOnly:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
@property(readonly, nonatomic) BOOL canRevert;
- (void)resetRevertInfo;
- (void)revert;
- (void)_setupAudioBrowserMenu;
- (void)_setupMIDIBrowserMenu;
- (int)_getFirstInstrumentIfLayeredInstrument:(int)arg1;
- (void)_mergeReWireDevicesToBrowserMenu:(struct CMenu *)arg1;
- (void)_mergeAMSDevicesToBrowserMenu:(struct CMenu *)arg1;
- (void)_setDataSourceMenu:(struct CMenu *)arg1 andMode:(int)arg2;
- (void)_internalLoadSettingFromURL:(id)arg1 withCategory:(id)arg2 intoTrack:(struct TPosOneBasedTrackNr *)arg3 withGinst:(int *)arg4 inFolderWithID:(int)arg5 enablePatchMerging:(BOOL)arg6 importFlags:(unsigned int)arg7;
- (void)_loadSettingFromURL:(id)arg1 withCategory:(id)arg2 intoTrack:(struct TPosOneBasedTrackNr *)arg3 withGinst:(int *)arg4 inFolderWithID:(int)arg5 enablePatchMerging:(BOOL)arg6 importFlags:(unsigned int)arg7;
- (BOOL)currentPatchWasModified;
- (long long)showRemixFXAlert;
- (int)_recreateGinstOnTrack:(struct TPosOneBasedTrackNr)arg1 inSong:(struct CSong *)arg2 withType:(struct TAuConfType)arg3 inFolder:(int)arg4;
- (BOOL)_trackContainsMidiRegions:(const struct CTrack *)arg1 mseq:(const struct CMSeq *)arg2;
- (struct CSong *)_currentSong;
- (BOOL)_selectionInfo:(CDStruct_ffe30ac1)arg1 isEqualTo:(CDStruct_ffe30ac1)arg2;
- (double)_timerDelay;
- (id)_getCategoryFromMenuEntry:(struct CMenuEntry *)arg1;
- (struct CMenu *)_createDeviceMenuFor:(id)arg1 destination:(int)arg2 andChannelBitmap:(int)arg3;
- (void)updateDataSourceForSelection:(CDStruct_ffe30ac1)arg1;
- (BOOL)updateSelectionInfoForDocument:(struct CDocumentLogic *)arg1 error:(id *)arg2;
- (void)refreshDataSource;
- (void)_rebuildDataSourceIfNeededForDocument:(struct CDocumentLogic *)arg1 forceRebuild:(BOOL)arg2;
- (void)_rebuildDataSourceIfNeededWithInfoDictonary:(id)arg1;
- (void)rebuildDataSource;
- (void)performRebuildDataSourceOnDefaultRunloopModeforDoc:(struct CDocumentLogic *)arg1 forceRebuild:(BOOL)arg2;
- (void)_sendFocusDidChangeToObserver;
- (void)_sendDidChangeToObserverDelayed:(BOOL)arg1;
- (void)_sendDidBecameAvailableToObserver;
- (void)_sendDidBecameUnAvailableToObserver;
- (void)cancelPreformSelectorForTarget:(id)arg1;
- (void)removeAllObserver;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_arrangeSelectionTimerAction:(id)arg1;
- (void)_exsMenuChanging:(id)arg1;
- (void)_exsInstrumentChanging:(id)arg1;
- (void)_pstDirTreeChanged:(id)arg1;
- (void)_pstLoaded:(id)arg1;
- (void)_arrangeSelectionDidChange:(id)arg1;
- (void)handleUM_UPDATE_LIBRARY:(id)arg1;
- (void)handleUM_GDEL:(id)arg1;
- (void)handleUM_HALO:(id)arg1;
- (void)downloadStateDidChangeHandler:(id)arg1;
- (void)documentWillClose:(id)arg1;
- (void)_removeNotificationHandlers;
- (void)_addNotificationHandlers;
- (void)dealloc;
- (id)initDataSourceWithDocument:(struct CDocumentLogic *)arg1;

@end

