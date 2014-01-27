/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTLayoutView_ML.h"

@class DVTBorderedView;

@interface IBStructureAreaBackgroundView : DVTLayoutView_ML
{
    DVTLayoutView_ML *contentView;
    DVTBorderedView *borderedView;
    BOOL drawsWithActiveLook;
}

@property(retain, nonatomic) DVTLayoutView_ML *contentView; // @synthesize contentView;
@property(nonatomic) BOOL drawsWithActiveLook; // @synthesize drawsWithActiveLook;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)effectiveBackgroundColor;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (BOOL)acceptsFirstResponder;

@end

