//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FRFont : NSObject
{
}

+ (id)_registrationQueue;
+ (id)_referenceCountedSet;
+ (id)_postScriptNameForFontAtFileURL:(id)arg1;
+ (BOOL)_unregisterFontAtFileURL:(id)arg1 error:(id *)arg2;
+ (BOOL)_shouldUnregisterFontWithFileURL:(id)arg1;
+ (unsigned long long)_referenceCountForFontWithFileURL:(id)arg1;
+ (void)_decreaseReferenceCountForFontWithFileURL:(id)arg1;
+ (void)_increaseReferenceCountForFontWithFileURL:(id)arg1;
+ (void)unregisterFontWithURL:(id)arg1;
+ (BOOL)registerFontWithURL:(id)arg1 error:(id *)arg2;

@end

