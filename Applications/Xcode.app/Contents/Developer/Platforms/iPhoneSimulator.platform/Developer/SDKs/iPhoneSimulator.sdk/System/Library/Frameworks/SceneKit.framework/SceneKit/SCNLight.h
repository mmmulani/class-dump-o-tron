//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "SCNAnimatable.h"
#import "SCNTechniqueSupport.h"

@class NSString, SCNMaterialProperty, SCNOrderedDictionary, SCNTechnique;

@interface SCNLight : NSObject <SCNAnimatable, SCNTechniqueSupport, NSCopying, NSSecureCoding>
{
    id _reserved;
    struct __C3DLight *_light;
    unsigned int _isPresentationInstance:1;
    unsigned int _goboProjectShadows:1;
    unsigned int _castsShadow:1;
    unsigned int _usesDeferredShadows:1;
    unsigned int _usesModulatedMode:1;
    SCNOrderedDictionary *_animations;
    NSString *_name;
    NSString *_type;
    id _color;
    id _shadowColor;
    float _shadowRadius;
    double _orthographicScale;
    unsigned long long _shadowSampleCount;
    struct CGSize _shadowMapSize;
    unsigned long long _categoryBitMask;
    double _zNear;
    double _zFar;
    double _shadowBias;
    float _attenuations[6];
    SCNMaterialProperty *_gobo;
    SCNTechnique *_technique;
}

+ (_Bool)supportsSecureCoding;
+ (id)SCNJSExportProtocol;
+ (id)lightWithLightRef:(struct __C3DLight *)arg1;
+ (id)light;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_didDecodeSCNLight:(id)arg1;
- (void)_customDecodingOfSCNLight:(id)arg1;
- (void)_customEncodingOfSCNLight:(id)arg1;
@property(readonly, nonatomic) SCNMaterialProperty *gobo;
- (double)spotFalloffExponent;
- (void)setSpotFalloffExponent:(double)arg1;
@property(nonatomic) double spotOuterAngle;
@property(nonatomic) double spotInnerAngle;
@property(nonatomic) double attenuationFalloffExponent;
@property(nonatomic) double attenuationEndDistance;
@property(nonatomic) double attenuationStartDistance;
@property(nonatomic) struct CGSize shadowMapSize;
@property(nonatomic) double zNear;
@property(nonatomic) double zFar;
- (void)setUsesModulatedMode:(_Bool)arg1;
- (_Bool)usesModulatedMode;
- (void)setUsesDeferredShadows:(_Bool)arg1;
- (_Bool)usesDeferredShadows;
@property(nonatomic) long long shadowMode;
@property(nonatomic) unsigned long long shadowSampleCount;
@property(nonatomic) double shadowRadius;
@property(retain, nonatomic) id shadowColor;
@property(nonatomic) double shadowBias;
@property(nonatomic) double orthographicScale;
@property(retain, nonatomic) id color;
@property(nonatomic) unsigned long long categoryBitMask;
@property(nonatomic) _Bool castsShadow;
- (id)attributeForKey:(id)arg1;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
@property(copy, nonatomic) SCNTechnique *technique;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct __C3DAnimationChannel *)copyAnimationChannelForKeyPath:(id)arg1;
@property(copy, nonatomic) NSString *type;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)isAnimationForKeyPaused:(id)arg1;
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;
- (void)resumeAnimationForKey:(id)arg1;
- (void)pauseAnimationForKey:(id)arg1;
- (void)_pauseAnimation:(_Bool)arg1 forKey:(id)arg2;
- (id)animationForKey:(id)arg1;
- (void)_syncObjCAnimations;
- (id)animationKeys;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeAllAnimations;
- (void)addAnimation:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (struct __C3DAnimationManager *)animationManager;
- (struct __C3DAnimationChannel *)copyAnimationChannelForKeyPath:(id)arg1 property:(id)arg2;
- (void *)__CFObject;
- (id)scene;
- (struct __C3DScene *)sceneRef;
- (_Bool)isPausedOrPausedByInheritance;
- (id)presentationInstance;
- (id)presentationLight;
- (void)_syncObjCModel;
- (void)_syncEntityObjCModel;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
@property(copy, nonatomic) NSString *name;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (struct __C3DLight *)lightRef;
- (id)initPresentationLightWithLightRef:(struct __C3DLight *)arg1;
- (id)initWithLightRef:(struct __C3DLight *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
