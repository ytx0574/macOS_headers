//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXCreateAlbumAction.h"

@class NSString;

@interface IPXCreateExtensionProjectAction : IPXCreateAlbumAction
{
    NSString *_extensionIdentifier;
    NSString *_documentType;
}

+ (long long)albumType;
+ (Class)classForAddVersionsToAlbumActionWithSharedContent:(BOOL)arg1;
@property(readonly, nonatomic) NSString *documentType; // @synthesize documentType=_documentType;
@property(readonly, nonatomic) NSString *extensionIdentifier; // @synthesize extensionIdentifier=_extensionIdentifier;
- (void).cxx_destruct;
- (id)progressMessageForUndo;
- (id)progressMessageForExecution;
- (id)createModelWithName:(id)arg1 parentFolder:(id)arg2;
- (id)defaultActionName;
- (id)actionName;
- (id)initWithName:(id)arg1 parentFolder:(id)arg2 initialVersions:(id)arg3 extensionIdentifier:(id)arg4 documentType:(id)arg5;

@end

