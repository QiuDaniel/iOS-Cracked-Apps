//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@interface ActionBaseItem : NSObject
{
    UIImage *_icon;
    NSString *_title;
    _Bool _isDestructiveButton;
    id <ActionItemDelegate> _itemDelegate;
}

+ (id)getTopViewController;
+ (id)actionItemWithDelegate:(id)arg1;
@property(nonatomic) _Bool isDestructiveButton; // @synthesize isDestructiveButton=_isDestructiveButton;
@property(nonatomic) __weak id <ActionItemDelegate> itemDelegate; // @synthesize itemDelegate=_itemDelegate;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (void)onItemClick;
- (void)dealloc;
- (id)initWithItemDelegate:(id)arg1;

@end

