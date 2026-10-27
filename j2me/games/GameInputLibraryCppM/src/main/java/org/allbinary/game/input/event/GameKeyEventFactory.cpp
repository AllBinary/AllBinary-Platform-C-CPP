
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
        



            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/input/GameKeyEventSourceInterface.h>

      
#include <org/allbinary/game/input/Input.h>

      
#include <org/allbinary/game/input/InputFactory.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/event/GameKeyEvent.h"

class GameKeyEventFactory
            : public Object
         {

    private: static inline Object* instance = NullUtil::getInstance()->NULL_OBJECT;

    public: static GameKeyEventFactory* getInstance(){

                        if(GameKeyEventFactory::instance == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    GameKeyEventFactory::instance= new GameKeyEventFactory();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<GameKeyEventFactory*>(GameKeyEventFactory::instance);
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

    public: const int32_t TOUCH_BUTTON_SOURCE_ID = 2;

    public: const int32_t MOTION_GESTURE_SOURCE_ID = 3;

    private: const int32_t MAX_SOURCES = 4;

    private: std::vector<std::vector<GameKeyEvent*>> ARRAY = std::vector<std::vector<GameKeyEvent*>>(this->MAX_SOURCES, std::vector<GameKeyEvent*>(InputFactory::getInstance()->MAX));

private: GameKeyEventFactory(){
}


    public: void init(){

    NullUtil* nullUtil = NullUtil::getInstance();;
    

    int32_t size = InputFactory::getInstance()->MAX;;
    




                        for (
    int32_t index = this->MAX_SOURCES;--index >= 0; )
        {




                        for (
    int32_t index2 = size;--index2 >= 0; )
        {
this->ARRAY[index][index2]= GameKeyEvent::createEvent(nullUtil->NULL_OBJECT, index, index2);
    
}

}

}


                //@Throws(Exception.constructor)
            
    public: GameKeyEvent* getInstanceForKey(GameKeyEventSourceInterface* anyType, int32_t key){

    GameKeyEvent* gameKeyEvent = this->ARRAY[anyType->getSourceId()][key];;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return gameKeyEvent;
    
}


                //@Throws(Exception.constructor)
            
    public: GameKeyEvent* getInstanceForInput(GameKeyEventSourceInterface* anyType, Input* input){

    GameKeyEvent* gameKeyEvent = this->ARRAY[anyType->getSourceId()][input->getId()];;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return gameKeyEvent;
    
}


};

            

