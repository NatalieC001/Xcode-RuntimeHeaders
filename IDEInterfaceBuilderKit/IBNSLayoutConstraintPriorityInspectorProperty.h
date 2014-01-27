/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEInspectorProperty.h"

@class IBInspectorViewController, IBNSLayoutConstraintPriorityPopoverViewController, IBNSLayoutConstraintPrioritySlider, IDEInspectorKeyPath, NSPopover;

@interface IBNSLayoutConstraintPriorityInspectorProperty : IDEInspectorProperty
{
    IBNSLayoutConstraintPrioritySlider *slider;
    NSPopover *popover;
    IBNSLayoutConstraintPriorityPopoverViewController *popoverViewController;
    IDEInspectorKeyPath *_valueKeyPath;
}

- (void).cxx_destruct;
- (void)constraintPrioritySlider:(id)arg1 didStopTrackingAtPoint:(struct CGPoint)arg2;
- (void)constraintPrioritySlider:(id)arg1 didContinueTrackingAtPoint:(struct CGPoint)arg2;
- (void)constraintPrioritySlider:(id)arg1 didStartTrackingAtPoint:(struct CGPoint)arg2;
- (void)propertyViewWillUninstallFromWindow;
- (void)setupRefreshTriggersAndConfigure;
- (void)userDidChangeValue:(id)arg1;
- (void)refresh;
- (void)syncPopoverWithSliderKnob;
- (id)documentToUseForPriorityDescriptiveText;
- (BOOL)canTileIntoColumnsWithMinimumWidth:(double)arg1;
- (BOOL)canTileIntoColumnsWithProperty:(id)arg1;
- (double)baseline;
@property(readonly) IBInspectorViewController *inspectorController;
- (void)primitiveInvalidate;

@end

