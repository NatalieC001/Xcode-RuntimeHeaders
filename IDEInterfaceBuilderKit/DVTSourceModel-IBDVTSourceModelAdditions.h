/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTSourceModel.h"

@interface DVTSourceModel (IBDVTSourceModelAdditions)
- (id)sourceModelInfoForSourceModelItem:(id)arg1 matchingSourceModelItemContextMask:(unsigned long long)arg2;
- (id)sourceModelInfoForBindingObjCPropertyContextItem:(id)arg1;
- (id)sourceModelInfoForBindingObjCInstanceVariableContextItem:(id)arg1;
- (id)firstSourceModelItemOccurringBeforeRange:(struct _NSRange)arg1 fromSourceModelItem:(id)arg2;
- (id)extendedTypeNameFromSourceModelItem:(id)arg1 range:(struct _NSRange *)arg2;
- (id)sourceModelInfoForObjCInstanceVariableOutletContextItem:(id)arg1;
- (id)sourceModelInfoForObjCPropertyOutletContextItem:(id)arg1;
- (id)sourceModelInfoForObjCInstanceVariableOutletCollectionContextItem:(id)arg1;
- (id)sourceModelInfoForObjCPropertyOutletCollectionContextItem:(id)arg1;
- (id)sourceModelInfoForActionContextItem:(id)arg1 languageSpecification:(id)arg2;
- (BOOL)sourceModelItemHasDescendantIBActionItem:(id)arg1;
@end

