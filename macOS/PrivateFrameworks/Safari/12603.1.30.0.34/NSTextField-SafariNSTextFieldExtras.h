//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextField.h>

@interface NSTextField (SafariNSTextFieldExtras)
+ (id)safari_labelStyledTextFieldForDFR;
+ (id)safari_labelStyledTextFieldWithFrame:(struct CGRect)arg1;
+ (id)safari_labelStyledTextField;
- (void)safari_disableDFRAccessories;
- (id)_safari_textFieldStyledAsLabel;
- (void)safari_styleAsLabel;
- (double)safari_fittingHeightWithMaximumWidth:(double)arg1 maximumNumberOfLines:(unsigned long long)arg2;
- (double)safari_heightOfDisplayedText;
- (struct CGRect)safari_boundingRectForCharacterRange:(struct _NSRange)arg1;
- (BOOL)convertCommandReturnOrEnterToNewline:(id)arg1;
- (BOOL)isFirstResponder;
- (BOOL)hasNonWhitespaceCharacters;
- (void)safeSetStringValue:(id)arg1;
- (id)safeStringValue;
- (id)safeCurrentEditor;
@end

