//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "App_Store.ClickableView.h"

#import "_TtP14AppStoreKitMac24OfferButtonPresenterView_-Protocol.h"

@class NSString;

@interface App_Store.OfferButtonView : App_Store.ClickableView <_TtP14AppStoreKitMac24OfferButtonPresenterView_>
{
    // Error parsing type: , name: presenter
    // Error parsing type: , name: effectShape
    // Error parsing type: , name: outlineShape
    // Error parsing type: , name: imageView
    // Error parsing type: , name: label
    // Error parsing type: , name: subtitleLabel
    // Error parsing type: , name: tintColor
    // Error parsing type: , name: layoutDelegate
    // Error parsing type: , name: cancelConfirmationCallback
    // Error parsing type: , name: cancelConfirmationEventMonitor
    // Error parsing type: , name: windowDidResignKeyObserver
    // Error parsing type: , name: isConfigurationLayoutEnabled
    // Error parsing type: , name: _configuration
    // Error parsing type: , name: accessibilityOfferIsImmediateBuy
    // Error parsing type: , name: cachedLockupCustomActions
}

- (void).cxx_destruct;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityChildren;
- (id)accessibilityTitle;
- (id)accessibilityHelp;
- (id)accessibilityLabel;
- (id)accessibilityRole;
- (BOOL)accessibilityShouldUseUniqueId;
- (BOOL)isAccessibilityElement;
- (void)jet_traitCollectionDidChange:(id)arg1;
- (void)layout;
- (struct JEMeasurements)measurementsWithFitting:(struct CGSize)arg1 in:(id)arg2;
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
- (BOOL)isFlipped;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)performWithAction:(id)arg1 sender:(id)arg2;
- (void)removeAllActionsForTarget:(id)arg1;
- (void)addButtonTappedTarget:(id)arg1 action:(SEL)arg2;
- (void)stopMonitoringEventsForConfirmationCancellation;
- (void)startMonitoringEventsForConfirmationCancellationWithCancelConfirmationCallback:(CDUnknownBlockType)arg1;
- (void)showWithUpdateError:(id)arg1;
- (void)showWithProgress:(double)arg1 aligned:(long long)arg2 theme:(id)arg3 isCompact:(BOOL)arg4;
- (void)showRedownloadWithAligned:(long long)arg1 theme:(id)arg2 isCompact:(BOOL)arg3;
- (void)showWithText:(id)arg1 theme:(id)arg2;
- (void)showWithText:(id)arg1 subtitleText:(id)arg2 subtitlePosition:(long long)arg3 theme:(id)arg4;
- (void)showWithEnabled:(BOOL)arg1;
- (void)showLoadingWithAligned:(long long)arg1 theme:(id)arg2 isCompact:(BOOL)arg3;
- (void)showLoading;
- (void)hideLoading;
@property(nonatomic, copy) NSString *accessibilityOfferButtonString;

// Remaining properties
@property(nonatomic, readonly) BOOL flipped;

@end

