/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary;

@interface IBCLIOptionIndex : NSObject
{
    struct option *_longOptions;
    char *_shortOptions;
    NSDictionary *_optionIndexesByCodes;
    CDStruct_96d6799e *_descriptions;
    long long _descriptionCount;
    CDStruct_ac8ae556 *_alternates;
    long long _alternatesCount;
}

- (void).cxx_destruct;
- (BOOL)getOptionDescription:(CDStruct_96d6799e *)arg1 forCode:(long long)arg2;
- (const char *)shortOptions;
- (struct option *)longOptions;
- (void)dealloc;
- (id)initWithDescriptions:(CDStruct_96d6799e *)arg1 count:(long long)arg2 alternateNames:(CDStruct_ac8ae556 *)arg3 count:(long long)arg4;

@end

