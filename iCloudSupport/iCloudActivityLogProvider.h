/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDELogProvider.h"

#import "DVTInvalidation-Protocol.h"

@class DVTStackBacktrace, IDELogStore, IDEWorkspace;

@interface iCloudActivityLogProvider : IDELogProvider <DVTInvalidation>
{
    IDEWorkspace *_workspace;
    IDELogStore *_logStore;
}

+ (id)keyPathsForValuesAffectingLogRecords;
+ (id)logSectionForUUID:(id)arg1;
+ (id)logSectionForURL:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) IDELogStore *logStore; // @synthesize logStore=_logStore;
@property(readonly, nonatomic) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)domainIdentifier;
- (id)ideModelObjectTypeIdentifier;
- (id)logRecords;
- (id)initWithDomainItem:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

