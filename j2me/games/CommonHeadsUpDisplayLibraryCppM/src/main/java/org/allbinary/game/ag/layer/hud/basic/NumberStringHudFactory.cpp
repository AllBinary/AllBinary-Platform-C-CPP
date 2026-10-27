
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NUMBERSTRINGHUDFACTORY_CPP
        #define ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NUMBERSTRINGHUDFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/ag/layer/hud/basic/NumberStringHudFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <org/allbinary/game/graphics/hud/BasicHudFactory.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/ag/layer/hud/basic/NumberStringHud.h"


NumberStringHudFactory::NumberStringHudFactory() : NULL_NUMBER_STRING_HUD(this->createHud()) {
        }
        Object* NumberStringHudFactory::instance = NullUtil::getInstance();

    auto NumberStringHudFactory::getInstance() -> NumberStringHudFactory*{

                        if(NumberStringHudFactory::instance == NullUtil::getInstance())
                        
                                    {
                                    NumberStringHudFactory::instance= new NumberStringHudFactory();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<NumberStringHudFactory*>(NumberStringHudFactory::instance);
    
}


    auto NumberStringHudFactory::createHud() -> NumberStringHud*{

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new NumberStringHud(StringUtil::getInstance()->EMPTY_STRING, 9, BasicHudFactory::getInstance()->ABSOLUTE, 1, 0, BasicColorFactory::getInstance()->NULL_COLOR);
    

                //: 
} catch(Exception& e) 
            {

    LogUtil* logUtil = LogUtil::getInstance();;
    

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
logUtil->put(commonStrings->EXCEPTION, this, commonStrings->CONSTRUCTOR, &e);
    



                            throw RuntimeException();
                    
}

}




        #endif //ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NUMBERSTRINGHUDFACTORY_CPP
