//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBBackgroundView.h"

@class NSTextField;

@interface FBMultiPreviewErrorView : FBBackgroundView
{
    NSTextField *_textField;
}

@property(readonly) NSTextField *textField; // @synthesize textField=_textField;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_notifyOfFontChange;
- (void)_multipleFacesSelected:(id)arg1;
- (void)_oneFaceSelected:(id)arg1;
- (void)_noFacesSelected:(id)arg1;

@end

