
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATUREFORMUTIL_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATUREFORMUTIL_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <java/util/Hashtable.h>

      
#include <javax/microedition/lcdui/ChoiceGroup.h>

      
#include <javax/microedition/lcdui/Item.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <org/allbinary/game/configuration/GameConfigurationGauge.h>

      
#include <org/allbinary/game/configuration/GameConfigurationUtil.h>

      
#include <org/allbinary/graphics/displayable/screen/CommandForm.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/HashtableUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Features.h"
#include "Feature.h"
#include "GameFeatureUtil.h"

class GameFeatureFormUtil
            : public Object
         {
        

    private: static const instance: GameFeatureFormUtil = new GameFeatureFormUtil();

    public static GameFeatureFormUtil getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    public ChoiceGroup getChoiceGroup(Hashtable<any, any> hashtable, string name, int32_t option);

    public addChoiceGroup(CommandForm form, Hashtable<any, any> hashtable, int32_t option);

                //@Throws(Exception.constructor)
            
    public setDefault(CommandForm form);

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATUREFORMUTIL_H
