
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
class GameConfigurationPersistanceSingleton;
class KeyValuePersistance;
class NullUtil;
class LogUtil;
class SmallIntegerSingletonFactory;
class StringMaker;
class AbeClientInformationInterface;
class CommonSeps;
class CommonStrings;
#include <org/allbinary/util/ABHashtable.h>
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class GameConfiguration;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameConfigurationCentral
            : public virtual Object
         {

    private: static Object* SINGLETON;

    public: static GameConfigurationCentral* getInstance();

    /*protected*/ public: LogUtil* logUtil;

    public: GameConfiguration* SCALE;

    public: GameConfiguration* ORIENTATION;

    public: GameConfiguration* SENSOR_UPDATE_RATE;

    public: GameConfiguration* VIBRATION;

    public: GameConfiguration* CHALLENGE_LEVEL;

    public: GameConfiguration* COLLIDE_DAMAGE;

    public: GameConfiguration* DURABILITY_CHALLENGE_LEVEL;

    public: GameConfiguration* SPEED_CHALLENGE_LEVEL;

    public: GameConfiguration* ATTACK_CHALLENGE_LEVEL;

    public: GameConfiguration* CONTROL_LEVEL;

    public: GameConfiguration* PLAYER_INPUT_WAIT;

    public: GameConfiguration* SPEED;

    public: GameConfiguration* SOUND_VOLUME;

    public: GameConfiguration* MAX_GAME_OBJECTS;

    public: GameConfiguration* MAX_LAYERS;

    private: int32_t gameControlFidelity = 36;

private: GameConfigurationCentral();

    public: void load(AbeClientInformationInterface* abeClientInformation);

    public: void setGameControlFidelity(int32_t gameControlFidelity);

    public: int32_t getGameControlFidelity();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONCENTRAL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONCENTRAL_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONCENTRAL_H_COMPLETE
        #if __has_include(<org/allbinary/game/configuration/persistance/GameConfigurationPersistanceSingleton.h>)
#include <org/allbinary/game/configuration/persistance/GameConfigurationPersistanceSingleton.h>
#endif
#if __has_include(<org/allbinary/game/configuration/persistance/KeyValuePersistance.h>)
#include <org/allbinary/game/configuration/persistance/KeyValuePersistance.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/math/SmallIntegerSingletonFactory.h>)
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include("org/allbinary/game/configuration/GameConfiguration.h")
#include "org/allbinary/game/configuration/GameConfiguration.h"
#endif

        #endif
    
