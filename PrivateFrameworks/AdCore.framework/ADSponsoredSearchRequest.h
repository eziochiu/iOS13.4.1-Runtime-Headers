/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

@interface ADSponsoredSearchRequest : PBRequest <NSCopying> {
    bool  _enableImagesForDupes;
    struct { 
        unsigned int enableImagesForDupes : 1; 
        unsigned int isBaseline : 1; 
        unsigned int isTest : 1; 
    }  _has;
    bool  _isBaseline;
    bool  _isTest;
    ADUserTargetingProperties * _properties;
}

@property (nonatomic) bool enableImagesForDupes;
@property (nonatomic) bool hasEnableImagesForDupes;
@property (nonatomic) bool hasIsBaseline;
@property (nonatomic) bool hasIsTest;
@property (nonatomic, readonly) bool hasProperties;
@property (nonatomic) bool isBaseline;
@property (nonatomic) bool isTest;
@property (nonatomic, retain) ADUserTargetingProperties *properties;

+ (id)options;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)enableImagesForDupes;
- (bool)hasEnableImagesForDupes;
- (bool)hasIsBaseline;
- (bool)hasIsTest;
- (bool)hasProperties;
- (unsigned long long)hash;
- (bool)isBaseline;
- (bool)isEqual:(id)arg1;
- (bool)isTest;
- (void)mergeFrom:(id)arg1;
- (id)properties;
- (bool)readFrom:(id)arg1;
- (void)setEnableImagesForDupes:(bool)arg1;
- (void)setHasEnableImagesForDupes:(bool)arg1;
- (void)setHasIsBaseline:(bool)arg1;
- (void)setHasIsTest:(bool)arg1;
- (void)setIsBaseline:(bool)arg1;
- (void)setIsTest:(bool)arg1;
- (void)setProperties:(id)arg1;
- (void)writeTo:(id)arg1;

@end