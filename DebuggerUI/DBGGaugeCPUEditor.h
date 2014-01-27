/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DebuggerUI/DBGGaugeEditor.h>

#import "IDEDebugGaugeReportTopSectionContentDelegate-Protocol.h"
#import "IDEGraphDelegate-Protocol.h"
#import "iCloudMonitorLineProcessor-Protocol.h"

@class DVTCapacitySegment, DVTMeterView, DVTStackView_AppKitAutolayout, IDEPlotGraph, NSButton, NSMutableArray, NSMutableString, NSTextField, NSView;

@interface DBGGaugeCPUEditor : DBGGaugeEditor <IDEDebugGaugeReportTopSectionContentDelegate, IDEGraphDelegate, iCloudMonitorLineProcessor>
{
    NSView *_topSectionCapacityView;
    DVTCapacitySegment *_processCapacitySegment;
    DVTCapacitySegment *_remainderCapacitySegment;
    DVTStackView_AppKitAutolayout *_threadsStackView;
    NSMutableArray *_threadSlices;
    NSTextField *_sampleTextField;
    BOOL _breakpointsWasActivated;
    BOOL _isSampling;
    NSMutableString *_localSampleText;
    NSView *_topSectionSpeedometerView;
    DVTMeterView *_topSectionSpeedometer;
    NSTextField *_topSectionSpeedNumberLabel;
    NSTextField *_topSectionSpeedUnitLabel;
    NSView *_utilizationGraphContainer;
    NSTextField *_utilizationDescription1;
    NSTextField *_utilizationDuration;
    NSTextField *_utilizationHigh;
    NSTextField *_utilizationLow;
    IDEPlotGraph *_utilizationGraph;
    NSButton *_sampleButton;
    NSButton *_profileButton;
}

@property __weak NSButton *profileButton; // @synthesize profileButton=_profileButton;
@property __weak NSButton *sampleButton; // @synthesize sampleButton=_sampleButton;
@property __weak IDEPlotGraph *utilizationGraph; // @synthesize utilizationGraph=_utilizationGraph;
@property __weak NSTextField *utilizationLow; // @synthesize utilizationLow=_utilizationLow;
@property __weak NSTextField *utilizationHigh; // @synthesize utilizationHigh=_utilizationHigh;
@property __weak NSTextField *utilizationDuration; // @synthesize utilizationDuration=_utilizationDuration;
@property __weak NSTextField *utilizationDescription1; // @synthesize utilizationDescription1=_utilizationDescription1;
@property __weak NSView *utilizationGraphContainer; // @synthesize utilizationGraphContainer=_utilizationGraphContainer;
@property __weak NSTextField *topSectionSpeedUnitLabel; // @synthesize topSectionSpeedUnitLabel=_topSectionSpeedUnitLabel;
@property __weak NSTextField *topSectionSpeedNumberLabel; // @synthesize topSectionSpeedNumberLabel=_topSectionSpeedNumberLabel;
@property __weak DVTMeterView *topSectionSpeedometer; // @synthesize topSectionSpeedometer=_topSectionSpeedometer;
@property __weak NSView *topSectionSpeedometerView; // @synthesize topSectionSpeedometerView=_topSectionSpeedometerView;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)monitor:(id)arg1 didReceiveResponseCode:(unsigned long long)arg2 response:(id)arg3 forToken:(id)arg4 responseContinues:(BOOL)arg5;
- (id)translateValue:(id)arg1 keypath:(id)arg2;
- (id)colorForChartNamed:(id)arg1;
- (id)topSectionTitleAccessoryView;
- (id)topSectionComponentEntries;
- (id)topSectionTitle;
- (void)addSectionsToView:(id)arg1;
- (BOOL)hasDefaultTopSection;
- (void)sample:(id)arg1;
- (void)_updateThreadSlicesToView:(id)arg1;
- (id)instrumentsToolIdentifierForAnalysis;
- (void)_setupTopSectionComponentViews;
- (void)_setupSpeedometer;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 document:(id)arg3;

@end

