
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
        #include "GameInput.h"
#include "GameInputStrings.h"

class PlayerGameInput: public GameInput, public GameKeyEventListenerInterface {

    protected: const GameInputStrings gameInputStrings = GameInputStrings::getInstance();

    private: int32_t playerInputId;

public: PlayerGameInput(BasicArrayList gameKeyEventList, BasicArrayList removalGameKeyEventList, int32_t playerInputId) : GameInput(gameKeyEventList, removalGameKeyEventList){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->playerInputId= playerInputId;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void onPressGameKeyEvent(GameKeyEvent gameKeyEvent){
this->add(gameKeyEvent);
    
this->addForRemoval(gameKeyEvent);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void onDownGameKeyEvent(GameKeyEvent gameKeyEvent){
this->add(gameKeyEvent);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void onDownKeyEvent(GameKeyEvent gameKeyEvent){
this->add(gameKeyEvent);
    
this->addForRemoval(gameKeyEvent);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void onDownKey(Integer gameKeyEvent){
PreLogUtil::put(StringMaker().append(CommonLabels::getInstance().START_LABEL).append(gameKeyEvent.toString()).toString(), this, this->gameInputStrings.ON_DOWN_GAME_KEY);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void onUpGameKeyEvent(GameKeyEvent gameKeyEvent){
this->addForRemoval(gameKeyEvent);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void onUpKeyEvent(Integer gameKeyEvent){
}


    public: void onEvent(AllBinaryEventObject eventObject){
ForcedLogUtil::log(EventStrings::getInstance().PERFORMANCE_MESSAGE, this);
    
}


    public: int32_t getPlayerInputId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->playerInputId;
    
}


};

            

