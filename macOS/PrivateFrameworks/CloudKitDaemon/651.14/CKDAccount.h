//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/CKDAccountInfoProvider-Protocol.h>

@class ACAccountStore, ACAccountType, CKDBackingAccount, CKDClientContext, NSPersonNameComponents, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDAccount : NSObject <CKDAccountInfoProvider>
{
    BOOL _isUnitTestingAccount;
    BOOL _accountWantsPushRegistration;
    BOOL _isAnonymousAccount;
    BOOL _haveWarnedAboutServerPreferredPushEnvironment;
    ACAccountType *_acAccountType;
    CKDBackingAccount *_backingAccount;
    CKDClientContext *_context;
    NSObject<OS_dispatch_queue> *_authTokenCallbackQueue;
    NSString *_lastFailedCloudKitAuthToken;
}

+ (id)globalAuthTokenQueue;
@property(copy, nonatomic) NSString *lastFailedCloudKitAuthToken; // @synthesize lastFailedCloudKitAuthToken=_lastFailedCloudKitAuthToken;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *authTokenCallbackQueue; // @synthesize authTokenCallbackQueue=_authTokenCallbackQueue;
@property(nonatomic) BOOL haveWarnedAboutServerPreferredPushEnvironment; // @synthesize haveWarnedAboutServerPreferredPushEnvironment=_haveWarnedAboutServerPreferredPushEnvironment;
@property(nonatomic) BOOL isAnonymousAccount; // @synthesize isAnonymousAccount=_isAnonymousAccount;
@property(nonatomic) __weak CKDClientContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) CKDBackingAccount *backingAccount; // @synthesize backingAccount=_backingAccount;
@property(retain, nonatomic) ACAccountType *acAccountType; // @synthesize acAccountType=_acAccountType;
@property(nonatomic) BOOL accountWantsPushRegistration; // @synthesize accountWantsPushRegistration=_accountWantsPushRegistration;
@property(nonatomic) BOOL isUnitTestingAccount; // @synthesize isUnitTestingAccount=_isUnitTestingAccount;
- (void).cxx_destruct;
- (void)noteTimeSpentInNetworking:(double)arg1;
- (void)noteFailedProtocolRequest;
- (void)noteFailedNetworkRequest;
- (void)noteSuccessfulRequestWithNumDownloadedElements:(long long)arg1;
- (id)enabledKeyboards;
- (id)regionCode;
- (id)languageCode;
- (BOOL)shouldFailAllTasks;
- (void)displayAuthenticationPromptWithReason:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)validateVettingToken:(id)arg1 vettingEmail:(id)arg2 vettingPhone:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_lockediCloudAuthTokenWithError:(id *)arg1;
- (id)_lockedCloudKitAuthTokenWithError:(id *)arg1;
- (void)cloudKitAuthTokenWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)iCloudAuthTokenWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)renewAuthTokenWithReason:(id)arg1 shouldForce:(BOOL)arg2 failedToken:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_lockedRenewAuthTokenWithReason:(id)arg1 shouldForce:(BOOL)arg2 failedToken:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *authTokenQueue;
- (BOOL)isDataclassEnabled:(id)arg1;
@property(readonly, nonatomic) BOOL cloudPhotosIsEnabled;
@property(readonly, nonatomic) BOOL cloudKitIsEnabled;
@property(readonly, nonatomic) BOOL canAuthWithCloudKit;
@property(readonly, nonatomic) BOOL canAccessAccount;
@property(readonly, nonatomic) BOOL iCloudDriveAllowsCellularAccess;
- (id)deviceName;
- (id)hardwareID;
- (id)containerScopedUserID;
- (id)dsid;
- (id)baseURLForServerType:(long long)arg1 partitionType:(long long)arg2;
- (id)_urlBySettingCustomBaseURL:(id)arg1 onURL:(id)arg2;
@property(readonly, copy) NSString *description;
- (id)serverPreferredPushEnvironment;
- (id)trafficContainerIdentifier;
- (id)applicationBundle;
- (id)bundleID;
- (id)containerID;
@property(readonly, nonatomic) NSString *accountID;
@property(readonly, nonatomic) BOOL isFakeAccount;
- (void)renewMescalSessionForRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)resetMescalSession;
- (id)mescalSession;
- (void)fetchDeviceIDUsingBackgroundSession:(BOOL)arg1 allowsCellularAccess:(BOOL)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)fetchContainerScopedUserIDUsingBackgroundSession:(BOOL)arg1 allowsCellularAccess:(BOOL)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)fetchPrivateURLWithServerType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchPublicURLUsingBackgroundSession:(BOOL)arg1 allowsCellularAccess:(BOOL)arg2 serverType:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)fetchConfigurationUsingBackgroundSession:(BOOL)arg1 allowsCellularAccess:(BOOL)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)config;
@property(readonly, nonatomic) NSString *username;
@property(readonly, nonatomic) NSString *primaryEmail;
@property(readonly, nonatomic) NSPersonNameComponents *fullName;
@property(readonly, nonatomic) NSString *accountIdentifier;
@property(readonly, nonatomic) ACAccountStore *accountStore;
- (id)initFakeAccountWithEmail:(id)arg1 password:(id)arg2 context:(id)arg3;
- (id)initWithAccountID:(id)arg1 context:(id)arg2;
- (id)initAnonymousAccountWithContext:(id)arg1;
- (id)initPrimaryAccountWithContext:(id)arg1;
- (id)_initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

