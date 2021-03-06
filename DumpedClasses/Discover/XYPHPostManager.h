//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface XYPHPostManager : NSObject
{
}

+ (_Bool)removeDraftsWithLocalDraftId:(id)arg1 error:(id *)arg2;
+ (_Bool)removeDraftsWithPostId:(id)arg1 error:(id *)arg2;
+ (_Bool)existDraftWithLocalDraftId:(id)arg1;
+ (_Bool)existDraftWithPostId:(id)arg1;
+ (void)removePostModelInPost:(id)arg1;
+ (void)addPostModelInPost:(id)arg1;
+ (id)draftPostModel;
+ (id)fetchPostModel:(id)arg1;
+ (id)fetchAllPostModel;
+ (id)fileListAtPostNotes;
+ (void)createPostNoteFromEdit:(id)arg1 inViewController:(id)arg2;
+ (void)createFromDraft:(id)arg1 inViewController:(id)arg2;
+ (void)createNewPostNotes:(id)arg1 inViewController:(id)arg2;
+ (void)createNewPostNote:(id)arg1;
+ (void)createNewVideoNotes:(id)arg1 inViewController:(id)arg2;
+ (void)createNewVideoNotes:(id)arg1;
+ (void)createNewPostModel:(id)arg1 metaData:(id)arg2;
+ (id)checkViaWWAN:(id)arg1 continuePost:(CDUnknownBlockType)arg2;
+ (id)checkLastPostNoteInViewController:(id)arg1 createNew:(CDUnknownBlockType)arg2;
+ (id)checkDiskSizeAvailableInViewController:(id)arg1 continuePost:(CDUnknownBlockType)arg2;
+ (void)postCurrentPostModel:(CDUnknownBlockType)arg1;
+ (void)cancelCurrentPost;
+ (long long)draftCount;
+ (id)postModelInPost;
+ (id)currentPostVideoModel;
+ (id)currentPostNoteModel;
+ (id)currentPostModel;
+ (void)setCurrentPostModel:(id)arg1;
+ (_Bool)editImageViewControllerShouldDismiss;
+ (void)setEditImageViewControllerShouldDismiss:(_Bool)arg1;

@end

