//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesUI/ICAccessibilityExtras-Protocol.h>
#import <NotesUI/ICAnalyticsReporterAccessibilityDelegate-Protocol.h>

@interface ICAccessibility : NSObject <ICAccessibilityExtras, ICAnalyticsReporterAccessibilityDelegate>
{
}

+ (id)sharedInstance;
+ (id)synthesizeAccessibilityRightClickEventAtCenterOfView:(id)arg1;
- (BOOL)shouldPerformLoggingForSwitchControl;
- (BOOL)shouldPerformLoggingForVoiceOver;
- (BOOL)needsAccessibilityElements;
- (void)postAnnouncement:(id)arg1 withSender:(id)arg2 priority:(long long)arg3;

@end

