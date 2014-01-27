/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEAssistantContext.h"

@class DVTLocale, NSArray, NSString, Xcode3Project;

@interface Xcode3ProjectLocalizationLocaleAssistantContext : IDEAssistantContext
{
    Xcode3Project *_project;
    NSArray *_localizableFiles;
    DVTLocale *_toLocale;
    NSString *_existingFileResolution;
}

@property(retain) NSString *existingFileResolution; // @synthesize existingFileResolution=_existingFileResolution;
@property(retain) DVTLocale *toLocale; // @synthesize toLocale=_toLocale;
@property(retain) NSArray *localizableFiles; // @synthesize localizableFiles=_localizableFiles;
@property(retain) Xcode3Project *project; // @synthesize project=_project;
- (void).cxx_destruct;
- (id)populateLocalizableFiles;
@property(readonly) NSString *assistantTitle;
- (id)initWithProject:(id)arg1 toLocale:(id)arg2;

@end

