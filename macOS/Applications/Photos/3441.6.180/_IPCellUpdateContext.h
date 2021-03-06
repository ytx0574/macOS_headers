//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IPXEnhancedAlbumCell, NSString, RDVersionCountLongLivedQuery;

@interface _IPCellUpdateContext : NSObject
{
    BOOL _hasQueryReply;
    RDVersionCountLongLivedQuery *_query;
    IPXEnhancedAlbumCell *_cell;
    unsigned long long _type;
    unsigned long long _versionCount;
    NSString *_uuid;
}

@property(retain) NSString *uuid; // @synthesize uuid=_uuid;
@property unsigned long long versionCount; // @synthesize versionCount=_versionCount;
@property unsigned long long type; // @synthesize type=_type;
@property __weak IPXEnhancedAlbumCell *cell; // @synthesize cell=_cell;
@property BOOL hasQueryReply; // @synthesize hasQueryReply=_hasQueryReply;
@property(retain) RDVersionCountLongLivedQuery *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCell:(id)arg1 query:(id)arg2;

@end

