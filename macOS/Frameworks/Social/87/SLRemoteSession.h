//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSXPCConnection, SLDatabase;

@interface SLRemoteSession : NSObject
{
    NSXPCConnection *_connection;
    SLDatabase *_database;
}

@property(retain, nonatomic) SLDatabase *database; // @synthesize database=_database;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (BOOL)clientHasEntitlement:(id)arg1;
- (id)initWithConnection:(id)arg1 database:(id)arg2;

@end

