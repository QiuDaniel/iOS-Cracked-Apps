//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class FBStarRatingsESRView, FBStarRatingsUserData;
@protocol FBStarRatingsESRViewControllerDelegate;

@interface FBStarRatingsESRViewController : UIViewController
{
    FBStarRatingsUserData *_userData;
    FBStarRatingsESRView *_esrView;
    id <FBStarRatingsESRViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <FBStarRatingsESRViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithUserData:(id)arg1;

@end

