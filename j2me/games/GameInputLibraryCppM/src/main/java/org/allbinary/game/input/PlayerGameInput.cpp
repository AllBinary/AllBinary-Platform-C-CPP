
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_PLAYERGAMEINPUT_CPP
        #define ORG_ALLBINARY_GAME_INPUT_PLAYERGAMEINPUT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/PlayerGameInput.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/game/input/event/GameKeyEventListenerInterface.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/game/input/GameInputStrings.h"


PlayerGameInput::PlayerGameInput(BasicArrayList* gameKeyEventList, BasicArrayList* removalGameKeyEventList, int32_t playerInputId) : GameInput(gameKeyEventList, removalGameKeyEventList), gameInputStrings(GameInputStrings::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->playerInputId= playerInputId;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto PlayerGameInput::onPressGameKeyEvent(GameKeyEvent* gameKeyEvent) -> void{
this->add(gameKeyEvent);
    
this->addForRemoval(gameKeyEvent);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto PlayerGameInput::onDownGameKeyEvent(GameKeyEvent* gameKeyEvent) -> void{
this->add(gameKeyEvent);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto PlayerGameInput::onDownKeyEvent(GameKeyEvent* gameKeyEvent) -> void{
this->add(gameKeyEvent);
    
this->addForRemoval(gameKeyEvent);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto PlayerGameInput::onDownKey(int32_t gameKeyEvent) -> void{
PreLogUtil::put(JavaString::valueOf((new StringMaker())->append(CommonLabels::getInstance()->START_LABEL)->append(JavaString::valueOf(gameKeyEvent))), this, this->gameInputStrings->ON_DOWN_GAME_KEY);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto PlayerGameInput::onUpGameKeyEvent(GameKeyEvent* gameKeyEvent) -> void{
this->addForRemoval(gameKeyEvent);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto PlayerGameInput::onUpKeyEvent(int32_t gameKeyEvent) -> void{
}


    auto PlayerGameInput::onEvent(AllBinaryEventObject* eventObject) -> void{
ForcedLogUtil::log(EventStrings::getInstance()->PERFORMANCE_MESSAGE, this);
    
}


    auto PlayerGameInput::getPlayerInputId() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->playerInputId;
    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_PLAYERGAMEINPUT_CPP
