/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

@interface WFINPersonContact : WFContact {
    INPerson * _person;
}

@property (nonatomic, retain) INPerson *person;

+ (id)contactWithPerson:(id)arg1;
+ (id)objectWithWFSerializedRepresentation:(id)arg1;

- (void).cxx_destruct;
- (id)inPerson;
- (id)initWithINPerson:(id)arg1;
- (id)person;
- (void)setPerson:(id)arg1;
- (id)wfName;
- (id)wfSerializedRepresentation;

@end
