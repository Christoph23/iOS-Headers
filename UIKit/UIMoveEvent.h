/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIInternalEvent.h>

@interface UIMoveEvent : UIInternalEvent
{
    int _moveDirection;
}

@property(nonatomic, setter=_setMoveDirection:) int _moveDirection; // @synthesize _moveDirection;
- (void)_sendEventToResponder:(id)arg1;
- (int)type;

@end

