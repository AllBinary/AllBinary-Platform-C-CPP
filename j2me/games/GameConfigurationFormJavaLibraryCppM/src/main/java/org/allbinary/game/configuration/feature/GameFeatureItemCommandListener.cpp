
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATUREITEMCOMMANDLISTENER_CPP
        #define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATUREITEMCOMMANDLISTENER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/configuration/feature/GameFeatureItemCommandListener.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Command.h>

      
#include <javax/microedition/lcdui/Item.h>

      
#include <javax/microedition/lcdui/ItemCommandListener.h>

      
#include <org/allbinary/game/configuration/GameConfigurationGauge.h>

      
#include <org/allbinary/game/configuration/GameConfigurationUtil.h>

      
#include <org/allbinary/game/configuration/GameOptionsForm.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/midlet/MidletStrings.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

GameFeatureItemCommandListener::GameFeatureItemCommandListener(GameOptionsForm* gameOptionsForm) : logUtil(LogUtil::getInstance()){
this->gameOptionsForm= gameOptionsForm;
    
}


    auto GameFeatureItemCommandListener::commandAction(Command* command, Item* item) -> void{

        try {
            
    std::string itemLabel = item->getLabel();;
    
this->logUtil->putF((new StringMaker())->append(CommonLabels::getInstance()->ITEM_LABEL)->append(itemLabel)->toString(), this, MidletStrings::getInstance()->COMMAND_ACTION);
    

                        if(
                                        (dynamic_cast<const GameConfigurationGauge*>(item) != nullptr)
                                    )
                        
                                    {
                                    GameConfigurationUtil::getInstance()->change(this->gameOptionsForm, dynamic_cast<GameConfigurationGauge*>(item));
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, MidletStrings::getInstance()->COMMAND_ACTION, &e);
    
}

}




        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATUREITEMCOMMANDLISTENER_CPP
