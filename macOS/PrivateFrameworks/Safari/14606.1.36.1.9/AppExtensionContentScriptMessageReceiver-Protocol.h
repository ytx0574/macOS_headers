//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class NSDictionary, NSString, NSUUID;

@protocol AppExtensionContentScriptMessageReceiver <NSObject>
- (void)setContextMenuUserInfo:(NSDictionary *)arg1 forExtensionWithIdentifier:(NSUUID *)arg2;
- (void)dispatchMessageWithName:(NSString *)arg1 toExtensionWithIdentifier:(NSUUID *)arg2 userInfo:(NSDictionary *)arg3;
@end

