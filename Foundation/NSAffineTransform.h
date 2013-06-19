/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface NSAffineTransform : NSObject <NSCopying, NSCoding>
{
    CDStruct_a65eae4f _transformStruct;
}

+ (id)transform;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setTransformStruct:(CDStruct_a65eae4f)arg1;
- (CDStruct_a65eae4f)transformStruct;
- (struct CGSize)transformSize:(struct CGSize)arg1;
- (struct CGPoint)transformPoint:(struct CGPoint)arg1;
- (void)prependTransform:(id)arg1;
- (void)appendTransform:(id)arg1;
- (void)invert;
- (void)scaleXBy:(float)arg1 yBy:(float)arg2;
- (void)scaleBy:(float)arg1;
- (void)rotateByRadians:(float)arg1;
- (void)rotateByDegrees:(float)arg1;
- (void)translateXBy:(float)arg1 yBy:(float)arg2;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTransform:(id)arg1;
- (id)init;

@end

