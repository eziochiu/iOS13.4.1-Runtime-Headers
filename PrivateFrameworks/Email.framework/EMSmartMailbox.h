/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

@interface EMSmartMailbox : EMMailbox {
    EMMailboxScope * _mailboxScope;
    id /* block */  _predicateGenerator;
    long long  _smartMailboxType;
}

@property (nonatomic, readonly) EMMailboxScope *mailboxScope;
@property (nonatomic, readonly) long long smartMailboxType;

+ (id)flaggedMailboxWithMailboxScope:(id)arg1;
+ (id)hasAttachmentsMailboxWithMailboxScope:(id)arg1;
+ (id)includesMeMailboxWithMailboxScope:(id)arg1;
+ (id)muteThreadsMailboxWithMailboxScope:(id)arg1;
+ (id)notifyThreadsMailboxWithMailboxScope:(id)arg1;
+ (id)todayMailboxWithMailboxScope:(id)arg1;
+ (id)unifiedMailboxOfType:(long long)arg1 name:(id)arg2;
+ (id)unifiedMailboxOfType:(long long)arg1 name:(id)arg2 additionalPredicate:(id)arg3;
+ (id)unreadMailboxWithMailboxScope:(id)arg1;
+ (id)vipMailboxWithMailboxScope:(id)arg1;

- (void).cxx_destruct;
- (bool)_shouldArchiveByDefault;
- (unsigned long long)hash;
- (id)initWithType:(long long)arg1 mailboxType:(long long)arg2 name:(id)arg3 mailboxScope:(id)arg4 predicateGenerator:(id /* block */)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isSmartMailbox;
- (id)mailboxScope;
- (id)makePredicate;
- (long long)smartMailboxType;
- (bool)supportsSelectAll;

@end