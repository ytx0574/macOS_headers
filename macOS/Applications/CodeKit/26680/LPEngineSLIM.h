//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LPCompiler, NSString;

__attribute__((visibility("hidden")))
@interface LPEngineSLIM : NSObject
{
    LPCompiler *_rootCompiler;
    NSString *_pathToSLIMCompiler;
}

- (id)versionOfExecutableAtPath:(id)arg1;
- (id)version;
- (void)compile:(id)arg1 fromTaskGroup:(id)arg2 withResultInfo:(id)arg3;
- (BOOL)switchToCompilerType:(long long)arg1 withPathToExternalCompiler:(id)arg2;
- (void)dealloc;
- (id)initWithRootCompiler:(id)arg1;

@end

