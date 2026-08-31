
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

            #include "../../../../../../java/lang/Object.h"
        
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
        

    private: static const SINGLETON: GameKeyCompleteMotionGestureInputEventFactory = new GameKeyCompleteMotionGestureInputEventFactory();

    public static GameKeyCompleteMotionGestureInputEventFactory getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const eventList: BasicArrayList = new BasicArrayListD();

    public add(GameKeyCompleteMotionGestureInputEvent gameKeyCompleteMotionGestureInputEvent);

    public updateAll();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_MOTION_ACTION_GAMEKEYCOMPLETEMOTIONGESTUREINPUTEVENTFACTORY_H
