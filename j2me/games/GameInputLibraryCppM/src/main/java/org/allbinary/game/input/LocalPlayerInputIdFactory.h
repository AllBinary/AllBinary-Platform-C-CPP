
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_LOCALPLAYERINPUTIDFACTORY_H
        #define ORG_ALLBINARY_GAME_INPUT_LOCALPLAYERINPUTIDFACTORY_H

            #include "../../../../java/lang/Object.h"
        
#include <org/allbinary/game/input/analog/AnalogLocationInputFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LocalPlayerInputIdFactory
            : public Object
         {
        

    private: static const instance: LocalPlayerInputIdFactory = new LocalPlayerInputIdFactory();

    public static LocalPlayerInputIdFactory getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    public const MAX_NUMBER_OF_PLAYERS: int32_t = 6;

    private: const MAX_FAST_DEVICEID: int32_t = 65;

    private: const deviceIdToplayerId: std::vector<int32_t> = new Array(this.MAX_FAST_DEVICEID);

    private: const playerIdToDeviceId: std::vector<int32_t> = new Array(this.MAX_NUMBER_OF_PLAYERS);

    private: const playersInPlay: std::vector<bool> = new Array(this.MAX_NUMBER_OF_PLAYERS);

    private: totalDevicesMapped: int32_t = 0;

private constructor ();

    public int32_t getDeviceId(int32_t playerInputId);

    public int32_t getPlayerForDevice(int32_t deviceId);

    public int32_t getTotalDevicesInPlay();

    public bool isPlayerInPlay(int32_t playerInputId);

    public setPlayerInPlay(int32_t playerInputId);

    public setPlayerOutOfPlay(int32_t playerInputId);

    public std::vector<bool> getPlayersInPlay();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_LOCALPLAYERINPUTIDFACTORY_H
