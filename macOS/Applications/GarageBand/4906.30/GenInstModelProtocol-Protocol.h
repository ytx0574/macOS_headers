//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GenInstDrummerLibrary, NSData, NSDictionary, NSString;
@protocol GenInstDrummer_TrackModelProtocol, GenInstModelUICoordinatorProtocol;

@protocol GenInstModelProtocol <NSObject>
- (void)persistentIO:(struct TPersistentIOPrms *)arg1;
- (GenInstDrummerLibrary *)library;
- (NSData *)genInstDictionaryChunkForRegion:(const struct CRegion *)arg1;
- (void)registerLastSelectedGenre:(NSDictionary *)arg1 character:(NSDictionary *)arg2;
- (BOOL)clampEventsToRegionStart;
- (void)setClampEventsToRegionStart:(BOOL)arg1;
- (struct CGenDrumMapBase *)drumMapForRegion:(const struct CMSeq *)arg1;
- (void)purgeUnneededTrackModels;
- (void)cancelAllGenerateJobs;
- (BOOL)hasRunningGenerateJobs;
- (void)setUndoState:(NSDictionary *)arg1;
- (NSDictionary *)undoState;
- (void)generateEventsWithSameSeedsForSelectedRegionsOnAnimalTracksInFolder:(int)arg1;
- (void)generateEventsWithNewSeedsForSelectedAndEnabledRegionsOnAnimalTracksInFolder:(int)arg1;
- (void)prepareGenerateToSpeedUpFirstPlayOnTrack:(struct CVirtualTrack)arg1;
- (void)convertSelectedMidiRegionsToDrummerRegionsInFolder:(int)arg1;
- (void)convertSelectedDrummerRegionsToMidiRegionsInFolder:(int)arg1;
- (vector_e94a763c)allDrumTracksInSong;
- (unsigned long long)numberOfDrummerTracks;
- (BOOL)allowCreationOfAdditionalAnimalTrackForSong:(struct CSong *)arg1;
- (BOOL)drumTrackExists;
- (void)setAutoSelectRegions:(BOOL)arg1;
- (BOOL)autoSelectRegions;
- (void)setSelectedGenre:(NSString *)arg1 characterIdentifier:(NSString *)arg2 forTrack:(const struct CVirtualTrack *)arg3 options:(NSDictionary *)arg4;
- (id <GenInstDrummer_TrackModelProtocol>)genInstDrummerTrackModelForMSeq:(const struct CMSeq *)arg1;
- (id <GenInstDrummer_TrackModelProtocol>)genInstDrummerTrackModelForSeqID:(int)arg1;
- (id <GenInstDrummer_TrackModelProtocol>)genInstDrummerTrackModelForVirtualTrack:(struct CVirtualTrack)arg1;
- (BOOL)isDefaultGenInstContentAvailable;
- (id <GenInstModelUICoordinatorProtocol>)modelUICoordinator;
- (void)detachSong;
- (struct CSong *)song;
@end

