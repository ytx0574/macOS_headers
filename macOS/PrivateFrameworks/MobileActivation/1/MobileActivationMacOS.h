//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface MobileActivationMacOS : NSObject
{
    NSXPCConnection *_connection;
}

@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (BOOL)deactivateDevice:(id *)arg1;
- (BOOL)handleActivationInfo:(id)arg1 error:(id *)arg2;
- (id)createActivationInfo:(id)arg1 error:(id *)arg2;
- (id)getActivationState:(id *)arg1;
- (void)dealloc;
- (id)init;

@end

