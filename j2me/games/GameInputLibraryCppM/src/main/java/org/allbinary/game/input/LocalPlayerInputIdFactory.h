
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class AnalogLocationInputFactory;
class LogUtil;
class StringMaker;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class LocalPlayerInputIdFactory
            : public virtual Object
         {

    private: static LocalPlayerInputIdFactory* instance_owner();
    private: static LocalPlayerInputIdFactory* instance;

    public: static LocalPlayerInputIdFactory* getInstance();

    /*protected*/ public: LogUtil* logUtil;

    public: const int32_t MAX_NUMBER_OF_PLAYERS = 6;

    private: const int32_t MAX_FAST_DEVICEID = 65;

    private: std::vector<int32_t> deviceIdToplayerId;

    private: std::vector<int32_t> playerIdToDeviceId;

    private: std::vector<bool> playersInPlay;

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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_LOCALPLAYERINPUTIDFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_LOCALPLAYERINPUTIDFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/game/input/analog/AnalogLocationInputFactory.h>)
#include <org/allbinary/game/input/analog/AnalogLocationInputFactory.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif

        #endif
    
