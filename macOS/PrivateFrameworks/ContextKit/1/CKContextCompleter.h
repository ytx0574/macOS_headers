//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKContextResponse, NSLocale, NSString;

@interface CKContextCompleter : NSObject
{
    CKContextResponse *_response;
    NSString *_ignorePrefix;
    NSLocale *_searchLocale;
    BOOL _discarded;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)discard;
- (void)logTransactionSuccessfulForInput:(id)arg1;
- (void)logResultsSuppressed;
- (void)logEngagement:(id)arg1 forInput:(id)arg2;
- (id)queriesMatching:(id)arg1;
- (id)resultsMatching:(id)arg1;
- (id)initWithResponse:(id)arg1;

@end

