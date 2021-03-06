//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDKnob.h"

@interface TSCH3DRotateKnob : TSDKnob
{
    BOOL mIsBeingTracked;
}

@property(nonatomic) BOOL isBeingTracked; // @synthesize isBeingTracked=mIsBeingTracked;
- (BOOL)isHitByUnscaledPoint:(struct CGPoint)arg1 andRep:(id)arg2 returningDistance:(double *)arg3;
- (BOOL)isHitByNaturalPoint:(struct CGPoint)arg1 andRep:(id)arg2;
- (BOOL)obscuresKnob:(id)arg1;
- (BOOL)overlapsWithKnob:(id)arg1;
- (void)updateHitRegionPathForRep:(id)arg1;
@property(nonatomic, getter=isVisible) BOOL visible;
- (id)knobImage;
- (id)initWithRep:(id)arg1;

@end

