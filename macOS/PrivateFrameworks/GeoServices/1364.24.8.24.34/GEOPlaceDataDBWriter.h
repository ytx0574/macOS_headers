//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GeoServices/GEODBWriter.h>

@interface GEOPlaceDataDBWriter : GEODBWriter
{
    struct sqlite3_stmt *_sqlInsertPhoneNumber;
    struct sqlite3_stmt *_sqlInsertKeyString;
    struct sqlite3_stmt *_sqlDeleteAllPhoneNumbers;
    struct sqlite3_stmt *_sqlDeleteKeyStringForMUID;
    struct sqlite3_stmt *_sqlDeletePlaceDataForMUID;
}

- (void)flushPendingWritesSynchronously;
- (void)performTableCreationTasks;
- (void)performStatementFinalizationTasks;
- (void)performStatementPreparationTasks;
- (void)_createKeyStringTable;
- (void)_setMUID:(id)arg1 forKey:(struct _GEOTileKey)arg2;
- (void)_createPhoneNumberTable;
- (void)_setMUID:(unsigned long long)arg1 forPhoneNumber:(long long)arg2;
- (void)_openIfNecessary;
- (void)_populateDBKey:(struct _GEOTileKey *)arg1 forMUID:(unsigned long long)arg2;
- (void)deletePhoneNumberMapping;
- (void)deletePlaceDataForMUID:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (void)setComponentsFromPlaceData:(id)arg1;
- (void)clear;
- (void)deleteComponentForKey:(union _GEOPlaceDataComponentKey)arg1;
- (void)setComponent:(id)arg1 forKey:(union _GEOPlaceDataComponentKey)arg2;

@end

