/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSCH3DResourceHandle.h>

// Not exported
@interface TSCH3DGLHandle : TSCH3DResourceHandle
{
    unsigned int mValue;
}

+ (id)handleWithGLHandle:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int value; // @synthesize value=mValue;
- (void)setValue:(unsigned int)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithGLHandle:(unsigned int)arg1;

@end

