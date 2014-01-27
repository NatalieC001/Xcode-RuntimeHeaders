/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Xcode3UI/Xcode3TargetCoordinator.h>

@class PBXTarget;

@interface Xcode3TargetBuildSettingsCoordinator : Xcode3TargetCoordinator
{
    PBXTarget *_pbxTarget;
}

@property(readonly, nonatomic) PBXTarget *pbxTarget; // @synthesize pbxTarget=_pbxTarget;
- (void).cxx_destruct;
- (id)stringsByEvaluatingPropertyString:(id)arg1 inAllConfigurationsForWorkspaceArenaSnapshot:(id)arg2;
- (id)valueForTargetAttributeKey:(id)arg1;
- (void)setValue:(id)arg1 forTargetAttributeKey:(id)arg2;
- (void)setValue:(id)arg1 forString:(id)arg2 deleteSettingIfValueIsNilOrEmpty:(BOOL)arg3;
- (void)setValue:(id)arg1 forString:(id)arg2;
- (id)expandedValueForString:(id)arg1;
- (id)initWithTarget:(id)arg1;

@end

