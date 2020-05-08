/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
 */

@interface ContentItemMarkupGenerator : NSObject <EFLoggable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)attachmentElementMarkupStringForContentItem:(id)arg1;
+ (bool)isDisplayableImageContentItem:(id)arg1;
+ (bool)isDisplayableInlineContentItem:(id)arg1;
+ (bool)isDisplayableSinglePagePDFContentItem:(id)arg1;
+ (id)log;
+ (id)markupStringForDisplayForContentItem:(id)arg1;

@end