//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDFaceGroupModel.h>

@class NSArray;

@interface RDFaceGroup : RDFaceGroupModel
{
    NSArray *_cachedFaces;
}

+ (void)deleteStaleFaceGroupsOfType:(unsigned long long)arg1 fromDatabase:(id)arg2 withMaxNumberOfFaces:(unsigned long long)arg3 withReason:(unsigned int)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (void)deleteStaleFaceGroupsFromDatabase:(id)arg1 withMaxNumberOfFaces:(unsigned long long)arg2 withReason:(unsigned int)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)deleteStaleFaceGroupsFromDatabase:(id)arg1 exceptFaceGroupsWithIds:(id)arg2 withMaxNumberOfFaces:(unsigned long long)arg3 usingModelFilter:(id)arg4 withReason:(unsigned int)arg5 completionHandler:(CDUnknownBlockType)arg6;
@property(retain) NSArray *cachedFaces; // @synthesize cachedFaces=_cachedFaces;
- (void).cxx_destruct;
- (void)setModelDefaults;

@end

