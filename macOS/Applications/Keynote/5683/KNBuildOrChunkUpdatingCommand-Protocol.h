//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol KNBuildOrChunkUpdatingCommand <NSObject>
@property(readonly, nonatomic) BOOL mayChangeChunkCount;
@property(readonly, nonatomic) BOOL isValid;
@property(readonly, nonatomic) NSArray *oldTuplesToUpdate;
@property(readonly, nonatomic) NSArray *tuplesToUpdate;
@end

