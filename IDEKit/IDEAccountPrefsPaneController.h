/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEViewController.h>

#import "DVTTableViewDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class DVTBorderedView, DVTGradientImageButton, DVTGradientImagePopUpButton, DVTObservingToken, DVTReplacementView, DVTTableView, IDEControlGroup, IDESourceControlManager, IDEXcodeServerManager, NSArray, NSArrayController, NSOperationQueue;

@interface IDEAccountPrefsPaneController : IDEViewController <NSTableViewDataSource, NSTableViewDelegate, DVTTableViewDelegate>
{
    DVTObservingToken *_accountSelectionToken;
    NSOperationQueue *_multipeSelectionDeleteQueue;
    DVTBorderedView *_accountListBorderView;
    DVTBorderedView *_accountGlassBarBorderView;
    IDEControlGroup *_accountControlGroup;
    DVTTableView *_accountTableView;
    DVTReplacementView *_detailReplacementView;
    DVTGradientImagePopUpButton *_addButton;
    DVTGradientImageButton *_removeButton;
    DVTGradientImagePopUpButton *_actionButton;
    NSArrayController *_contentArrayController;
}

+ (void)importAccountsFromFilePath:(id)arg1;
+ (id)keyPathsForValuesAffectingContentArray;
+ (id)accountProviders;
@property(retain) NSArrayController *contentArrayController; // @synthesize contentArrayController=_contentArrayController;
@property(retain) DVTGradientImagePopUpButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain) DVTGradientImageButton *removeButton; // @synthesize removeButton=_removeButton;
@property(retain) DVTGradientImagePopUpButton *addButton; // @synthesize addButton=_addButton;
@property(retain) DVTReplacementView *detailReplacementView; // @synthesize detailReplacementView=_detailReplacementView;
@property(retain) DVTTableView *accountTableView; // @synthesize accountTableView=_accountTableView;
@property(retain) IDEControlGroup *accountControlGroup; // @synthesize accountControlGroup=_accountControlGroup;
@property(retain) DVTBorderedView *accountGlassBarBorderView; // @synthesize accountGlassBarBorderView=_accountGlassBarBorderView;
@property(retain) DVTBorderedView *accountListBorderView; // @synthesize accountListBorderView=_accountListBorderView;
- (void).cxx_destruct;
- (BOOL)tableView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (BOOL)_isGroupItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)exportAccounts:(id)arg1;
- (void)importAccounts:(id)arg1;
- (void)importAccountsFromFilePath:(id)arg1;
- (void)_accountImportCompletedWithSuccess:(BOOL)arg1 numberOfIdentities:(unsigned long long)arg2 numberOfProfiles:(unsigned long long)arg3 numberOfAccounts:(unsigned long long)arg4 error:(id)arg5;
- (void)removeAction:(id)arg1;
- (void)newServerAction:(id)arg1;
- (void)newRepositoryAction:(id)arg1;
- (void)newAppleIDAction:(id)arg1;
@property(readonly) NSArray *contentArray;
- (void)removePasswordAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)removeRepository:(id)arg1 operation:(id)arg2;
@property(readonly) IDESourceControlManager *sourceControlManager;
- (id)developerAccountManager;
@property(readonly) IDEXcodeServerManager *serverManager;
- (id)accountTableViewContextMenu;
- (void)_updateReplacementView;
- (void)windowDidUpdate:(id)arg1;
- (void)primitiveInvalidate;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

