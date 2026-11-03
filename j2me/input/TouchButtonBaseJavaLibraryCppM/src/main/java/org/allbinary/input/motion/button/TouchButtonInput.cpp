
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONINPUT_CPP
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONINPUT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/motion/button/TouchButtonInput.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/input/GameKey.h>

      
#include <org/allbinary/game/input/GameKeyEventSourceInterface.h>

      
#include <org/allbinary/game/input/Input.h>

      
#include <org/allbinary/game/input/InputFactory.h>

      
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/game/input/event/GameKeyEventFactory.h>

      
#include <org/allbinary/game/input/mapping/InputToGameKeyMapping.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

TouchButtonInput::TouchButtonInput(int32_t id, std::string name) : Input(id, name), logUtil(LogUtil::getInstance()), gameKeyEventFactory(GameKeyEventFactory::getInstance()), TOUCH_BUTTON_SOURCE_ID(this->gameKeyEventFactory->TOUCH_BUTTON_SOURCE_ID), gameKeyEvent(GameKeyEvent::NONE){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

    InputFactory* inputFactory = InputFactory::getInstance();;
    
inputFactory->add(this->getId(), this);
    
}


    auto TouchButtonInput::update(InputToGameKeyMapping* inputToGameKeyMapping) -> void{

        try {
            
    GameKey* gameKey = inputToGameKeyMapping->getInstance(this->getId());;
    
this->gameKeyEvent= this->gameKeyEventFactory->getInstanceForInput(this, gameKey);
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->UPDATE, &e);
    
}

}


    auto TouchButtonInput::getSourceId() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->TOUCH_BUTTON_SOURCE_ID;
    
}


    auto TouchButtonInput::getGameKeyEvent() -> GameKeyEvent*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->gameKeyEvent;
    
}




        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONINPUT_CPP
