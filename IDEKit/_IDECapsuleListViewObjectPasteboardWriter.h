/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSPasteboardWriting-Protocol.h"

@class NSArray, NSString;

@interface _IDECapsuleListViewObjectPasteboardWriter : NSObject <NSPasteboardWriting>
{
    unsigned long long _dragIdx;
    NSArray *_pasteboardTypes;
}

@property(retain) NSArray *pasteboardTypes; // @synthesize pasteboardTypes=_pasteboardTypes;
@property unsigned long long dragIdx; // @synthesize dragIdx=_dragIdx;
- (void).cxx_destruct;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
