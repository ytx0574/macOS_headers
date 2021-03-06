//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MacBuddyManager-Protocol.h"

@class NSDictionary, NSString;

@interface ServicesManager : NSObject <MacBuddyManager>
{
    BOOL _sendDiagnosticsToApple;
    BOOL _shouldSetSendDiagnosticsToApple;
    BOOL _sendThirdPartyDiagnosticsToApple;
    BOOL _usingExpressSetupValues;
}

+ (id)sharedManager;
@property BOOL usingExpressSetupValues; // @synthesize usingExpressSetupValues=_usingExpressSetupValues;
@property BOOL sendThirdPartyDiagnosticsToApple; // @synthesize sendThirdPartyDiagnosticsToApple=_sendThirdPartyDiagnosticsToApple;
@property BOOL shouldSetSendDiagnosticsToApple; // @synthesize shouldSetSendDiagnosticsToApple=_shouldSetSendDiagnosticsToApple;
@property BOOL sendDiagnosticsToApple; // @synthesize sendDiagnosticsToApple=_sendDiagnosticsToApple;
@property(readonly, copy) NSDictionary *_genericErrorMessageDict;
@property BOOL coreLocationEnabled;
- (BOOL)applySettings:(id *)arg1;
@property(readonly) BOOL diagnosticsLocked;
@property(readonly) BOOL isSeedBuild;
@property(readonly) BOOL thirdPartyDiagnosticsCurrentlyEnabled;
@property(readonly) BOOL thirdPartyDiagnosticsCurrentlySet;
@property(readonly) BOOL appleDiagnosticsCurrentlySet;
@property(readonly) BOOL appleDiagnosticsCurrentlyEnabled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

