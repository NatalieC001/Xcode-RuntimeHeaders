/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@class NSShadow;

@interface SKEShadowBox : NSView
{
    NSShadow *shadow;
    unsigned long long shadowedEdges;
}

@property(nonatomic) unsigned long long shadowedEdges; // @synthesize shadowedEdges;
@property(copy, nonatomic) NSShadow *shadow; // @synthesize shadow;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

