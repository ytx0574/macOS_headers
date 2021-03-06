//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "RemindersList.h"

@class NSDate;

@interface RemindersDateList : RemindersList
{
    NSDate *_date;
}

+ (id)matchForActivity:(id)arg1;
@property(retain) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (BOOL)isMatchForActivity:(id)arg1;
- (id)representedActivity;
- (id)swipeType;
- (void)acceptReminder:(id)arg1;
- (id)newReminder;
- (id)dueDateForReminder;
- (BOOL)isVisibleInSidebar;
- (BOOL)acceptsReminders;
- (BOOL)isEditable;
- (BOOL)isReorderable;
- (id)identifier;
- (BOOL)shouldDisplayReminder:(id)arg1;
- (id)fetchReminders;
- (id)title;
- (void)updateWithDate:(id)arg1;

@end

