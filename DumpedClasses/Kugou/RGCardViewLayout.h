//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewFlowLayout.h"

@class NSIndexPath;

@interface RGCardViewLayout : UICollectionViewFlowLayout
{
    double previousOffset;
    NSIndexPath *mainIndexPath;
    NSIndexPath *movingInIndexPath;
    double diffrence;
}

- (void).cxx_destruct;
- (struct CATransform3D)transformfromAngle:(double)arg1 height:(double)arg2 xAxis:(_Bool)arg3;
- (struct CATransform3D)transformFromView:(id)arg1;
- (_Bool)xAxisForView:(id)arg1;
- (double)angleForView:(id)arg1;
- (double)heightOffsetForView:(id)arg1;
- (double)baseOffsetForView:(id)arg1;
- (struct CGRect)newFrameFromOriginal:(struct CGRect)arg1 withView:(id)arg2;
- (void)applyTransformToLayoutAttributes:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)setupLayout;
- (void)prepareLayout;

@end

