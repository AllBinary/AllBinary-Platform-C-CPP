
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NOTIFICATION_NOGAMENOTIFICATIONHUDSINGLETON_CPP
        #define ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NOTIFICATION_NOGAMENOTIFICATIONHUDSINGLETON_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/ag/layer/hud/basic/notification/NoGameNotificationHudSingleton.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/graphics/hud/BasicHudFactory.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/ag/layer/hud/basic/notification/GameNotificationHud.h"

auto NoGameNotificationHudSingleton::instance_owner() -> NoGameNotificationHudSingleton* { static std::unique_ptr<NoGameNotificationHudSingleton> value(new NoGameNotificationHudSingleton()); return value.get(); }
NoGameNotificationHudSingleton* NoGameNotificationHudSingleton::instance = NoGameNotificationHudSingleton::instance_owner();

    auto NoGameNotificationHudSingleton::getInstance() -> NoGameNotificationHudSingleton*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NoGameNotificationHudSingleton::instance;
    
}


NoGameNotificationHudSingleton::NoGameNotificationHudSingleton() : logUtil(LogUtil::getInstance()), gameNotificationHud(GameNotificationHud::NULL_GAME_NOTIFICATION){

        try {
            
    BasicHudFactory* basicHudFactory = BasicHudFactory::getInstance();;
    

//inner=true member= isStatic=
class NoGameGameNotificationHud: public GameNotificationHud {

: NoGameGameNotificationHud() : GameNotificationHud(basicHudFactory->TOPCENTER, basicHudFactory->HORIZONTAL, 2, BasicColorFactory::getInstance()->RED){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->updateMaxWidth= 40;
    
this->updateMaxHeight= 14;
    
}


};

            

                    //Otherwise - statement - EmptyStmt

this->gameNotificationHud= new NoGameGameNotificationHud();
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->CONSTRUCTOR, &e);
    
}

}


    auto NoGameNotificationHudSingleton::getGameNotificationHud() -> GameNotificationHud*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->gameNotificationHud;
    
}




        #endif //ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NOTIFICATION_NOGAMENOTIFICATIONHUDSINGLETON_CPP
