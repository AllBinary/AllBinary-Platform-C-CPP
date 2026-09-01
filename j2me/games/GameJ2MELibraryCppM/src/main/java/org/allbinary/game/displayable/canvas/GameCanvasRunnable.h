
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMECANVASRUNNABLE_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMECANVASRUNNABLE_H

            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/graphics/displayable/GameTickDisplayInfoSingleton.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelper.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameRunnable.h"
#include "AllBinaryGameCanvas.h"

class GameCanvasRunnable: public GameRunnable {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const GameTickDisplayInfoSingleton gameTickDisplayInfoSingleton = GameTickDisplayInfoSingleton::getInstance();

    private: AllBinaryGameCanvas allBinaryGameCanvas;

public: GameCanvasRunnable(AllBinaryGameCanvas allBinaryGameCanvas);

    private: const GameTickTimeDelayHelper gameTickTimeDelayHelper = GameTickTimeDelayHelperFactory::getInstance();

    public: void run();

                //@Throws(Exception.constructor)
            
    public: void processLoopSleep();

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMECANVASRUNNABLE_H
