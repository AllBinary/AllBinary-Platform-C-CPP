
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

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Integer.h"
        
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
        

    private: static const instance: GameConfigurationUtil = new GameConfigurationUtil();

    public static GameConfigurationUtil getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

                //@Throws(Exception.constructor)
            
    public change(GameOptionsForm gameOptionsForm, GameConfigurationGauge gauge);

    private: const GAUGE_UPDATE: string = "Gauge Update: ";

    private: const FROM: string = " from: ";

    private: const TO: string = " to: ";

                //@Throws(Exception.constructor)
            
    public update(GameConfigurationGauge gauge);

                //@Throws(Exception.constructor)
            
    public setDefault(GameConfigurationGauge gauge);

                //@Throws(Exception.constructor)
            
    public updateChallange(GameOptionsForm gameOptionsForm, GameConfiguration gameConfiguration);

    private: COMPETITION_VALUE: int32_t = 1;

    public updateCompetitionValue();

    public int32_t getCompetitionValue();

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONUTIL_H
