/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTViewController.h"

#import "IDEBotSupportingEditorHostedViewController-Protocol.h"
#import "IDEStackedBarChartViewControllerDataSource-Protocol.h"
#import "IDEStackedBarChartViewControllerDelegate-Protocol.h"
#import "IDEStatusAndIssueCountsViewControllerDelegate-Protocol.h"
#import "NSPopoverDelegate-Protocol.h"

@class DVTObservingToken, DVTReplacementView, DVTStackView_ML, IDEBotEditorArchivesViewController, IDEBotEditorBannerViewController, IDEBotEditorIntegrationHistoryViewController, IDEBotEditorSectionDividerView, IDEBotIssueSummaryViewController, IDEBotSupportingEditor, IDEStackedBarChartBar, IDEStackedBarChartViewController, IDEStatusAndIssueCountsViewController, NSArray, NSImageView, NSPopover, NSScrollView, NSTextField;

@interface IDEBotEditorSummaryViewController : DVTViewController <IDEStackedBarChartViewControllerDataSource, IDEStatusAndIssueCountsViewControllerDelegate, IDEStackedBarChartViewControllerDelegate, NSPopoverDelegate, IDEBotSupportingEditorHostedViewController>
{
    DVTObservingToken *_botExecutionObservingToken;
    DVTObservingToken *_performsTestActionObservingToken;
    DVTObservingToken *_executionFinishedObservingToken;
    DVTObservingToken *_lastExecutionSchemeActionsInvocationRecordObservingToken;
    DVTObservingToken *_issueSummarySelectionObservingToken;
    DVTObservingToken *_contentViewLayoutObserver;
    DVTObservingToken *_simpleOperationStatusObservingToken;
    DVTObservingToken *_summaryGraphDataWatcher;
    IDEBotSupportingEditor *_botSupportingEditor;
    NSArray *_currentSelectedDocumentLocations;
    DVTStackView_ML *_stackView;
    NSScrollView *_scrollView;
    NSTextField *_noIntegrationsTextField;
    NSImageView *_dividerImageView;
    DVTStackView_ML *_infoStatusStackView;
    IDEBotEditorSectionDividerView *_unitTestHistoryDividerView;
    IDEStatusAndIssueCountsViewController *_statusAndIssueCountsViewController;
    IDEStackedBarChartViewController *_issueHistoryViewController;
    IDEStackedBarChartViewController *_unitTestHistoryViewController;
    IDEBotIssueSummaryViewController *_issueSummaryViewController;
    IDEBotEditorArchivesViewController *_archivesViewController;
    IDEBotEditorIntegrationHistoryViewController *_integrationHistoryController;
    DVTReplacementView *_bannerReplacmentView;
    IDEBotEditorBannerViewController *_bannerViewController;
    IDEStackedBarChartBar *_sucessBar;
    IDEStackedBarChartBar *_failureBar;
    IDEStackedBarChartBar *_warningBar;
    IDEStackedBarChartBar *_issueBar;
    IDEStackedBarChartBar *_errorBar;
    NSPopover *_graphPopover;
}

+ (BOOL)instancesCanContainDocumentLocation:(id)arg1;
+ (id)keyPathsForValuesAffectingCurrentSelectedItems;
@property(retain) NSPopover *graphPopover; // @synthesize graphPopover=_graphPopover;
@property(retain) IDEStackedBarChartBar *errorBar; // @synthesize errorBar=_errorBar;
@property(retain) IDEStackedBarChartBar *issueBar; // @synthesize issueBar=_issueBar;
@property(retain) IDEStackedBarChartBar *warningBar; // @synthesize warningBar=_warningBar;
@property(retain) IDEStackedBarChartBar *failureBar; // @synthesize failureBar=_failureBar;
@property(retain) IDEStackedBarChartBar *sucessBar; // @synthesize sucessBar=_sucessBar;
@property(retain) IDEBotEditorBannerViewController *bannerViewController; // @synthesize bannerViewController=_bannerViewController;
@property(retain) DVTReplacementView *bannerReplacmentView; // @synthesize bannerReplacmentView=_bannerReplacmentView;
@property(retain) IDEBotEditorIntegrationHistoryViewController *integrationHistoryController; // @synthesize integrationHistoryController=_integrationHistoryController;
@property(retain) IDEBotEditorArchivesViewController *archivesViewController; // @synthesize archivesViewController=_archivesViewController;
@property(retain) IDEBotIssueSummaryViewController *issueSummaryViewController; // @synthesize issueSummaryViewController=_issueSummaryViewController;
@property(retain) IDEStackedBarChartViewController *unitTestHistoryViewController; // @synthesize unitTestHistoryViewController=_unitTestHistoryViewController;
@property(retain) IDEStackedBarChartViewController *issueHistoryViewController; // @synthesize issueHistoryViewController=_issueHistoryViewController;
@property(retain) IDEStatusAndIssueCountsViewController *statusAndIssueCountsViewController; // @synthesize statusAndIssueCountsViewController=_statusAndIssueCountsViewController;
@property(retain) IDEBotEditorSectionDividerView *unitTestHistoryDividerView; // @synthesize unitTestHistoryDividerView=_unitTestHistoryDividerView;
@property(retain) DVTStackView_ML *infoStatusStackView; // @synthesize infoStatusStackView=_infoStatusStackView;
@property(retain) NSImageView *dividerImageView; // @synthesize dividerImageView=_dividerImageView;
@property(retain) NSTextField *noIntegrationsTextField; // @synthesize noIntegrationsTextField=_noIntegrationsTextField;
@property(retain) NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain) DVTStackView_ML *stackView; // @synthesize stackView=_stackView;
@property(readonly) NSArray *currentSelectedDocumentLocations; // @synthesize currentSelectedDocumentLocations=_currentSelectedDocumentLocations;
@property(retain, nonatomic) IDEBotSupportingEditor *botSupportingEditor; // @synthesize botSupportingEditor=_botSupportingEditor;
- (void).cxx_destruct;
- (void)selectDocumentLocations:(id)arg1;
- (void)testsFailedClickedInStatusAndIssueCountsViewController:(id)arg1;
- (void)analyzerIssuesClickedInStatusAndIssueCountsViewController:(id)arg1;
- (void)buildWarningsClickedInStatusAndIssueCountsViewController:(id)arg1;
- (void)buildErrorsClickedInStatusAndIssueCountsViewController:(id)arg1;
- (id)stackedBarChartViewController:(id)arg1 labelForColumn:(unsigned long long)arg2;
- (unsigned long long)stackedBarChartViewController:(id)arg1 countOfFailedTestsForColumn:(unsigned long long)arg2;
- (unsigned long long)stackedBarChartViewController:(id)arg1 countOfPassedTestsForColumn:(unsigned long long)arg2;
- (unsigned long long)stackedBarChartViewController:(id)arg1 countOfTestsForColumn:(unsigned long long)arg2;
- (BOOL)stackedBarChartViewController:(id)arg1 didIntegrationGenerateWarningsOrIssuesForColumn:(unsigned long long)arg2;
- (BOOL)stackedBarChartViewController:(id)arg1 didIntegrationFailWithBuildErrorsForColumn:(unsigned long long)arg2;
- (BOOL)stackedBarChartViewController:(id)arg1 didBotFailForIntegrationForColumn:(unsigned long long)arg2;
- (id)stackedBarChartViewController:(id)arg1 userInfoForColumn:(unsigned long long)arg2;
- (id)stackedBarChartViewController:(id)arg1 valueForStackedBarChartBar:(id)arg2 column:(unsigned long long)arg3;
- (unsigned long long)numberOfColumnsInStackedBarChartViewController:(id)arg1;
- (void)stackedBarChartViewController:(id)arg1 userClickedOnGraphColumn:(id)arg2 event:(id)arg3;
- (void)stackedBarChartViewController:(id)arg1 userMouseExitedGraph:(id)arg2 event:(id)arg3;
- (void)stackedBarChartViewController:(id)arg1 userMousedOverGraphColumn:(id)arg2 event:(id)arg3;
- (void)popoverDidClose:(id)arg1;
- (void)_showPopoverForBotExecution:(id)arg1 event:(id)arg2 graphEntry:(id)arg3 graphColumn:(id)arg4 graphController:(id)arg5;
- (void)_updateSummaryGraphMinimumColumns;
- (unsigned long long)_numberOfColumnsForSummaryGraphs;
- (void)viewWillUninstall;
@property(readonly) NSArray *currentSelectedItems;
- (void)viewDidInstall;
- (void)loadView;
- (void)_unbindStatusAndIssueCountsView;
- (void)_bindStatusAndIssueCountsView;
- (void)primitiveInvalidate;

@end

