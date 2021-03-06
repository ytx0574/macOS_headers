//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "KNMacShareMovieViewController-Protocol.h"

@class KNYouTubeCategory, KNYouTubeCategoryLoader, KNYouTubeSession, KNYouTubeUserLoader, NSArray, NSString, NSTextField;

@interface KNMacShareMovieToYouTubeOptionsViewController : NSViewController <KNMacShareMovieViewController>
{
    KNYouTubeUserLoader *_userLoader;
    KNYouTubeCategoryLoader *_categoryLoader;
    BOOL _personal;
    BOOL _loading;
    NSTextField *_termsOfServiceTextField;
    KNYouTubeSession *_session;
    NSString *_currentUserName;
    NSArray *_availableCategories;
    KNYouTubeCategory *_category;
    NSString *_movieTitle;
    NSString *_movieDescription;
    NSArray *_tags;
}

+ (id)p_termsOfServiceLinkTextAttributes;
@property(nonatomic, getter=isLoading) BOOL loading; // @synthesize loading=_loading;
@property(nonatomic, getter=isPersonal) BOOL personal; // @synthesize personal=_personal;
@property(copy, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(copy, nonatomic) NSString *movieDescription; // @synthesize movieDescription=_movieDescription;
@property(copy, nonatomic) NSString *movieTitle; // @synthesize movieTitle=_movieTitle;
@property(retain, nonatomic) KNYouTubeCategory *category; // @synthesize category=_category;
@property(copy, nonatomic) NSArray *availableCategories; // @synthesize availableCategories=_availableCategories;
@property(copy, nonatomic) NSString *currentUserName; // @synthesize currentUserName=_currentUserName;
@property(retain, nonatomic) KNYouTubeSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSTextField *termsOfServiceTextField; // @synthesize termsOfServiceTextField=_termsOfServiceTextField;
- (void).cxx_destruct;
- (void)p_cancelLoadingCategories;
- (void)p_loadCategoriesIfNeeded;
- (void)p_cancelLoadingCurrentUserName;
- (void)p_loadCurrentUserNameIfNeeded;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)p_updateIsLoading;
- (void)loadView;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

