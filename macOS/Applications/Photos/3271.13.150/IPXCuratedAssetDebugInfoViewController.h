//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UXKit/UXViewController.h>

@class NSButton, NSDictionary, NSTextField, NSTextView, NSView;

@interface IPXCuratedAssetDebugInfoViewController : UXViewController
{
    NSView *_headerBox;
    NSTextField *_titleTextField;
    NSTextView *_assetDetailsTextView;
    NSDictionary *_infoDictionary;
    NSButton *_cancelButton;
}

@property(retain, nonatomic) NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) NSDictionary *infoDictionary; // @synthesize infoDictionary=_infoDictionary;
@property(retain, nonatomic) NSTextView *assetDetailsTextView; // @synthesize assetDetailsTextView=_assetDetailsTextView;
@property(retain, nonatomic) NSTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
@property(retain, nonatomic) NSView *headerBox; // @synthesize headerBox=_headerBox;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)loadView;
- (void)a_cancelButtonPressed:(id)arg1;
- (id)initWithInfoDictionary:(id)arg1;

@end

