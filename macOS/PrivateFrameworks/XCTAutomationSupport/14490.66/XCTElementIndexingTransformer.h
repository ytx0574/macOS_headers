//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <XCTAutomationSupport/XCTElementSetCodableTransformer.h>

@class XCTIndexingTransformerIterator;

@interface XCTElementIndexingTransformer : XCTElementSetCodableTransformer
{
    unsigned long long _elementIndex;
    XCTIndexingTransformerIterator *_currentIterator;
}

+ (BOOL)supportsSecureCoding;
@property(retain) XCTIndexingTransformerIterator *currentIterator; // @synthesize currentIterator=_currentIterator;
@property(readonly) unsigned long long elementIndex; // @synthesize elementIndex=_elementIndex;
- (void).cxx_destruct;
- (id)iteratorForInput:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)requiredKeyPathsOrError:(id *)arg1;
- (BOOL)supportsAttributeKeyPathAnalysis;
- (BOOL)supportsRemoteEvaluation;
- (id)transform:(id)arg1 relatedElements:(id *)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithElementIndex:(unsigned long long)arg1;

@end

