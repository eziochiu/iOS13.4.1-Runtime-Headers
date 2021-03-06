/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

@interface TRIControlCommandSubmitTask : NSObject <TRIControlCommand> {
    NSNumber * _result;
    <TRITask> * _task;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *result;
@property (readonly) Class superclass;
@property (readonly) <TRITask> *task;

+ (id)commandWithTask:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTask:(id)arg1;
- (id)result;
- (bool)run;
- (void)setResult:(id)arg1;
- (id)task;

@end
