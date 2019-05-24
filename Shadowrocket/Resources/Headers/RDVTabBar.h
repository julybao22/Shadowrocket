//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, RDVTabBarItem;
@protocol RDVTabBarDelegate;

@interface RDVTabBar : UIView
{
    _Bool _translucent;
    id <RDVTabBarDelegate> _delegate;
    NSArray *_items;
    RDVTabBarItem *_selectedItem;
    UIView *_backgroundView;
    double _itemWidth;
    struct UIEdgeInsets _contentEdgeInsets;
}

@property(nonatomic) double itemWidth; // @synthesize itemWidth=_itemWidth;
@property(nonatomic, getter=isTranslucent) _Bool translucent; // @synthesize translucent=_translucent;
@property struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak RDVTabBarItem *selectedItem; // @synthesize selectedItem=_selectedItem;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <RDVTabBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (_Bool)isAccessibilityElement;
- (void)tabBarItemWasSelected:(id)arg1;
- (double)minimumContentHeight;
- (void)setHeight:(double)arg1;
- (void)layoutSubviews;
- (void)commonInitialization;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
