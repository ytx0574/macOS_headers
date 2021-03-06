//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextField.h>

@class TSTFormula;
@protocol TMAChartReferenceEditorFieldDelegate><NSObject;

@interface TMAChartReferenceEditorField : NSTextField
{
    BOOL mDidRenderFormulaForCurrentSelection;
    TSTFormula *_formula;
    id <TMAChartReferenceEditorFieldDelegate><NSObject> _editingDelegate;
}

@property(retain, nonatomic) id <TMAChartReferenceEditorFieldDelegate><NSObject> editingDelegate; // @synthesize editingDelegate=_editingDelegate;
@property(retain, nonatomic) TSTFormula *formula; // @synthesize formula=_formula;
- (void)dealloc;
- (id)p_darkAppearanceParagraphStyleName;
- (id)p_lightAppearanceParagraphStyleName;
- (id)p_darkAppearanceParagraphStyleIdentifier;
- (id)p_lightAppearanceParagraphStyleIdentifier;
- (id)p_paragraphStyleIdentifier:(BOOL)arg1;
- (id)p_fontColor:(BOOL)arg1;
- (double)p_fontSize;
- (id)p_fontName;
- (id)p_paragraphStyleWithContext:(id)arg1 isForDarkAppearance:(BOOL)arg2;
- (void)p_populateStylesheet:(id)arg1 withParagraphStyleForDarkAppearance:(BOOL)arg2;
- (void)p_populateStylesheetWithParagraphStylesIfNeeded:(id)arg1;
- (id)p_getParagraphStyleForLightAppearanceFromStylesheet:(id)arg1;
- (id)p_getParagraphStyleForDarkAppearanceFromStylesheet:(id)arg1;
- (id)paragraphStyle;
- (void)p_updateAppearance;
- (void)viewDidChangeEffectiveAppearance;
- (BOOL)becomeFirstResponder;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

