/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSDictionary;

@interface Xcode3InfoController : NSObject
{
    id <IDEBlueprint> _blueprint;
}

@property(readonly) id <IDEBlueprint> blueprint; // @synthesize blueprint=_blueprint;
- (void).cxx_destruct;
- (id)initWithBlueprint:(id)arg1;

// Remaining properties
@property(copy) NSDictionary *infoDictionary; // @dynamic infoDictionary;
@property(readonly) NSArray *slices; // @dynamic slices;

@end

