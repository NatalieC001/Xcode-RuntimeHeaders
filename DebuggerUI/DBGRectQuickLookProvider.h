/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSViewController.h"

#import "IDEVariablesViewQuickLookProvider-Protocol.h"

@class DBGDataValue, DBGRectView, NSLayoutConstraint, NSString, NSTextField, NSURL, NSView;

@interface DBGRectQuickLookProvider : NSViewController <IDEVariablesViewQuickLookProvider>
{
    DBGDataValue *_dataValue;
    int _loadedState;
    DBGRectView *_rectView;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
    NSView *_xyContainerView;
    NSTextField *_xyLabel;
    NSTextField *_widthLabel;
    NSTextField *_heightLabel;
}

@property __weak NSTextField *heightLabel; // @synthesize heightLabel=_heightLabel;
@property __weak NSTextField *widthLabel; // @synthesize widthLabel=_widthLabel;
@property __weak NSTextField *xyLabel; // @synthesize xyLabel=_xyLabel;
@property __weak NSView *xyContainerView; // @synthesize xyContainerView=_xyContainerView;
@property __weak NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property __weak NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property __weak DBGRectView *rectView; // @synthesize rectView=_rectView;
@property int loadedState; // @synthesize loadedState=_loadedState;
- (void).cxx_destruct;
- (id)blockStartAddress;
- (void)cancelLoading;
@property(readonly) NSView *quickLookView;
- (void)_updateRectWithX:(id)arg1 y:(id)arg2 width:(id)arg3 height:(id)arg4;
- (void)_startRetrieval;
- (void)loadView;
- (id)initWithDataValue:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly) NSURL *existingURLToOpen;
@property(readonly) NSString *extensionForTemporaryFile;

@end

