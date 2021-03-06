//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBookAutocomplete/NSObject-Protocol.h>

@class ABCNFetchRequest, CNAutocompleteResultFactory, NSArray, NSPredicate, NSString;

@protocol ABAutocompleteLocalQueryStrategy <NSObject>
- (NSArray *)autocompleteResultsForProperties:(NSArray *)arg1 fetchResults:(NSArray *)arg2 resultFactory:(CNAutocompleteResultFactory *)arg3;
- (NSPredicate *)predicateForProperties:(NSArray *)arg1 term:(NSString *)arg2;
- (ABCNFetchRequest *)fetchRequestForTerms:(NSArray *)arg1;
@end

