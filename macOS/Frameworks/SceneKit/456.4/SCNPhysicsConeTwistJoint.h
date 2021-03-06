//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SceneKit/SCNPhysicsBehavior.h>

@class SCNPhysicsBody, SCNPhysicsWorld;

@interface SCNPhysicsConeTwistJoint : SCNPhysicsBehavior
{
    struct {
        SCNPhysicsBody *bodyA;
        struct CATransform3D frameA;
        SCNPhysicsBody *bodyB;
        struct CATransform3D frameB;
        double maximumAngularLimit1;
        double maximumAngularLimit2;
        double maximumTwistAngle;
    } _definition;
    struct btConeTwistConstraint *_constraint;
    SCNPhysicsWorld *_world;
}

+ (id)jointWithBody:(id)arg1 frame:(struct CATransform3D)arg2;
+ (id)jointWithBodyA:(id)arg1 frameA:(struct CATransform3D)arg2 bodyB:(id)arg3 frameB:(struct CATransform3D)arg4;
+ (BOOL)supportsSecureCoding;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_willRemoveFromPhysicsWorld:(id)arg1;
- (void)_addToPhysicsWorld:(id)arg1;
@property(nonatomic) double maximumTwistAngle;
@property(nonatomic) double maximumAngularLimit2;
@property(nonatomic) double maximumAngularLimit1;
@property(nonatomic) struct CATransform3D frameB;
@property(nonatomic) struct CATransform3D frameA;
@property(readonly, nonatomic) SCNPhysicsBody *bodyB;
@property(readonly, nonatomic) SCNPhysicsBody *bodyA;
- (id)initWithBody:(id)arg1 frame:(struct CATransform3D)arg2;
- (id)initWithBodyA:(id)arg1 frameA:(struct CATransform3D)arg2 bodyB:(id)arg3 frameB:(struct CATransform3D)arg4;
- (void)dealloc;

@end

