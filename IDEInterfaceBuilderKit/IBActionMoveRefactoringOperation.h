/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEInterfaceBuilderKit/IBRefactoringOperation.h>

@class NSString;

@interface IBActionMoveRefactoringOperation : IBRefactoringOperation
{
    NSString *actionName;
    NSString *oldClassName;
    NSString *newClassName;
}

- (void).cxx_destruct;
- (BOOL)refactorObject:(id)arg1 inDocument:(id)arg2 error:(id *)arg3;
- (id)newClassName;
- (id)oldClassName;
- (id)actionName;
- (id)initWithActionName:(id)arg1 oldClassName:(id)arg2 andNewClassName:(id)arg3;

@end

