//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ArchiveFile, NSMethodSignature, NSString;

@protocol ThreadingHandlerDelegateMethods <NSObject>
- (NSMethodSignature *)methodSignatureForSelector:(SEL)arg1;
- (void)fixProgressPanelSize;
- (void)setIsCancelButtonEnabled:(BOOL)arg1;
- (BOOL)isCancelButtonEnabled;
- (void)setIsProgressIndeterminate:(BOOL)arg1;
- (BOOL)isProgressIndeterminate;
- (void)setProgressString:(NSString *)arg1;
- (NSString *)progressString;
- (void)setProgressAmount:(double)arg1;
- (double)progressAmount;
- (void)setProgressMinValue:(double)arg1;
- (double)progressMinValue;
- (void)setProgressMaxValue:(double)arg1;
- (double)progressMaxValue;
- (NSString *)displayName;
- (ArchiveFile *)archive;
@end

