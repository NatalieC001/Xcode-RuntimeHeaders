/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEDevkitRefactoring/DevkitTextFileChangeSet.h>

@class NSData;

@interface DevkitExistingTextFileChangeSet : DevkitTextFileChangeSet
{
    NSData *_textData;
}

- (void).cxx_destruct;
- (void)writeTempResults;
- (id)stringWithChangesUsingEncoding:(unsigned long long)arg1;
- (id)stringUsingEncoding:(unsigned long long)arg1;
- (void)setTextData:(id)arg1;
- (id)_stringMacOSRomanWithChanges;

@end

