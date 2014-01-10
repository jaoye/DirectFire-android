#ifndef _stringenum_h_
#define _stringenum_h_

class StringEnum{
public:
    enum {
        CloseBgMusic = 0,
        CloseGameMusic,
        ChangeAccount,
        CheckUpdate,
        QuitGame,
        Version,
        BattleGame,
        CampaignGame,
        QuickGame = 8,
        EndlessTask,
        Ok = 10,
        Retry,
        Cancel,
        AskForQuitGame,
        Close,
        Quit,
        Login = 20,
        Register,
        Reset,
        Back,
        Account,
        Passwd,
        InputAccountName,
        InputPasswd,
        Logining,
        Registering,
        NeedMailAccount,
        Loading,
        Level,
        Exp,
        Say,
        Send,
        Reply,
        Title,
        Body,
        Content,
        SendGift,
        MsgWord,
        CommonReplyWord,
        CommonReplyTitle,
        Add,
        Delete,
        Reject,
        AddFriend,
        DelFriend,
        SendMsg,
        FriendList,
        FriendId,
        QueryDelFriend,
        GameList = 100,
        CreateGame,
        JoinGame,
        Map,
        Cost,
        Coin,
        RoomsNum,
        OnlineNum,
        JoiningGame,
        CreatingGame,
        QuitRoom,
        StartGame,
        SetBonus,
        SetSpell,
        NoneSpellSelect,
        SayToYou,
        SayTo,
        SayToAll,
        QuickingGame,
        DrawTask = 200,
        DailyAward,
        HolidayAward,
        PortraitAward,
        TaskAward,
        WaitingMore = 300,
        CommWithServerFailed = 1000,
        PleaseTryAgin,
        In3GNetwork,
        AskForUpdateVersion,
        Update,
        GameRule = 2000,
        SpellIntro,
        TribeIntro,
        SysSetting,
        ScreenShot,
        FeedBack,
        CreditIntro,
        SharedToFb,
        SharedToTwitter,
        SharedToSina,
        GameRuleContent,
        StormIntro = 2200,
        IceArrowIntro,
        MagicDispelIntro,
        WarFogIntro,
        TimeSlowIntro,
        WarCallIntro,
        OathLightIntro,
        BlackHoleIntro,
        ThunderBallIntro,
        WormBallIntro,
        CycloneIntro,
        WarTramplingIntro,
        SilenceIntro,
        DragonBeadIntro,
        DeliverIntro,
        /* tribe related */
        HumanName = 2300,
        OrcName,
        ElfName,
        UndeadName,
        DragonName,
        TribeSpeed,
        TribeHp,
        TribeBaseHp,
        TribeDef,
        /* room action related */
        RoomKickPlayer = 2400,
        RoomSneerPlayer,
        RoomPriasePlayer,
        RoomCloseSeat,
        RoomOpenSeat,
        RoomChatTo,
        RoomSendGift,
        RoomSendMsg,
        RoomAddFriend,
        RoomChangePos,
        RoomInviteToRoomContent,
        AcceptInvite,
        RejectInvite,
        RoomKickOut,
        RoomUser,
        BeenKickOut,
        Waiting,
        YouLost,
        CallEven,
        ExChange,
        BuyInto,
        SellOut,
        /* game oper related */
        QuitGameContent = 2500,
        AtLeastOneOpponent,
        /* head setting*/
        Upload = 2600,
        Logout,
        ID,
        Mail,
        Password,
        PasswordConfirm,
        NickName,
        Sex,
        Female,
        Male,
        Submit,
        AccountEmptyError,
        PasswordEmptyError,
        PasswordLenError,
        PasswordConfirmError,
        NickNameEmptyError,
        SpecialCharactersError,
        AccountNotMailError,
        ChooseImage,
        TakePhoto,
        /* IAP */
        Congratulations = 2700,
        IAPSuccess,
        Reward,
        LevelUpSuccess = 2800,
        /* route names, need same layout with routedef.h */
        SwitchRoute = 2850,
        RouteUnknow = 2899,
        RouteCNTelecom = 2900,
        RouteCNUnicom,
        RouteCNMoblie,
        RouteCNNetcom,
        RouteUSVerizon = 2920,
        RouteUSTMoblie,
        RouteUSATT,
        RouteUSSprint,
        /* others */
        Notification = 2930,
        ShopPage,
        SysPage,
        SocialPage,
        SetYourNickName,
        ComboHit,
        Hide,
        NoShow
    };
    StringEnum(){}
    ~StringEnum(){}
};
#endif