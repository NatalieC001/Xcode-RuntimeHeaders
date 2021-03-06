/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTTextAnnotation.h"

@class NSMutableSet, NSSet, NSString;

@interface IBAnnotation : DVTTextAnnotation
{
    struct CGRect lastRectDrawnIn;
    NSMutableSet *referencingLocations;
    NSString *annotationName;
    NSString *containingClassName;
    long long relationshipType;
    NSString *expectedEndPointClassName;
    unsigned long long sourceModelContext;
    BOOL shouldDisplayInverted;
    BOOL rolledOver;
}

+ (id)invertedConnectionInterfaceStyle;
+ (id)connectionInterfaceStyle;
@property unsigned long long sourceModelContext; // @synthesize sourceModelContext;
@property(copy, nonatomic) NSString *expectedEndPointClassName; // @synthesize expectedEndPointClassName;
@property(nonatomic) BOOL shouldDisplayInverted; // @synthesize shouldDisplayInverted;
@property(readonly) NSSet *referencingLocations; // @synthesize referencingLocations;
@property(readonly) NSString *containingClassName; // @synthesize containingClassName;
@property(readonly) NSString *annotationName; // @synthesize annotationName;
@property(nonatomic) BOOL rolledOver; // @synthesize rolledOver;
@property(readonly) struct CGRect lastRectDrawnIn; // @synthesize lastRectDrawnIn;
- (void).cxx_destruct;
- (id)description;
- (void)drawSidebarMarkerIconInRect:(struct CGRect)arg1 textView:(id)arg2;
- (void)setWantsReplaceLineNumber:(BOOL)arg1;
- (void)updateMarkerImage;
@property(readonly) BOOL isConnected;
- (void)removeReferenceFromLocation:(id)arg1;
- (void)addReferenceFromLocation:(id)arg1;
- (void)purgeAllReferences;
@property(readonly) long long relationshipType; // @synthesize relationshipType;
- (id)initWithName:(id)arg1 inClassNamed:(id)arg2 sourceModelContext:(unsigned long long)arg3;

@end

