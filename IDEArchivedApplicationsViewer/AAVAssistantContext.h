/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEAssistantContext.h"

@class DVTFilePath, IDEArchive, IDEArchiveIdentityFilter, NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface AAVAssistantContext : IDEAssistantContext
{
    NSMutableDictionary *_extraEntitlements;
    BOOL sourceIsTemporary;
    _Bool forceDisableCodesigning;
    _Bool forceDisablePackagesigning;
    BOOL _showingProgressAssistantOverlay;
    IDEArchive *archive;
    IDEArchiveIdentityFilter *codesignIdentityFilter;
    id <IDEArchivePackagerIdentityToken> codesignIdentityObject;
    DVTFilePath *sourcePath;
    NSString *defaultSaveName;
    NSArray *identityTokens;
}

+ (id)keyPathsForValuesAffectingInstallerIdentityObject;
@property BOOL showingProgressAssistantOverlay; // @synthesize showingProgressAssistantOverlay=_showingProgressAssistantOverlay;
@property(retain) NSArray *identityTokens; // @synthesize identityTokens;
@property _Bool forceDisablePackagesigning; // @synthesize forceDisablePackagesigning;
@property _Bool forceDisableCodesigning; // @synthesize forceDisableCodesigning;
@property BOOL sourceIsTemporary; // @synthesize sourceIsTemporary;
@property(copy) NSString *defaultSaveName; // @synthesize defaultSaveName;
@property(retain) DVTFilePath *sourcePath; // @synthesize sourcePath;
@property(retain) id <IDEArchivePackagerIdentityToken> codesignIdentityObject; // @synthesize codesignIdentityObject;
@property(retain) IDEArchiveIdentityFilter *codesignIdentityFilter; // @synthesize codesignIdentityFilter;
@property(retain) IDEArchive *archive; // @synthesize archive;
- (void).cxx_destruct;
- (void)removeExtraEntitlementsWithKeys:(id)arg1;
- (void)addExtraEntitlements:(id)arg1;
@property(readonly) NSDictionary *extraEntitlements;
@property(readonly) id <IDEArchivePackagerIdentityToken> installerIdentityObject;
- (id)workspaceWindow;

@end

