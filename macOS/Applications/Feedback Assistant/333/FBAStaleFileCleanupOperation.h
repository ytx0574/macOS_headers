//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBAFileCleanupOperation.h"

@class NSDate;

@interface FBAStaleFileCleanupOperation : FBAFileCleanupOperation
{
    NSDate *_stalenessDate;
}

@property(copy) NSDate *stalenessDate; // @synthesize stalenessDate=_stalenessDate;
- (void).cxx_destruct;
- (id)whitelistedDirectories;
- (void)main;
- (id)initWithStalenessDate:(id)arg1;

@end

