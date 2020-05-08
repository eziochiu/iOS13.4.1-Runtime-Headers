/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUINowPlayingUserTriggeredFeature : NSObject <VUINowPlayingUserTriggeredFeature> {
    bool  _active;
    bool  _autoRemove;
    unsigned long long  _type;
    id  _userInfo;
}

@property (getter=isActive, nonatomic) bool active;
@property (getter=shouldAutoRemove, nonatomic) bool autoRemove;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long type;
@property (nonatomic, retain) id userInfo;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithType:(unsigned long long)arg1;
- (bool)isActive;
- (bool)isEqual:(id)arg1;
- (void)setActive:(bool)arg1;
- (void)setAutoRemove:(bool)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setUserInfo:(id)arg1;
- (bool)shouldAutoRemove;
- (unsigned long long)type;
- (id)userInfo;

@end