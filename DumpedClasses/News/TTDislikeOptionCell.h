//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class TTActionSheetCellModel, TTAlphaThemedButton;

@interface TTDislikeOptionCell : UICollectionViewCell
{
    _Bool _showArrow;
    CDUnknownBlockType _didSelectedComplete;
    TTAlphaThemedButton *_titleButton;
    TTActionSheetCellModel *_model;
}

@property(retain, nonatomic) TTActionSheetCellModel *model; // @synthesize model=_model;
@property(retain, nonatomic) TTAlphaThemedButton *titleButton; // @synthesize titleButton=_titleButton;
@property(nonatomic) _Bool showArrow; // @synthesize showArrow=_showArrow;
@property(copy, nonatomic) CDUnknownBlockType didSelectedComplete; // @synthesize didSelectedComplete=_didSelectedComplete;
- (void).cxx_destruct;
- (void)configModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

