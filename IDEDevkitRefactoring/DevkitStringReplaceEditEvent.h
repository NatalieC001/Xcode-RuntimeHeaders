/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEDevkitRefactoring/DevkitEditEvent.h>

@class NSString;

@interface DevkitStringReplaceEditEvent : DevkitEditEvent
{
    NSString *_oldString;
    NSString *_newString;
}

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)classCompareOrder;
- (id)toString;
- (id)fromString;
- (BOOL)applyChange:(id)arg1;
- (id)initWithLocation:(id)arg1 oldString:(id)arg2 newString:(id)arg3 priority:(long long)arg4;

@end

