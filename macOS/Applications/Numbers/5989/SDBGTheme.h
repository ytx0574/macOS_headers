//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "SDNode.h"

@interface SDBGTheme : SDNode
{
}

+ (const char *)idPrefix;
+ (unsigned long long)childDescriptionCount;
+ (const CDStruct_183601bc **)childDescriptionArray;
+ (struct __CFSet **)childDescriptionSetPointer;
+ (struct __CFSet *)childDescriptionSet;
+ (void)initialize;
- (id)addMaster;
- (void)setName:(id)arg1;
- (id)name;
- (void)setSize:(struct CGSize)arg1;
- (struct CGSize)size;
- (id)styleSheet;
- (id)addMasterSlide;
- (id)masterSlideAt:(unsigned long long)arg1;
- (unsigned long long)masterSlideCount;
- (void)createTree;

@end

