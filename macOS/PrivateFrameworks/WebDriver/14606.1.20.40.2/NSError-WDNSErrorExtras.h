//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (WDNSErrorExtras)
+ (id)webDriver_errorWithCode:(long long)arg1 message:(id)arg2;
+ (id)webDriver_errorWithCode:(long long)arg1;
- (BOOL)webDriver_isWebDriverError;
- (id)webDriver_failureDetails;
@end

