
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_MOTION_ACTION_GAMEKEYCOMPLETEMOTIONGESTUREINPUTEVENTFACTORY_H
        #define ORG_ALLBINARY_GAME_INPUT_MOTION_ACTION_GAMEKEYCOMPLETEMOTIONGESTUREINPUTEVENTFACTORY_H

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

class GameKeyCompleteMotionGestureInputEventFactory
            : public Object
         {

    private: static GameKeyCompleteMotionGestureInputEventFactory* SINGLETON() { static std::unique_ptr<GameKeyCompleteMotionGestureInputEventFactory> value(new GameKeyCompleteMotionGestureInputEventFactory()); return value.get(); }

    public: static GameKeyCompleteMotionGestureInputEventFactory* getInstance();

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: BasicArrayList* eventList = new BasicArrayListD();

    public: void add(GameKeyCompleteMotionGestureInputEvent* gameKeyCompleteMotionGestureInputEvent);

    public: void updateAll();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_MOTION_ACTION_GAMEKEYCOMPLETEMOTIONGESTUREINPUTEVENTFACTORY_H
