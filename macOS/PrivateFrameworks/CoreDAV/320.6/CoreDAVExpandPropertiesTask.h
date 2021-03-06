//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreDAV/CoreDAVPropertyFindBaseTask.h>

@class NSMutableSet;

@interface CoreDAVExpandPropertiesTask : CoreDAVPropertyFindBaseTask
{
    NSMutableSet *_propertiesToExpand;
}

@property(retain, nonatomic) NSMutableSet *propertiesToExpand; // @synthesize propertiesToExpand=_propertiesToExpand;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)parseHints;
- (id)requestBody;
- (id)httpMethod;
- (id)description;
- (void)addPropertyToExpandWithPropertiesToFind:(id)arg1 expandedName:(id)arg2 expandedNameSpace:(id)arg3;
- (id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2 expandedName:(id)arg3 expandedNameSpace:(id)arg4;
- (void)dealloc;

@end

