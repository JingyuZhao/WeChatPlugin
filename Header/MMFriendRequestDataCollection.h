//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface MMFriendRequestDataCollection : NSObject <PBCoding>
{
    NSMutableArray *data;
}

+ (void)initialize;
+ (void)_initPBTableOfMMFriendRequestDataCollection;
@property(retain, nonatomic) NSMutableArray *data; // @synthesize data;
- (void).cxx_destruct;
- (id)init;
- (const map_d2afedfd *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
