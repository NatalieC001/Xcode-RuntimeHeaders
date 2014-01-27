/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"
#import "IBDelegatedCanvasOverlayDelegate-Protocol.h"
#import "IBDocumentArbitrationResponder-Protocol.h"
#import "IBEndPointProvider-Protocol.h"
#import "NSDraggingDestination-Protocol.h"
#import "NSUserInterfaceValidations-Protocol.h"

@class DVTStackBacktrace, IBAbstractDocumentEditor, IBActionForwardingResponder, IBCancellationToken, IBCanvasViewController, IBDelegatedCanvasOverlay, IBDocument, IBEditor, IBEditorCanvasFrame, IBFieldEditor, IBHitDetectionMap, IBInlineStringEditingContext, IBLayoutManager, IBNavigationMenuController, IBTargetIdentifier, NSDate, NSEvent, NSSet;

@interface IBEditorCanvasFrameController : NSObject <IBDelegatedCanvasOverlayDelegate, IBEndPointProvider, NSUserInterfaceValidations, NSDraggingDestination, IBDocumentArbitrationResponder, DVTInvalidation>
{
    IBEditorCanvasFrame *editorCanvasFrame;
    IBFieldEditor *fieldEditor;
    IBEditor *activeEditor;
    BOOL shouldSelectDeepestObjectOnNextMouseUp;
    BOOL shouldPruneToSingleSelectionOnNextMouseUp;
    IBHitDetectionMap *decoratorActionMap;
    IBEditor *lastDragTarget;
    id lastDragIdentifiedObject;
    BOOL blockDragTillMove;
    BOOL blockDragTillHold;
    BOOL editorDidAcceptDragInfo;
    struct CGPoint lastDragPoint;
    long long lastDragSequenceNumber;
    NSEvent *lastLeftMouseDown;
    NSEvent *lastRightMouseDown;
    IBTargetIdentifier *targetIdentifier;
    IBInlineStringEditingContext *inlineStringEditingContext;
    IBDocument *document;
    IBEditor *baseEditor;
    IBAbstractDocumentEditor *documentEditor;
    NSDate *lastDragMouseMovedTime;
    BOOL dropInProgress;
    IBActionForwardingResponder *editorActionForwarder;
    IBActionForwardingResponder *frameControllerActionForwarder;
    id cursorRectAlwaysAtBackKey;
    IBNavigationMenuController *navigationMenuController;
    IBCancellationToken *lastDragTargetHighlightCancellationToken;
    unsigned long long targetIdentifierUseCount;
    id objectToMeasureSelectionSpeedFor;
    NSSet *objectsShowingTargetIdentifier;
    IBDelegatedCanvasOverlay *overlayView;
    id <DVTInvalidation> dragAndDropDrawingToken;
}

+ (void)initialize;
@property(copy) NSEvent *lastRightMouseDown; // @synthesize lastRightMouseDown;
@property(copy) NSEvent *lastLeftMouseDown; // @synthesize lastLeftMouseDown;
@property(nonatomic, getter=isDropInProgress) BOOL dropInProgress; // @synthesize dropInProgress;
@property(copy) NSDate *lastDragMouseMovedTime; // @synthesize lastDragMouseMovedTime;
@property(retain) IBAbstractDocumentEditor *documentEditor; // @synthesize documentEditor;
@property(retain) IBEditor *baseEditor; // @synthesize baseEditor;
@property(retain) IBDocument *document; // @synthesize document;
@property(retain, nonatomic) IBEditorCanvasFrame *editorCanvasFrame; // @synthesize editorCanvasFrame;
- (void).cxx_destruct;
- (void)document:(id)arg1 willRunArbitrationOfUnits:(id)arg2;
- (void)didResizeEditedObject:(id)arg1 withEvent:(id)arg2 fromKnob:(long long)arg3;
- (void)willResizeEditedObject:(id)arg1 withEvent:(id)arg2 fromKnob:(long long)arg3;
- (void)recursivelyVisitEditorsStartingAtEditedObject:(id)arg1 callingBlockForEachVisitedEditor:(id)arg2;
@property(readonly) IBLayoutManager *layoutManager;
- (void)sendEvent:(id)arg1;
- (BOOL)decoratorActionsShouldInterceptEvent:(id)arg1;
- (BOOL)decoratorActionsShouldInterceptEventAtPoint:(struct CGPoint)arg1;
- (id)connectionSourceForEvent:(id)arg1;
- (id)initialEndPointForPossibleEndPoints:(id)arg1 givenSelection:(id)arg2;
- (id)descendantEditorClickPassthroughTarget;
- (BOOL)shouldDragFrameWithMouseDownInContentRect:(id)arg1;
- (id)willTrackWithMouseDownEvent:(SEL)arg1;
- (void)noteMouseEvent:(id)arg1;
- (BOOL)openEditorWithKeyEvent:(id)arg1;
- (id)nextTabTargetRelativeToObject:(id)arg1 forEvent:(id)arg2;
- (id)tabOrderedChidren;
- (void)showSelectionMenuForEvent:(id)arg1;
- (id)navigationMenuController;
- (BOOL)actionAreaInterceptedEvent:(id)arg1;
- (BOOL)interceptDecoratorActionEvent:(id)arg1;
- (BOOL)shouldInterceptEvent:(id)arg1;
- (BOOL)isEventForFieldEditor:(id)arg1;
- (id)hitTestEditorView:(struct CGPoint)arg1;
- (id)contentView;
- (void)editor:(id)arg1 didDrawSelectionHighlightForObject:(id)arg2;
- (void)measureSelectionSpeedForObject:(id)arg1;
- (void)cursorUpdate:(id)arg1;
- (void)deselectObjectSubTrees:(id)arg1;
- (void)openEditorWithMouseEvent:(id)arg1;
- (void)openEditorWithDoubleLeftMouseDown:(id)arg1;
- (void)selectNextObjectWithMouseUp:(id)arg1;
- (BOOL)wouldObjectSelect:(id)arg1 onLeftMouseDownWithModifierFlags:(unsigned long long)arg2;
- (void)openEditorWithSingleMouseDown:(id)arg1;
- (id)activationActionForClickObject:(id)arg1 withModifierFlags:(unsigned long long)arg2 isRightMouse:(BOOL)arg3;
- (id)intendedTargetInCurrentContextStartingFromObject:(id)arg1;
- (id)firstInitiallySelectableObjectAtOrAbove:(id)arg1;
- (void)invokeDelete;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)delegatePasteboardActionValidationToCanvasView:(SEL)arg1;
- (void)duplicate:(id)arg1;
- (void)pasteExcludingConnections:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)delete:(id)arg1;
- (BOOL)isObjectRemovalValid;
- (id)pasteTarget;
- (id)cutCopyDeleteDuplicateTarget;
- (BOOL)shouldForwardPasteboardActionsToCanvasView;
- (BOOL)useViewBasedImageRepSnapshotForDragImage;
- (void)delegateDrawingDragAndDropInsertionHints;
- (id)lastDragTarget;
- (void)updateLastDragTargetEditedObject:(id)arg1 fromDraggingInfo:(id)arg2;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (void)dragTarget:(id)arg1 didAcceptDraggedObjects:(id)arg2 fromDragInfo:(id)arg3 context:(id)arg4;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingEnded:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (BOOL)autoscrollEditedContentWithExternalDragEvent:(id)arg1 animate:(BOOL)arg2;
- (BOOL)shouldBlockDragsUntilHoldFromDragginEntered;
- (id)draggedImageState:(id)arg1;
- (void)springForwardForDragAndDrop;
- (id)springLoadedObjectAtPoint:(struct CGPoint)arg1 criteria:(long long)arg2;
- (BOOL)prepareToAcceptDragInfo:(id)arg1;
- (id)dropTargetEditedObjectForDragInfo:(id)arg1;
- (void)registerDragTypes;
- (id)acceptedDragTypes;
- (BOOL)shouldFilterConstraintChoicesBasedUponAngleOfLine;
- (void)indicateConnectionSuccessForTarget:(id)arg1;
- (id)showTargetIdentifierForEndPoint:(id)arg1;
- (id)endPointsFromBackToFrontAtPoint:(struct CGPoint)arg1 inView:(id)arg2 withContext:(id)arg3 forDocument:(id)arg4 connectionHandler:(id *)arg5;
- (void)revealSpringLoadedObjectAndIndicateSuccess:(id)arg1;
- (id)springLoadedObjectInfoAtPoint:(struct CGPoint)arg1 inView:(id)arg2 withContext:(id)arg3 forDocument:(id)arg4;
- (void)synchronouslyFlashObjectToIndicateSuccess:(id)arg1;
- (id)specifierWithFrameGenerator:(id)arg1 label:(id)arg2;
- (id)showTargetIdentifierForObject:(id)arg1 showLabel:(BOOL)arg2 duration:(double)arg3;
- (id)showTargetIdentifierForObjects:(id)arg1 showLabels:(BOOL)arg2 duration:(double)arg3;
- (void)addDecoratorActionRect:(struct CGRect)arg1 forEditor:(id)arg2 clipToEditedObjectsClippedRect:(BOOL)arg3;
- (void)addDecoratorActionRect:(struct CGRect)arg1 withOrderingKey:(id)arg2;
- (void)trackMeasurementsWithEvent:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)displayLockedMemberAlertForMembers:(id)arg1;
- (void)invalidateCursorRects;
- (void)addCursorRect:(struct CGRect)arg1 cursor:(id)arg2 forObject:(id)arg3;
- (void)didResetCursorRects;
- (void)resetCursorRects;
- (void)willResetCursorRects;
- (void)positionChildEditorFrames;
- (id)overlayView;
- (id)accessibilityDescriptionForEditedObject;
- (id)accessibilityUniqueIDForEditedObject;
- (BOOL)editorCanvasFrame:(id)arg1 interceptDoubleClickedEvent:(id)arg2;
- (void)canvasFrameDidCompleteLayout;
- (void)canvasFrameHasKeyLookDidChange;
- (id)cursorRectAlwaysAtBackKey;
- (void)editorDidChangeSelection:(id)arg1;
- (id)editedObjectsFromBaseToActive;
- (id)editorsFromBaseToActive;
- (struct CGRect)clippedRectForObject:(id)arg1;
- (id)childOfObject:(id)arg1 atPoint:(struct CGPoint)arg2 criteria:(long long)arg3;
- (id)objectAtPoint:(struct CGPoint)arg1 criteria:(long long)arg2;
- (id)objectsFromBackToFrontAtPoint:(struct CGPoint)arg1 criteria:(long long)arg2;
- (void)depthFirstSearchForObjectsAtPoint:(struct CGPoint)arg1 criteria:(long long)arg2 fromObject:(id)arg3 clippedRect:(struct CGRect)arg4 clippingRectForChildren:(struct CGRect)arg5 addingObjectsToArray:(id)arg6;
- (struct CGRect)rectClippedToViewAncestorsForChild:(id)arg1 ofParent:(id)arg2;
- (struct CGRect)clipRect:(struct CGRect)arg1 toViewAncestorsOfObject:(id)arg2;
- (id)delegatedCanvasOverlay:(id)arg1 hitTest:(struct CGPoint)arg2;
- (void)decrementTargetIdentifierUseCount;
- (void)incrementTargetIdentifierUseCount;
- (void)primitiveInvalidate;
- (void)willRemoveFrameFromCanvas;
- (void)didAddFrameToCanvas;
- (void)deactivate;
- (void)activate;
- (void)willChangeEditorStack;
- (void)noteDescendant:(id)arg1 didChangeProperty:(id)arg2 fromValue:(id)arg3;
- (void)noteAncestor:(id)arg1 didChangeProperty:(id)arg2 fromValue:(id)arg3;
- (void)editStringWithContext:(id)arg1 forEditor:(id)arg2;
- (void)closeFieldEditorWithConclusion:(long long)arg1;
- (void)trackMeasurementLinesFromObjects:(id)arg1 toObject:(id)arg2 withEvent:(id)arg3;
- (unsigned long long)dragObjects:(id)arg1 withImage:(id)arg2 inMouseDownEvent:(id)arg3 mouseDraggedEvent:(id)arg4 imageLocation:(struct CGPoint)arg5 allowedOperations:(unsigned long long)arg6 editor:(id)arg7 draggingSourceContext:(id)arg8;
- (id)lastMouseDown;
- (id)targetIdentifier;
- (id)descendantActiveEditor;
- (id)parentController;
- (void)setActiveEditor:(id)arg1;
- (id)activeEditor;
- (BOOL)wouldEditObject:(id)arg1;
- (id)objectsFromBackToFrontForCriteria:(long long)arg1;
- (void)enumerateChildrenOfObject:(id)arg1 criteria:(long long)arg2 fromBackToFrontWithBlock:(id)arg3;
- (id)baseEditedObject;
- (struct CGRect)unclippedRectForObject:(id)arg1;
- (struct CGRect)rectForBaseEditedObject;
- (id)canvasView;
@property(readonly) IBCanvasViewController *canvasViewController;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

