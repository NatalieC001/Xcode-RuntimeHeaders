/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEComparisonEditor.h"

@class NSDictionary;

@interface IDEQuickLookComparisonEditor : IDEComparisonEditor
{
    NSDictionary *_previouslyRestoredStateDictionary;
}

+ (long long)version;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
- (void).cxx_destruct;
- (void)find:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)restoreInternalComparisonDocumentLocationWithStateDictionary:(id)arg1;
- (void)commitStateToDictionary:(id)arg1;
- (BOOL)disableBlame;
- (void)setEditorSubmode:(int)arg1;
- (void)_updateViewBasedOnSubmode;
- (struct CGRect)overlayFrameForView:(id)arg1;
- (BOOL)pathCell:(id)arg1 shouldSeparateDisplayOfChildItemsForItem:(id)arg2;

@end

