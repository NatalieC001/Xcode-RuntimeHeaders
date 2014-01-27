/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDENavigableItemDomainProvider.h"

@class DVTObservingToken, NSArray, NSMapTable, NSMutableArray;

@interface DBGMemoryDataExecutionEnvironmentWrapper : IDENavigableItemDomainProvider
{
    NSMutableArray *_processWrappers;
    NSMapTable *_launchSessionsToObserverTokens;
    DVTObservingToken *_workspacesLaunchSessionsObserver;
    DVTObservingToken *_workspaceValidObserver;
}

+ (id)domainObjectForWorkspace:(id)arg1;
+ (id)modelForWorkspace:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (unsigned long long)navigableItem_indexOfRepresentedObjectForIdentifier:(id)arg1 inRelationshipKeyPath:(id)arg2;
- (id)navigableItem_identifierForRepresentedObjectAtIndex:(unsigned long long)arg1 inRelationshipKeyPath:(id)arg2;
- (void)_addMemoryDataGroupForProcess:(id)arg1;
- (void)_removeMemoryDataGroupForProcess:(id)arg1;
- (void)_handleTargetProcessChanged:(id)arg1;
- (void)_handleLaunchSessionsAdded:(id)arg1;
- (void)_handleLaunchSessionsRemoved:(id)arg1;
- (void)_handleLaunchSessionsChanged:(id)arg1;
- (id)_initWithWorkspace:(id)arg1;

// Remaining properties
@property(readonly) NSMutableArray *mutableProcessWrappers; // @dynamic mutableProcessWrappers;
@property(readonly) NSArray *processWrappers; // @dynamic processWrappers;

@end

