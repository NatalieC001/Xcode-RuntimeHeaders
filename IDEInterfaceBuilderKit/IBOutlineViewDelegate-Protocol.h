/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSTableViewDelegate-Protocol.h"

@protocol IBOutlineViewDelegate <NSTableViewDelegate>
- (BOOL)outlineView:(id)arg1 isGroupHeaderItem:(id)arg2;

@optional
- (void)outlineView:(id)arg1 handleRightOrControlLeftDrag:(id)arg2;
- (void)outlineView:(id)arg1 handleRightOrControlLeftClick:(id)arg2;
- (void)outlineView:(id)arg1 didHandleMouseDown:(id)arg2;
- (void)outlineView:(id)arg1 handleMouseDown:(id)arg2;
- (BOOL)outlineView:(id)arg1 hasDynamicHeightDeterminedByAutolayout:(id)arg2;
@end
