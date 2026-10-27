
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONUTIL_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
class Item;
class LogUtil;
class SmallIntegerSingletonFactory;
class StringMaker;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class GameConfigurationSingleton;
class GameConfiguration;
class GameOptionsForm;
class GameConfigurationGauge;
class GameConfigurationCentral;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameConfigurationUtil
            : public virtual Object
         {

    private: static GameConfigurationUtil* instance_owner();
    private: static GameConfigurationUtil* instance;

    public: static GameConfigurationUtil* getInstance();


            
    public: GameConfigurationUtil();
        
    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

                //@Throws(Exception.constructor)
            
    public: void change(GameOptionsForm* gameOptionsForm, GameConfigurationGauge* gauge);

    private: const std::string GAUGE_UPDATE = "Gauge Update: ";

    private: const std::string FROM = " from: ";

    private: const std::string TO = " to: ";

                //@Throws(Exception.constructor)
            
    public: void update(GameConfigurationGauge* gauge);

                //@Throws(Exception.constructor)
            
    public: void setDefault(GameConfigurationGauge* gauge);

                //@Throws(Exception.constructor)
            
    public: void updateChallange(GameOptionsForm* gameOptionsForm, GameConfiguration* gameConfiguration);

    private: int32_t COMPETITION_VALUE = 1;

    public: void updateCompetitionValue();

    public: int32_t getCompetitionValue();

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONUTIL_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Item.h>)
#include <javax/microedition/lcdui/Item.h>
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
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/game/configuration/GameConfigurationSingleton.h")
#include "org/allbinary/game/configuration/GameConfigurationSingleton.h"
#endif
#if __has_include("org/allbinary/game/configuration/GameConfiguration.h")
#include "org/allbinary/game/configuration/GameConfiguration.h"
#endif
#if __has_include("org/allbinary/game/configuration/GameOptionsForm.h")
#include "org/allbinary/game/configuration/GameOptionsForm.h"
#endif
#if __has_include("org/allbinary/game/configuration/GameConfigurationGauge.h")
#include "org/allbinary/game/configuration/GameConfigurationGauge.h"
#endif
#if __has_include("org/allbinary/game/configuration/GameConfigurationCentral.h")
#include "org/allbinary/game/configuration/GameConfigurationCentral.h"
#endif

        #endif
    
