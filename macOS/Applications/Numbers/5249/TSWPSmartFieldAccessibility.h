//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "__TSWPSmartFieldAccessibility_super.h"

#import "TSWPRepAccessibilityContainedElement-Protocol.h"

@class NSString, TSWPInteractiveCanvasControllerAccessibility, TSWPRepAccessibility;

@interface TSWPSmartFieldAccessibility : __TSWPSmartFieldAccessibility_super <TSWPRepAccessibilityContainedElement>
{
}

+ (Class)tsaxBaseSafeCategoryClass;
+ (id)tsaxTargetClassName;
@property(readonly, nonatomic) TSWPRepAccessibility *tsaxParentTextRep;
@property(nonatomic, setter=tsaxSetParentInteractiveCanvasController:) __weak TSWPInteractiveCanvasControllerAccessibility *tsaxParentInteractiveCanvasController;
@property(readonly, nonatomic) struct _NSRange tsaxFieldRange;
- (void)dealloc;
@property(nonatomic, setter=_tsaxSetParentInteractiveCanvasController:) __weak TSWPInteractiveCanvasControllerAccessibility *_tsaxParentInteractiveCanvasController;
- (id)tsaxTarget;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityNotifiesWhenDestroyed;
- (BOOL)accessibilityIsIgnored;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

