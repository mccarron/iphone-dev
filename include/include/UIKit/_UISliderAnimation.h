/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <UIKit/UIAnimation.h>

@interface _UISliderAnimation : UIAnimation
{
    float _startValue;
    float _endValue;
    struct __GSEvent *_eventRef;
    BOOL _sendActionWhenValueChanges;
}

- (void)setEndValue:(float)fp8;	// IMP=0x3244a5e8
- (void)setProgress:(float)fp8;	// IMP=0x3244a5f8
- (void)setSendActionWhenValueChanges:(BOOL)fp8;	// IMP=0x3244a5f0
- (void)setStartValue:(float)fp8;	// IMP=0x3244a5e0

@end

