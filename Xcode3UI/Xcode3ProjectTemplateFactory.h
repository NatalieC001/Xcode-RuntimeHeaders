/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDETemplateFactory.h"

@interface Xcode3ProjectTemplateFactory : IDETemplateFactory
{
}

+ (id)projectPathForDestinationPath:(id)arg1 instantiationContext:(id)arg2;
- (void)instantiateTemplateForContext:(id)arg1 options:(id)arg2 whenDone:(id)arg3;
- (id)proposedFilePathsForContext:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)outputToContext:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)macroEngineForProject:(id)arg1 options:(id)arg2;
- (id)indentString;
- (id)projectForProjectPath:(id)arg1 context:(id)arg2;
- (id)templateConfigurationName:(id)arg1 projectNames:(id)arg2 templateNames:(id)arg3;
- (void)addSettings:(id)arg1 toConfigurationNamed:(id)arg2 inList:(id)arg3;
- (id)normalizeSettingsDictionary:(id)arg1;
- (id)projectInGroup:(id)arg1;
- (id)projectForItem:(id)arg1;
- (BOOL)canInstantiateTemplateForContext:(id)arg1;
- (BOOL)validatePackageName:(id)arg1 context:(id)arg2 error:(id *)arg3;

@end

