//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SceneKit/SCNPhysicsBehavior.h>

@class NSArray, SCNPhysicsBody, SCNPhysicsWorld;

@interface SCNPhysicsVehicle : SCNPhysicsBehavior
{
    SCNPhysicsBody *_chassisBody;
    NSArray *_wheels;
    SCNPhysicsWorld *_world;
    struct btRaycastVehicle *_vehicle;
    double _speedKmHour;
}

+ (_Bool)supportsSecureCoding;
+ (id)SCNJSExportProtocol;
+ (id)vehicleWithChassisBody:(id)arg1 wheels:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_customDecodingOfSCNPhysicsVehicle:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (id)wheelAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) double speedInKilometersPerHour;
- (void)_update;
- (void)_handleCreateIfNeeded:(_Bool)arg1;
- (void)_createWheel:(id)arg1;
- (void)applyBrakingForce:(double)arg1 forWheelAtIndex:(long long)arg2;
- (void)applyEngineForce:(double)arg1 forWheelAtIndex:(long long)arg2;
- (void)setSteeringAngle:(double)arg1 forWheelAtIndex:(long long)arg2;
- (void)_willRemoveFromPhysicsWorld:(id)arg1;
- (void)_addToPhysicsWorld:(id)arg1;
- (id)physicsWorld;
- (struct btRaycastVehicle *)btVehicle;
@property(readonly, nonatomic) NSArray *wheels;
@property(readonly, nonatomic) SCNPhysicsBody *chassisBody;
- (void)dealloc;
- (id)initWithChassisBody:(id)arg1 wheels:(id)arg2;
- (void)_initializeWheelsArray;

@end
