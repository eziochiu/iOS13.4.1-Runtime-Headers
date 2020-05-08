/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

@interface TSFrequencyAnalysis : NSObject {
    double  _averageFrequency;
    double  _averagePeriod;
    double  _averageTimeError;
    double  _highestFrequency;
    double  _lowestFrequency;
}

@property (nonatomic) double averageFrequency;
@property (nonatomic) double averagePeriod;
@property (nonatomic) double averageTimeError;
@property (nonatomic) double highestFrequency;
@property (nonatomic) double lowestFrequency;

- (double)averageFrequency;
- (double)averagePeriod;
- (double)averageTimeError;
- (double)highestFrequency;
- (id)initWithTimeErrorValues:(id)arg1;
- (double)lowestFrequency;
- (void)setAverageFrequency:(double)arg1;
- (void)setAveragePeriod:(double)arg1;
- (void)setAverageTimeError:(double)arg1;
- (void)setHighestFrequency:(double)arg1;
- (void)setLowestFrequency:(double)arg1;

@end