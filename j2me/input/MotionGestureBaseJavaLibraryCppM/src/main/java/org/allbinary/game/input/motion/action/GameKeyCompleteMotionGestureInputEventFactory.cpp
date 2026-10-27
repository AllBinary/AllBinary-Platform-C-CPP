
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_MOTION_ACTION_GAMEKEYCOMPLETEMOTIONGESTUREINPUTEVENTFACTORY_CPP
        #define ORG_ALLBINARY_GAME_INPUT_MOTION_ACTION_GAMEKEYCOMPLETEMOTIONGESTUREINPUTEVENTFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEventFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEvent.h"


GameKeyCompleteMotionGestureInputEventFactory::GameKeyCompleteMotionGestureInputEventFactory() : logUtil(LogUtil::getInstance()), eventList(new BasicArrayListD()) {
        }
        auto GameKeyCompleteMotionGestureInputEventFactory::SINGLETON_owner() -> GameKeyCompleteMotionGestureInputEventFactory* { static std::unique_ptr<GameKeyCompleteMotionGestureInputEventFactory> value(new GameKeyCompleteMotionGestureInputEventFactory()); return value.get(); }
GameKeyCompleteMotionGestureInputEventFactory* GameKeyCompleteMotionGestureInputEventFactory::SINGLETON = GameKeyCompleteMotionGestureInputEventFactory::SINGLETON_owner();

    auto GameKeyCompleteMotionGestureInputEventFactory::getInstance() -> GameKeyCompleteMotionGestureInputEventFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameKeyCompleteMotionGestureInputEventFactory::SINGLETON;
    
}


    auto GameKeyCompleteMotionGestureInputEventFactory::add(GameKeyCompleteMotionGestureInputEvent* gameKeyCompleteMotionGestureInputEvent) -> void{
this->eventList->add(gameKeyCompleteMotionGestureInputEvent);
    
}


    auto GameKeyCompleteMotionGestureInputEventFactory::updateAll() -> void{
this->logUtil->putF((new StringMaker())->append(CommonLabels::getInstance()->START_LABEL)->appendint(this->eventList->size())->toString(), this, "updateAll");
    




                        for (
    int32_t index = this->eventList->size() -1;index >= 0; index--)
        {

    GameKeyCompleteMotionGestureInputEvent* gameKeyCompleteMotionGestureInputEvent = dynamic_cast<GameKeyCompleteMotionGestureInputEvent*>(this->eventList->objectArray[index]);;
    
gameKeyCompleteMotionGestureInputEvent->update();
    
}

}




        #endif //ORG_ALLBINARY_GAME_INPUT_MOTION_ACTION_GAMEKEYCOMPLETEMOTIONGESTUREINPUTEVENTFACTORY_CPP
