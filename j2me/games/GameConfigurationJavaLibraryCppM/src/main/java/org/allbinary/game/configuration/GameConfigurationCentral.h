
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONCENTRAL_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONCENTRAL_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/game/configuration/persistance/GameConfigurationPersistanceSingleton.h>

      
#include <org/allbinary/game/configuration/persistance/KeyValuePersistance.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameConfiguration.h"

class GameConfigurationCentral
            : public Object
         {

    private: static Object* SINGLETON = NullUtil::getInstance().NULL_OBJECT;

    public: static GameConfigurationCentral getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    public: GameConfiguration SCALE;

    public: GameConfiguration ORIENTATION;

    public: GameConfiguration SENSOR_UPDATE_RATE;

    public: GameConfiguration VIBRATION;

    public: GameConfiguration CHALLENGE_LEVEL;

    public: GameConfiguration COLLIDE_DAMAGE;

    public: GameConfiguration DURABILITY_CHALLENGE_LEVEL;

    public: GameConfiguration SPEED_CHALLENGE_LEVEL;

    public: GameConfiguration ATTACK_CHALLENGE_LEVEL;

    public: GameConfiguration CONTROL_LEVEL;

    public: GameConfiguration PLAYER_INPUT_WAIT;

    public: GameConfiguration SPEED;

    public: GameConfiguration SOUND_VOLUME;

    public: GameConfiguration MAX_GAME_OBJECTS;

    public: GameConfiguration MAX_LAYERS;

    private: int32_t gameControlFidelity = 36;

private: GameConfigurationCentral();

    public: void load(AbeClientInformationInterface abeClientInformation);

    public: void setGameControlFidelity(int32_t gameControlFidelity);

    public: int32_t getGameControlFidelity();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONCENTRAL_H
