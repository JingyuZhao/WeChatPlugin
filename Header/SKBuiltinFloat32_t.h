//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

__attribute__((visibility("hidden")))
@interface SKBuiltinFloat32_t : PBGeneratedMessage
{
    unsigned int hasFVal:1;
    float fVal;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetFVal:) float fVal; // @synthesize fVal;
@property(readonly, nonatomic) BOOL hasFVal; // @synthesize hasFVal;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

