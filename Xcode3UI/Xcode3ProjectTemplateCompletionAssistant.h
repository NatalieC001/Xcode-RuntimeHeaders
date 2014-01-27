/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDETemplateCompletionAssistant.h"

@class DVTReplacementView, NSView;

@interface Xcode3ProjectTemplateCompletionAssistant : IDETemplateCompletionAssistant
{
    NSView *_groupSubview;
    DVTReplacementView *_gitSubview;
    NSView *_workspaceSubview;
}

- (void).cxx_destruct;
- (void)handleSavePanelResult:(long long)arg1 completionBlock:(id)arg2;
- (void)didInstantiateItems:(id)arg1;
- (void)_updateDirectoryURL:(id)arg1;
- (id)gitController;
- (void)destinationManagerWorkspaceDidChange:(id)arg1;
- (BOOL)destinationManager:(id)arg1 shouldAddItemToMenu:(id)arg2;
- (BOOL)_isProjectSafeToReplaceAtURL:(id)arg1 busyProjectName:(id *)arg2;
- (void)panel:(id)arg1 didChangeToDirectoryURL:(id)arg2;
- (BOOL)panel:(id)arg1 validateURL:(id)arg2 error:(id *)arg3;
- (id)configuredSavePanel;
- (void)viewDidInstall;
- (void)primitiveInvalidate;
- (BOOL)shouldShowAccessoryView;

@end

