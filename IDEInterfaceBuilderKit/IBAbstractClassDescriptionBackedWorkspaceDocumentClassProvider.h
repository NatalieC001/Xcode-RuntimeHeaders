/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEInterfaceBuilderKit/IBAbstractWorkspaceDocumentClassProvider.h>

@class IBClassDescriptionBasedClassProvider, IBTargetRuntime;

@interface IBAbstractClassDescriptionBackedWorkspaceDocumentClassProvider : IBAbstractWorkspaceDocumentClassProvider
{
    IBClassDescriptionBasedClassProvider *backingClassProvider;
    id <DVTCancellable> backingClassProviderObservingToken;
}

+ (id)retainedClassProviderForWorkspaceDocument:(id)arg1 targetRuntime:(id)arg2;
@property(readonly) IBClassDescriptionBasedClassProvider *backingClassProvider; // @synthesize backingClassProvider;
- (void).cxx_destruct;
- (id)collectionTypeForToManyOutlet:(id)arg1 forClassNamed:(id)arg2;
- (id)typeForNamedRelation:(id)arg1 ofRelationshipType:(long long)arg2 forClassNamed:(id)arg3;
- (id)namedRelationsOfRelationshipType:(long long)arg1 forClassNamed:(id)arg2 withLineage:(id)arg3 recursive:(BOOL)arg4;
- (id)namedRelationsOfRelationshipType:(long long)arg1;
- (id)classNamesForClassesWithActionsNamed:(id)arg1;
- (id)classNames;
- (id)descendantsOfClassesNamed:(id)arg1;
- (id)subclassesOfClassNamed:(id)arg1;
- (id)superclassOfClassNamed:(id)arg1;
- (BOOL)hasDescriptionOfClassNamed:(id)arg1;
- (id)partialClassDescriptionsForEncodingClassNamed:(id)arg1;
@property(readonly) IBTargetRuntime *targetRuntime;
- (id)referenceKey;
- (id)description;
- (void)primitiveInvalidate;
- (id)initWithWorkspaceDocument:(id)arg1 targetRuntime:(id)arg2;

@end

