//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXSmartAlbumQueryItem.h"

@class NSPopUpButton, NSTabView, NSTextField;

@interface IPXSmartAlbumQueryText : IPXSmartAlbumQueryItem
{
    NSTabView *_tabView;
    long long _qualifier;
    NSTextField *_textField;
    NSPopUpButton *_qualifierPopup;
}

+ (id)nibName;
@property __weak NSPopUpButton *qualifierPopup; // @synthesize qualifierPopup=_qualifierPopup;
@property __weak NSTextField *textField; // @synthesize textField=_textField;
@property long long qualifier; // @synthesize qualifier=_qualifier;
- (void).cxx_destruct;
- (id)nextKeyViewWithPreviousView:(id)arg1;
- (void)updateValueVisibility;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setQuery:(id)arg1;

@end

