//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSServiceListener : NSObject
{
    NSMutableArray *serviceProviders;
}

- (BOOL)_doInvokeServiceIn:(id)arg1 msg:(id)arg2 pb:(id)arg3 userData:(id)arg4 error:(id *)arg5 unhide:(BOOL)arg6;
- (id)providerRespondingToSelector:(SEL)arg1;
- (void)removeServiceProvider:(id)arg1;
- (void)addServiceProvider:(id)arg1;

@end

