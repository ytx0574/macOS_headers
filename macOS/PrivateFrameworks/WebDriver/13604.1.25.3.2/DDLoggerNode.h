//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol DDLogger, OS_dispatch_queue;

@interface DDLoggerNode : NSObject
{
    id <DDLogger> logger;
    NSObject<OS_dispatch_queue> *loggerQueue;
}

+ (id)nodeWithLogger:(id)arg1 loggerQueue:(id)arg2;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithLogger:(id)arg1 loggerQueue:(id)arg2;

@end

