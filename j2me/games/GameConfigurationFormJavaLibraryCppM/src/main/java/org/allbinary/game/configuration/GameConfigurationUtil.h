
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

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <javax/microedition/lcdui/Item.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameConfigurationSingleton.h"
#include "GameConfiguration.h"
#include "GameOptionsForm.h"
#include "GameConfigurationGauge.h"
#include "GameConfigurationCentral.h"

class GameConfigurationUtil
            : public Object
         {

    private: static GameConfigurationUtil instance() { return GameConfigurationUtil(); }

    public: static GameConfigurationUtil getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

                //@Throws(Exception.constructor)
            
    public: void change(GameOptionsForm gameOptionsForm, GameConfigurationGauge gauge);

    private: const std::string GAUGE_UPDATE = "Gauge Update: ";

    private: const std::string FROM = " from: ";

    private: const std::string TO = " to: ";

                //@Throws(Exception.constructor)
            
    public: void update(GameConfigurationGauge gauge);

                //@Throws(Exception.constructor)
            
    public: void setDefault(GameConfigurationGauge gauge);

                //@Throws(Exception.constructor)
            
    public: void updateChallange(GameOptionsForm gameOptionsForm, GameConfiguration gameConfiguration);

    private: int32_t COMPETITION_VALUE = 1;

    public: void updateCompetitionValue();

    public: int32_t getCompetitionValue();

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONUTIL_H
