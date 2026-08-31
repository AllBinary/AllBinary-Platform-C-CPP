
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

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Integer.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <java/util/Hashtable.h>

      
#include <org/allbinary/game/configuration/persistance/GameConfigurationPersistanceSingleton.h>

      
#include <org/allbinary/game/configuration/persistance/KeyValuePersistance.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameConfiguration.h"

class GameConfigurationCentral
            : public Object
         {
        

    private: static SINGLETON: any = NullUtil.getInstance()!.NULL_OBJECT;

    public static GameConfigurationCentral getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    public const SCALE: GameConfiguration;

    public const ORIENTATION: GameConfiguration;

    public const SENSOR_UPDATE_RATE: GameConfiguration;

    public const VIBRATION: GameConfiguration;

    public const CHALLENGE_LEVEL: GameConfiguration;

    public const COLLIDE_DAMAGE: GameConfiguration;

    public const DURABILITY_CHALLENGE_LEVEL: GameConfiguration;

    public const SPEED_CHALLENGE_LEVEL: GameConfiguration;

    public const ATTACK_CHALLENGE_LEVEL: GameConfiguration;

    public const CONTROL_LEVEL: GameConfiguration;

    public const PLAYER_INPUT_WAIT: GameConfiguration;

    public const SPEED: GameConfiguration;

    public const SOUND_VOLUME: GameConfiguration;

    public const MAX_GAME_OBJECTS: GameConfiguration;

    public const MAX_LAYERS: GameConfiguration;

    private: gameControlFidelity: int32_t = 36;

private constructor ();

    public load(AbeClientInformationInterface abeClientInformation);

    public setGameControlFidelity(int32_t gameControlFidelity);

    public int32_t getGameControlFidelity();

    public string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONCENTRAL_H
