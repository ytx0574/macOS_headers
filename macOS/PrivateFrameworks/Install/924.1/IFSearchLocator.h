//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Install/IFSearch.h>

@class NSArray;

@interface IFSearchLocator : IFSearch
{
    NSArray *_locatorArray;
}

+ (id)searchListWithTokensElement:(id)arg1;
- (id)searchResultsForContext:(id)arg1 inDomainPath:(id)arg2;
- (id)initWithTokenDefinitions:(id)arg1 forTokenID:(id)arg2;
- (id)initWithXMLElement:(id)arg1;
- (BOOL)_parseLocatorPlistFromElement:(id)arg1;

@end

