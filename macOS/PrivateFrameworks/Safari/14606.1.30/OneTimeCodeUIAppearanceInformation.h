//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImage, NSString;

__attribute__((visibility("hidden")))
@interface OneTimeCodeUIAppearanceInformation : NSObject
{
    NSString *_senderString;
    NSString *_codeStringForCompletionList;
    NSString *_codeStringForFunctionBar;
    NSImage *_senderImage;
}

+ (id)messagesIcon;
+ (id)_fetchInformationForOneTimeCode:(id)arg1;
+ (id)appearanceInformationForCode:(id)arg1;
@property(readonly, nonatomic) NSImage *senderImage; // @synthesize senderImage=_senderImage;
@property(readonly, copy, nonatomic) NSString *codeStringForFunctionBar; // @synthesize codeStringForFunctionBar=_codeStringForFunctionBar;
@property(readonly, copy, nonatomic) NSString *codeStringForCompletionList; // @synthesize codeStringForCompletionList=_codeStringForCompletionList;
@property(readonly, copy, nonatomic) NSString *senderString; // @synthesize senderString=_senderString;
- (void).cxx_destruct;

@end

