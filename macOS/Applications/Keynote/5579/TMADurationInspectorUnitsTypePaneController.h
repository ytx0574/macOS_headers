//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMAFormatInspectorPropertyVendorBasedInspectorPaneController.h"

@class NSSegmentedControl;

@interface TMADurationInspectorUnitsTypePaneController : TMAFormatInspectorPropertyVendorBasedInspectorPaneController
{
    NSSegmentedControl *mUnitsTypeControl;
}

@property NSSegmentedControl *unitsTypeControl; // @synthesize unitsTypeControl=mUnitsTypeControl;
- (void)dealloc;
- (void)loadView;
- (void)setDurationUnitsAutomatic:(id)arg1;
- (id)durationUnitsAutomatic;
- (void)unitsTypeControlClicked:(id)arg1;
- (id)nibName;

@end

