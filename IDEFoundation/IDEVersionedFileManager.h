/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTDispatchLock, NSMutableSet;

@interface IDEVersionedFileManager : NSObject
{
    unsigned long long _batchEditModeCounter;
    NSMutableSet *_workingCopiesWeHaveTouchedInBatchEditMode;
    DVTDispatchLock *_batchEditLock;
}

+ (id)_errorWithUnderlyingErrors:(id)arg1 type:(int)arg2;
+ (id)_errorDescriptionForType:(int)arg1;
+ (void)_callCompletionBlockWithResult:(BOOL)arg1 error:(id)arg2 queue:(struct dispatch_queue_s *)arg3 completionBlock:(id)arg4;
+ (void)_delegatePerformBlock:(id)arg1;
+ (void)setDelegate:(id)arg1 withDispatchQueue:(struct dispatch_queue_s *)arg2;
+ (void)initialize;
- (void).cxx_destruct;
- (void)moveItemsAtFilePaths:(id)arg1 toFilePaths:(id)arg2 inContext:(id)arg3 completionBlockDispatchQueue:(struct dispatch_queue_s *)arg4 completionBlock:(id)arg5;
- (void)copyItemsAtFilePaths:(id)arg1 toFilePaths:(id)arg2 completionBlockDispatchQueue:(struct dispatch_queue_s *)arg3 completionBlock:(id)arg4;
- (void)addItemsAtFilePaths:(id)arg1 workspace:(id)arg2 force:(BOOL)arg3 completionBlockDispatchQueue:(struct dispatch_queue_s *)arg4 completionBlock:(id)arg5;
- (void)_addItemsAtFilePaths:(id)arg1 workspace:(id)arg2 force:(BOOL)arg3;
- (void)_addPathStrings:(id)arg1 toWorkingTree:(id)arg2;
- (void)removeItemsAtFilePaths:(id)arg1 moveToTrash:(BOOL)arg2 completionBlockDispatchQueue:(struct dispatch_queue_s *)arg3 completionBlock:(id)arg4;
- (void)createDirectoryAtFilePath:(id)arg1 withIntermediateDirectories:(BOOL)arg2 attributes:(id)arg3 completionBlockDispatchQueue:(struct dispatch_queue_s *)arg4 completionBlock:(id)arg5;
- (id)init;
- (void)dealloc;
- (void)setupBatchEditMode:(id)arg1;
- (BOOL)isInBatchEditMode;
- (void)endBatchEdits;
- (void)startBatchEdits;

@end

