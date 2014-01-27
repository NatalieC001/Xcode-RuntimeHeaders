/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IDEDebugNavigableModel-Protocol.h"

@class DBGProcess, IDELaunchSession, NSArray, NSMutableArray, NSString;

@interface DBGNavigableQueue : NSObject <IDEDebugNavigableModel>
{
    NSString *_name;
    NSString *_displayName;
    DBGProcess *_process;
    NSMutableArray *_threads;
}

+ (BOOL)_queueNameBelongsToConcurrentQueues:(id)arg1;
+ (void)initialize;
@property(readonly) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (BOOL)isGroupHeader:(id)arg1;
- (id)navigableItem_image;
- (id)navigableItem_subtitle;
- (id)navigableItem_name;
@property(readonly) IDELaunchSession *launchSession;
@property(readonly) NSString *associatedProcessUUID;
- (id)initWithName:(id)arg1 displayName:(id)arg2 process:(id)arg3;

// Remaining properties
@property(readonly) NSMutableArray *mutableThreads; // @dynamic mutableThreads;
@property(copy) NSArray *threads; // @dynamic threads;

@end

