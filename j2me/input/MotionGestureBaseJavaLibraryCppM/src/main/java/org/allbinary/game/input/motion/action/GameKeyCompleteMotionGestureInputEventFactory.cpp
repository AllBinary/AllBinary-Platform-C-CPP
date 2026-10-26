
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
        



            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameKeyCompleteMotionGestureInputEvent.h"

class GameKeyCompleteMotionGestureInputEventFactory
            : public Object
         {

    private: static const GameKeyCompleteMotionGestureInputEventFactory SINGLETON = GameKeyCompleteMotionGestureInputEventFactory();

    public: static GameKeyCompleteMotionGestureInputEventFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameKeyCompleteMotionGestureInputEventFactory::SINGLETON;
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const BasicArrayList eventList = BasicArrayListD();

    public: void add(GameKeyCompleteMotionGestureInputEvent gameKeyCompleteMotionGestureInputEvent){
this->eventList.add(gameKeyCompleteMotionGestureInputEvent);
    
}


    public: void updateAll(){
this->logUtil.putF(StringMaker().append(CommonLabels::getInstance().START_LABEL).appendint(this->eventList.size()).toString(), this, "updateAll");
    




                        for (
    int32_t index = this->eventList.size() -1;index >= 0; index--)
        {

    GameKeyCompleteMotionGestureInputEvent gameKeyCompleteMotionGestureInputEvent = this->eventList.objectArray[index];;
    
gameKeyCompleteMotionGestureInputEvent.update();
    
}

}


};

            

