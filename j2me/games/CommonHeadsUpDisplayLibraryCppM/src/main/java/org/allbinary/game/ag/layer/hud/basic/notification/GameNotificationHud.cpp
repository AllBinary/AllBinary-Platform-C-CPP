
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NOTIFICATION_GAMENOTIFICATIONHUD_CPP
        #define ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NOTIFICATION_GAMENOTIFICATIONHUD_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/ag/layer/hud/basic/notification/GameNotificationHud.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Boolean.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/graphics/hud/BasicHud.h>

      
#include <org/allbinary/game/graphics/hud/BasicHudFactory.h>

      
#include <org/allbinary/game/layer/hud/event/GameNotificationEvent.h>

      
#include <org/allbinary/game/layer/hud/event/GameNotificationListenerInterface.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/ag/layer/hud/basic/notification/GameNotification.h"

auto GameNotificationHud::NULL_GAME_NOTIFICATION_owner() -> GameNotificationHud* { static std::unique_ptr<GameNotificationHud> value(new GameNotificationHud(BasicHudFactory::getInstance()->TOPCENTER, BasicHudFactory::getInstance()->HORIZONTAL, 0, BasicColorFactory::getInstance()->RED)); return value.get(); }
GameNotificationHud* GameNotificationHud::NULL_GAME_NOTIFICATION = GameNotificationHud::NULL_GAME_NOTIFICATION_owner();

GameNotificationHud::GameNotificationHud(int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor) : BasicHud(location, direction, bufferZone, basicColor), lastGameNotificationEvent(GameNotification::NULL_GAME_NOTIFICATION_EVENT){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto GameNotificationHud::onEvent(AllBinaryEventObject* eventObject) -> void{
ForcedLogUtil::log(EventStrings::getInstance()->PERFORMANCE_MESSAGE, this);
    
}


                //@Throws(Exception.constructor)
            
    auto GameNotificationHud::onGameNotificationEvent(GameNotificationEvent* gameNotificationEvent) -> void{

                        if(this->lastGameNotificationEvent != gameNotificationEvent)
                        
                                    {
                                    this->lastGameNotificationEvent= gameNotificationEvent;
    
this->logUtil->putF(gameNotificationEvent->getString(), this, this->METHOD_NAME);
    

                                    }
                                
this->add(gameNotificationEvent->getString(), gameNotificationEvent->getSeconds(), gameNotificationEvent->getBasicColorP(), gameNotificationEvent->getPermanent());
    
}


    auto GameNotificationHud::add(std::string string, int32_t seconds, BasicColor* basicColor, bool permanent) -> void{
}


                //@Throws(Exception.constructor)
            
    auto GameNotificationHud::processTick() -> void{
}


    auto GameNotificationHud::paint(Graphics* graphics) -> void{
}


    auto GameNotificationHud::clear() -> void{
}




        #endif //ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NOTIFICATION_GAMENOTIFICATIONHUD_CPP
