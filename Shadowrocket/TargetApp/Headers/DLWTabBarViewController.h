//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RDVTabBarController.h"

#import "RDVTabBarControllerDelegate-Protocol.h"

@class NSString;

@interface DLWTabBarViewController : RDVTabBarController <RDVTabBarControllerDelegate>
{
    NSString *_searchControllerQuery;
}

@property(copy, nonatomic) NSString *searchControllerQuery; // @synthesize searchControllerQuery=_searchControllerQuery;
- (void).cxx_destruct;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (_Bool)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;
- (void)reloadNavigationControllers;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
