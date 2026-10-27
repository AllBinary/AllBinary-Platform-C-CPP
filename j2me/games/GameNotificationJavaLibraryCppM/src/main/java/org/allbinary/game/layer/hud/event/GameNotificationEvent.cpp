
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_HUD_EVENT_GAMENOTIFICATIONEVENT_CPP
        #define ORG_ALLBINARY_GAME_LAYER_HUD_EVENT_GAMENOTIFICATIONEVENT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/hud/event/GameNotificationEvent.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

GameNotificationEvent::GameNotificationEvent(Object* anyType, std::string string, int32_t seconds, BasicColor* basicColor, bool permanent) : AllBinaryEventObject(anyType), string(StringUtil::getInstance()->EMPTY_STRING), basicColor(BasicColorFactory::getInstance()->BLACK){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setString(string);
    
this->seconds= seconds;
    
this->setBasicColorP(basicColor);
    
this->removeable= permanent;
    
}


    auto GameNotificationEvent::getString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->string;
    
}


    auto GameNotificationEvent::getSeconds() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->seconds;
    
}


    auto GameNotificationEvent::getBasicColorP() -> BasicColor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->basicColor;
    
}


    auto GameNotificationEvent::getPermanent() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->removeable;
    
}


    auto GameNotificationEvent::setString(std::string string) -> void{
this->string= string;
    
}


    auto GameNotificationEvent::setBasicColorP(BasicColor* basicColor) -> void{
this->basicColor= basicColor;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_HUD_EVENT_GAMENOTIFICATIONEVENT_CPP
