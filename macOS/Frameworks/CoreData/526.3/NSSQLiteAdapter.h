//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreData/NSSQLAdapter.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSSQLiteAdapter : NSSQLAdapter
{
    NSString *_dbpath;
}

- (BOOL)supportsCorrelatedSubqueries;
- (id)sqliteVersion;
- (Class)statementClass;
- (id)type;
- (id)typeStringForColumn:(id)arg1;
- (id)typeStringForSQLType:(unsigned int)arg1;
- (id)pathnameForDatabase;
- (id)createConnection;
- (void)dealloc;
- (id)initWithSQLCore:(id)arg1;

@end

