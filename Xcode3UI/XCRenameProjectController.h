/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSWindowController.h"

@class IDEWorkspace, NSButton, NSButtonCell, NSDictionary, NSImageCell, NSMutableDictionary, NSOperationQueue, NSProgressIndicator, NSString, NSTextField, NSTreeController, PBXProject, XCProjectRenameItem, XCProjectRenameOutlineView;

@interface XCRenameProjectController : NSWindowController
{
    IDEWorkspace *_workspace;
    PBXProject *_project;
    NSString *_oldName;
    NSString *_newName;
    XCProjectRenameItem *_rootItem;
    NSMutableDictionary *_iconDictionary;
    NSDictionary *_blackAttributes;
    NSDictionary *_lightGrayAttributes;
    NSDictionary *_findMatchAttributes;
    NSDictionary *_replaceMatchAttributes;
    NSOperationQueue *_operationQueue;
    NSButtonCell *_buttonCell;
    NSImageCell *_imageCell;
    BOOL _processing;
    BOOL _displayingResults;
    NSTreeController *_treeController;
    NSTextField *_newNameLabel;
    NSTextField *_newNameField;
    NSTextField *_promptLabel;
    XCProjectRenameOutlineView *_preflightTable;
    NSButton *_okButton;
    NSButton *_cancelButton;
    NSProgressIndicator *_progressIndicator;
    NSTextField *_progressField;
}

@property BOOL processing; // @synthesize processing=_processing;
- (void).cxx_destruct;
- (void)cancelAction:(id)arg1;
- (void)okAction:(id)arg1;
- (id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2 item:(id)arg3;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (void)controlTextDidChange:(id)arg1;
- (void)displayResults;
- (BOOL)itemHasErrors:(id)arg1;
- (void)updateState;
- (void)updateAttributedProposedNamesFromItem:(id)arg1;
- (void)updateProposedNamesFromItem:(id)arg1;
- (void)setOriginalNamesForItem:(id)arg1;
- (id)itemsWithErrorsFromItem:(id)arg1;
- (void)validateItemsFromItem:(id)arg1;
- (void)removeUnnecessaryTargets;
- (void)coalesceChildrenOfItem:(id)arg1;
- (void)loadXibsForTargetItem:(id)arg1;
- (void)loadXibs;
- (void)finishLoading;
- (void)loadRenameItems;
- (void)loadIcons;
- (void)loadCells;
- (void)windowDidLoad;
- (id)initWithWorkspace:(id)arg1 project:(id)arg2 oldName:(id)arg3 newName:(id)arg4;

@end

