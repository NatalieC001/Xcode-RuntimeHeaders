/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DevkitLocation;

@interface DevkitEditEvent : NSObject
{
    DevkitLocation *_location;
    long long _priority;
}

- (void).cxx_destruct;
- (long long)priority;
- (id)filename;
- (BOOL)applyChange:(id)arg1;
- (long long)compare:(id)arg1;
- (unsigned long long)classCompareOrder;
- (id)location;
- (id)initWithLocation:(id)arg1 priority:(long long)arg2;

@end

