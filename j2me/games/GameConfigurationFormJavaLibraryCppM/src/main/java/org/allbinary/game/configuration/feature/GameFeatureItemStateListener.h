
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATUREITEMSTATELISTENER_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATUREITEMSTATELISTENER_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/ChoiceGroup.h>

      
#include <javax/microedition/lcdui/Item.h>

      
#include <javax/microedition/lcdui/ItemStateListener.h>

      
#include <org/allbinary/game/configuration/GameConfigurationGauge.h>

      
#include <org/allbinary/game/configuration/GameConfigurationUtil.h>

      
#include <org/allbinary/game/configuration/GameOptionsForm.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameFeatureFactory.h"
#include "GameFeature.h"
#include "GameFeatureUtil.h"

class GameFeatureItemStateListener
            : public Object
        : public ItemStateListener {
        

    private: static toggleList: BasicArrayList = new BasicArrayListD();

    public static add(GameFeature gameFeature);

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: gameOptionsForm: GameOptionsForm;

public constructor (GameOptionsForm gameOptionsForm);

    public itemStateChanged(Item item);

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATUREITEMSTATELISTENER_H
