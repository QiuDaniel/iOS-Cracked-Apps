//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMCellComponent.h"

#import "FMPostComponentProtocol.h"

@class NSString;

@interface FMPostSubjectContentComponent : FMCellComponent <FMPostComponentProtocol>
{
    double _height;
    long long _maxTextLength;
    NSString *_contentText;
    NSString *_placeholder;
}

@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(copy, nonatomic) NSString *contentText; // @synthesize contentText=_contentText;
@property(nonatomic) long long maxTextLength; // @synthesize maxTextLength=_maxTextLength;
@property(nonatomic) double height; // @synthesize height=_height;
- (void).cxx_destruct;
- (_Bool)validPostContent;
- (_Bool)isPostContentEmpty;
- (void)composeItemDO:(id)arg1;
- (void)setupWithItemDO:(id)arg1;
- (Class)viewClass;
- (id)initWithParentComponent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

