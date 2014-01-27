/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"
#import "NSCoding-Protocol.h"

@class DVTDelayedInvocation, DVTDispatchLock, DVTHashTable, DVTStackBacktrace, IBDocument, NSArray, NSSet;

@interface IBClassDescriber : NSObject <NSCoding, DVTInvalidation>
{
    DVTDelayedInvocation *classDataIsUpdatingDelayedInvocation;
    NSSet *readonlyPartialsToIntegrateWhenClassProvidersAreFirstSet;
    NSSet *classProviderObservingTokens;
    DVTDispatchLock *ivarAccessLock;
    DVTHashTable *weakObservers;
    BOOL inIgnoreUpdatesBlock;
    BOOL classDataIsUpdating;
    NSArray *classProviders;
    IBDocument *document;
}

+ (void)initialize;
@property BOOL classDataIsUpdating; // @synthesize classDataIsUpdating;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)collectionTypeForToManyOutlet:(id)arg1 forClassNamed:(id)arg2 recursive:(BOOL)arg3;
- (id)memberTypeForToManyOutlet:(id)arg1 forClassNamed:(id)arg2 recursive:(BOOL)arg3;
- (id)typeForToOneOutlet:(id)arg1 forClassNamed:(id)arg2 recursive:(BOOL)arg3;
- (id)typeForAction:(id)arg1 forClassNamed:(id)arg2 recursive:(BOOL)arg3;
- (id)typeForNamedRelation:(id)arg1 ofRelationshipType:(long long)arg2 forClassNamed:(id)arg3 recursive:(BOOL)arg4;
- (id)toManyOutletsForClassNamed:(id)arg1 recursive:(BOOL)arg2;
- (id)toOneOutletsForClassNamed:(id)arg1 recursive:(BOOL)arg2;
- (id)actionsForClassNamed:(id)arg1 recursive:(BOOL)arg2;
- (id)namedRelationsOfRelationshipType:(long long)arg1 forClassNamed:(id)arg2 recursive:(BOOL)arg3;
- (id)namedRelationsOfRelationshipType:(long long)arg1 forClassNamed:(id)arg2 matchingClassNamed:(id)arg3 recursive:(BOOL)arg4;
- (id)namedRelationsOfRelationshipType:(long long)arg1;
- (id)commonBaseClassOfClassesNamed:(id)arg1;
- (id)suggestedSuperclassNameOfClassNamed:(id)arg1;
- (id)lineageOfClassNamed:(id)arg1;
- (BOOL)is:(id)arg1 aKindOf:(id)arg2;
- (BOOL)isClassNameCompletelyDescribed:(id)arg1;
- (id)classNamesReferencedByDocument;
- (id)classNamesForClassesWithActionsNamed:(id)arg1;
- (id)classNames;
- (id)descendantsOfClassesNamed:(id)arg1;
- (id)descendantsOfClassNamed:(id)arg1;
- (id)superclassOfClassNamed:(id)arg1;
- (BOOL)hasDescriptionOfClassNamed:(id)arg1;
- (id)subclassesOfClassNamed:(id)arg1;
- (id)unionedProviderValuesForBlock:(id)arg1;
- (id)firstNonNilStringFromProvidersForBlock:(id)arg1;
- (BOOL)doesAnyProviderReturnYESForBlock:(id)arg1;
- (void)notifyObserversOfModifiedClasses:(id)arg1;
- (id)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)ignoreUpdatesDuring:(id)arg1;
- (void)recursivelyIgnoreUpdatesInClassProviders:(id)arg1 startingAtIndex:(unsigned long long)arg2 withBlock:(id)arg3;
- (void)setInIgnoreUpdatesBlock:(BOOL)arg1;
- (BOOL)inIgnoreUpdatesBlock;
- (id)description;
@property(copy) NSArray *classProviders;
- (void)setClassProviderObservingTokens:(id)arg1;
- (id)classProviderObservingTokens;
@property(retain) IBDocument *document;
- (void)clearDocumentReference;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)restoreIndexTimeout;
- (void)overrideIndexTimeout:(unsigned long long)arg1;
- (void)integratePartialClassDescriptions:(id)arg1;
- (id)mergedPartialClassDescriptions;
- (id)gatherPartialDescriptionsForArchiving;
- (void)initializeClassDataIsUpdatingDelayedInvocation;
- (id)initWithDocument:(id)arg1;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

