/* Generated by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNMeCardSharingResult : NSObject {
    CNContactImage * _contactImage;
    bool  _didSaveImageToMeCard;
    NSString * _familyName;
    NSString * _givenName;
}

@property (nonatomic, readonly) CNContactImage *contactImage;
@property (nonatomic, readonly) bool didSaveImageToMeCard;
@property (nonatomic, readonly) NSString *familyName;
@property (nonatomic, readonly) NSString *givenName;

- (void).cxx_destruct;
- (id)contactImage;
- (id)description;
- (bool)didSaveImageToMeCard;
- (id)familyName;
- (id)givenName;
- (id)initWithGivenName:(id)arg1 familyName:(id)arg2 contactImage:(id)arg3 didSaveImageToMeCard:(bool)arg4;

@end
