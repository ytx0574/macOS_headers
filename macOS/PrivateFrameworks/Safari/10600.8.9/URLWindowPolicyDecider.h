//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface URLWindowPolicyDecider : NSObject
{
}

+ (long long)windowPolicyForOpeningCloudTabs;
+ (long long)windowPolicyFromNavigationAction:(id)arg1;
+ (long long)windowPolicyFromCurrentEventRespectingKeyEquivalents:(BOOL)arg1;
+ (long long)windowPolicyFromCurrentEvent;
+ (long long)windowPolicyFromCurrentEventRequireCommandKey:(BOOL)arg1;
+ (long long)windowPolicyFromEventModifierFlags:(unsigned int)arg1 requireCommandKey:(BOOL)arg2;
+ (long long)windowPolicyFromEventModifierFlags:(unsigned int)arg1 isMiddleMouseButton:(BOOL)arg2;
+ (long long)windowPolicyFromEventModifierFlags:(unsigned int)arg1 isMiddleMouseButton:(BOOL)arg2 requireCommandKey:(BOOL)arg3;

@end

