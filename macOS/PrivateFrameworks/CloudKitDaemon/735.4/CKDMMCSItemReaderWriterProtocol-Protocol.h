//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudKitDaemon/NSObject-Protocol.h>

@class CKDMMCSItem, CKDMMCSItemGroupContext, CKFileMetadata;

@protocol CKDMMCSItemReaderWriterProtocol <NSObject>
@property(readonly, nonatomic) CKDMMCSItem *MMCSItem;
@property(readonly, nonatomic) CKDMMCSItemGroupContext *MMCSRequest;
- (BOOL)writeBytesAtOffset:(unsigned long long)arg1 bytes:(char *)arg2 length:(unsigned long long)arg3 bytesWritten:(unsigned long long *)arg4 error:(id *)arg5;
- (BOOL)readBytesAtOffset:(unsigned long long)arg1 bytes:(char *)arg2 length:(unsigned long long)arg3 bytesRead:(unsigned long long *)arg4 error:(id *)arg5;
- (CKFileMetadata *)getFileMetadataWithError:(id *)arg1;
- (BOOL)closeWithError:(id *)arg1;
- (BOOL)openWithError:(id *)arg1;
@end

