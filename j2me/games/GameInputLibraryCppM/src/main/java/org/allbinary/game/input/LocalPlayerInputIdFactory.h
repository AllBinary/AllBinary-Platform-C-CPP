
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

            #include <vector>
        
            #include "../../../../java/lang/Object.h"
        
#include <org/allbinary/game/input/analog/AnalogLocationInputFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LocalPlayerInputIdFactory
            : public Object
         {

    private: static LocalPlayerInputIdFactory instance() { return LocalPlayerInputIdFactory(); }

    public: static LocalPlayerInputIdFactory getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    public: const int32_t MAX_NUMBER_OF_PLAYERS = 6;

    private: const int32_t MAX_FAST_DEVICEID = 65;

    private: const std::vector<int32_t> deviceIdToplayerId = new Array(this->MAX_FAST_DEVICEID);

    private: const std::vector<int32_t> playerIdToDeviceId = new Array(this->MAX_NUMBER_OF_PLAYERS);

    private: const std::vector<bool> playersInPlay = new Array(this->MAX_NUMBER_OF_PLAYERS);

    private: int32_t totalDevicesMapped = 0;

private: LocalPlayerInputIdFactory();

    public: int32_t getDeviceId(int32_t playerInputId);

    public: int32_t getPlayerForDevice(int32_t deviceId);

    public: int32_t getTotalDevicesInPlay();

    public: bool isPlayerInPlay(int32_t playerInputId);

    public: void setPlayerInPlay(int32_t playerInputId);

    public: void setPlayerOutOfPlay(int32_t playerInputId);

    public: std::vector<bool> getPlayersInPlay();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_LOCALPLAYERINPUTIDFACTORY_H
