//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface DMFPolicyMonitor : NSObject
{
    NSMutableDictionary *_registrationsByIdentifier;
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_registrationCallbackQueue;
    NSMutableDictionary *_notificationTokensByRegistrationIdentifier;
}

+ (id)remoteInterface;
+ (id)policyMonitor;
@property(readonly, nonatomic) NSMutableDictionary *notificationTokensByRegistrationIdentifier; // @synthesize notificationTokensByRegistrationIdentifier=_notificationTokensByRegistrationIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *registrationCallbackQueue; // @synthesize registrationCallbackQueue=_registrationCallbackQueue;
@property(readonly, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(readonly, nonatomic) NSMutableDictionary *registrationsByIdentifier; // @synthesize registrationsByIdentifier=_registrationsByIdentifier;
- (void).cxx_destruct;
- (void)_proxyWithRetryCount:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestPoliciesForTypes:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addRegistration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithXPCConnection:(id)arg1;
- (id)init;

@end

