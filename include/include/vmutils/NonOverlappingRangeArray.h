/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <vmutils/RangeArray.h>

@interface NonOverlappingRangeArray : RangeArray
{
}

- (struct _NSRange)largestUnusedWithInUse:(id)fp8;	// IMP=0x3187f564
- (void)mergeAllBitsOfRange:(struct _NSRange)fp8 excludingRanges:(id)fp16;	// IMP=0x318807f0
- (void)mergeRange:(struct _NSRange)fp8;	// IMP=0x3187f2f0
- (void)mergeRange:(struct _NSRange)fp8 excludingRanges:(id)fp16;	// IMP=0x3187f45c
- (void)mergeRanges:(id)fp8 excludingRanges:(id)fp12;	// IMP=0x3187f4c0
- (unsigned int)overallLength;	// IMP=0x3187f534
- (id)subtract:(id)fp8;	// IMP=0x3187f610

@end

