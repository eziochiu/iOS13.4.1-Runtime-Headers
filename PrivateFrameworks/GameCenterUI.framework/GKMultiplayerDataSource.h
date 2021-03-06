/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKMultiplayerDataSource : GKBasicCollectionViewDataSource {
    bool  _autoMatching;
    bool  _automatchAddedToMinInHeader;
    long long  _automatchPlayerCount;
    GKMultiplayerButtonHeaderView * _buttonHeaderView;
    NSString * _footerStatus;
    GKMultiplayerFooterView * _footerView;
    GKMultiplayerHeaderView * _headerView;
    long long  _maxPlayers;
    long long  _minPlayers;
    NSMutableOrderedSet * _orderedPlayerIDList;
    NSMutableDictionary * _playerStatus;
    NSMutableOrderedSet * _players;
    bool  _removingEnabled;
}

@property (nonatomic) bool autoMatching;
@property (nonatomic) bool automatchAddedToMinInHeader;
@property (nonatomic) long long automatchPlayerCount;
@property (nonatomic) GKMultiplayerButtonHeaderView *buttonHeaderView;
@property (nonatomic, copy) NSString *footerStatus;
@property (nonatomic, retain) GKMultiplayerFooterView *footerView;
@property (nonatomic, retain) GKMultiplayerHeaderView *headerView;
@property (nonatomic) long long maxPlayers;
@property (nonatomic) long long minPlayers;
@property (nonatomic, retain) NSMutableOrderedSet *orderedPlayerIDList;
@property (nonatomic, retain) NSMutableDictionary *playerStatus;
@property (nonatomic, retain) NSMutableOrderedSet *players;
@property (nonatomic) bool removingEnabled;

- (void)addPlayers:(id)arg1 withStatus:(long long)arg2 complete:(id /* block */)arg3;
- (void)addPlayers:(id)arg1 withStatus:(long long)arg2 replaceAutomatches:(bool)arg3 complete:(id /* block */)arg4;
- (bool)autoMatching;
- (bool)automatchAddedToMinInHeader;
- (long long)automatchPlayerCount;
- (id)buttonHeaderView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)configureCollectionView:(id)arg1;
- (id)currentPlayers;
- (void)dealloc;
- (void)failedToInvitePlayers;
- (void)finishRevertingPlayers;
- (id)firstInvitedContactPlayer;
- (id)footerStatus;
- (id)footerView;
- (id)guestPlayers;
- (bool)havePendingPlayers;
- (id)headerView;
- (id)init;
- (long long)maxAvailablePlayers;
- (long long)maxPlayers;
- (long long)minPlayers;
- (id)orderedPlayerIDList;
- (id)participantForAutoMatchNumber:(long long)arg1;
- (id)participantForPlayer:(id)arg1;
- (bool)participantShouldBeRemovable:(id)arg1 atIndexPath:(id)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })playerRange;
- (id)playerStatus;
- (id)players;
- (id)playersInvited;
- (id)playersToBeInvited;
- (id)playersWithStatus:(long long)arg1;
- (id)readyPlayers;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3;
- (void)removePlayers:(id)arg1 complete:(id /* block */)arg2;
- (bool)removingEnabled;
- (void)replaceContactPlayers:(id)arg1 withNormalPlayers:(id)arg2 complete:(id /* block */)arg3;
- (void)restoreOrderOfPlayers;
- (void)setAutoMatching:(bool)arg1;
- (void)setAutoMatching:(bool)arg1 withVisibleCells:(id)arg2;
- (void)setAutomatchAddedToMinInHeader:(bool)arg1;
- (void)setAutomatchPlayerCount:(long long)arg1;
- (void)setAutomatchPlayerCount:(long long)arg1 complete:(id /* block */)arg2;
- (void)setButtonHeaderView:(id)arg1;
- (void)setFooterStatus:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setMaxPlayers:(long long)arg1;
- (void)setMinPlayers:(long long)arg1;
- (void)setOrderedPlayerIDList:(id)arg1;
- (void)setParticipantsWithPlayers:(id)arg1 automatchPlayerCount:(long long)arg2 andStatuses:(id)arg3 complete:(id /* block */)arg4;
- (void)setPlayerStatus:(id)arg1;
- (void)setPlayers:(id)arg1;
- (void)setRemovingEnabled:(bool)arg1;
- (void)setStatus:(long long)arg1 forPlayers:(id)arg2 complete:(id /* block */)arg3;
- (bool)shouldRevertStatus:(long long)arg1;
- (long long)statusForPlayer:(id)arg1;
- (void)updateHeaderText;
- (void)updateParticipants;

@end
