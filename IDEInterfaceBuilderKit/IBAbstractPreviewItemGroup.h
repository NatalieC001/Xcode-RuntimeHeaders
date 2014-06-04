/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h"

@class DVTDocumentLocation, DVTFileDataType, DVTMapTable, IDEFileReference, NSArray, NSImage, NSMutableArray, NSString;

@interface IBAbstractPreviewItemGroup : NSObject <IDEKeyDrivenNavigableItemRepresentedObject>
{
    NSMutableArray *_previewItems;
    DVTMapTable *_workspaceToItemMapTable;
    DVTMapTable *_workspaceToInvalidationObserverTable;
}

+ (id)fileDataType;
+ (id)URLScheme;
+ (id)sharedItemGroup;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly) NSString *navigableItem_name;
- (id)itemForFileURL:(id)arg1 inWorkspace:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSMutableArray *mutablePreviewItems; // @dynamic mutablePreviewItems;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) NSString *navigableItem_toolTip;
@property(copy) NSArray *previewItems; // @dynamic previewItems;
@property(readonly) Class superclass;

@end
