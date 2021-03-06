/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSViewController.h"

#import "IDEVariablesViewQuickLookProvider-Protocol.h"

@class GPUUniformStateValue, NSArray, NSCollectionView, NSMutableArray, NSScrollView, NSString, NSURL, NSView;

// Not exported
@interface GPUMatrixQuickLookProvider : NSViewController <IDEVariablesViewQuickLookProvider>
{
    int _loadedState;
    GPUUniformStateValue *_dataValue;
    int _columns;
    int _rows;
    NSArray *_data;
    NSMutableArray *_rowMajorMatrixData;
    NSScrollView *_matrixScrollView;
    NSCollectionView *_matrixCollectionView;
}

@property(nonatomic) __weak NSCollectionView *matrixCollectionView; // @synthesize matrixCollectionView=_matrixCollectionView;
@property(nonatomic) __weak NSScrollView *matrixScrollView; // @synthesize matrixScrollView=_matrixScrollView;
@property(retain, nonatomic) NSMutableArray *rowMajorMatrixData; // @synthesize rowMajorMatrixData=_rowMajorMatrixData;
@property int loadedState; // @synthesize loadedState=_loadedState;
- (void).cxx_destruct;
- (void)cancelLoading;
@property(readonly) NSView *quickLookView;
- (void)_setupCollectionView;
- (void)_setupData;
- (void)_parseData;
- (void)loadView;
- (id)initWithDataValue:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly) NSURL *existingURLToOpen;
@property(readonly) NSString *extensionForTemporaryFile;

@end

