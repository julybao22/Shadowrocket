//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DLWStatisticsReader : NSObject
{
}

- (void)removeAtStartTime:(id)arg1;
- (void)truncate;
- (long long)count;
- (id)queryWithLessThan:(long long)arg1;
- (id)queryWithGreaterThan:(long long)arg1;
- (id)executeQuery:(id)arg1;
- (id)init;

@end
