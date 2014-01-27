/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSScrollView.h"

@class IBAccessorizedScrollViewButtonBar;

@interface IBAccessorizedScrollView : NSScrollView
{
    BOOL _insetsButtonBarWithScrollers;
    IBAccessorizedScrollViewButtonBar *_buttonBar;
    double _buttonBarInset;
}

@property(nonatomic) BOOL insetsButtonBarWithScrollers; // @synthesize insetsButtonBarWithScrollers=_insetsButtonBarWithScrollers;
@property(nonatomic) double buttonBarInset; // @synthesize buttonBarInset=_buttonBarInset;
@property(readonly) IBAccessorizedScrollViewButtonBar *buttonBar; // @synthesize buttonBar=_buttonBar;
- (void).cxx_destruct;
- (void)bringButtonBarToFront;
- (void)tile;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

