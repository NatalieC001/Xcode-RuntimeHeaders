/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTDocumentLocation.h"

@class NSIndexPath;

@interface IDEBotSummaryDocumentLocation : DVTDocumentLocation
{
    unsigned long long _selectedArea;
    NSIndexPath *_indexPath;
}

@property(readonly) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(readonly) unsigned long long selectedArea; // @synthesize selectedArea=_selectedArea;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithDocumentURL:(id)arg1 timestamp:(id)arg2 selectedArea:(unsigned long long)arg3 indexPath:(id)arg4;

@end

