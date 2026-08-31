
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMEFRAMERUNNABLE_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMEFRAMERUNNABLE_H

            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/graphics/displayable/GameTickDisplayInfoSingleton.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelper.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameRunnable.h"
#include "AllBinaryGameCanvas.h"

class GameFrameRunnable: public GameRunnable {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const gameTickDisplayInfoSingleton: GameTickDisplayInfoSingleton = GameTickDisplayInfoSingleton.getInstance()!;

    private: const allBinaryGameCanvas: AllBinaryGameCanvas;

public constructor (AllBinaryGameCanvas allBinaryGameCanvas);

    private: const gameTickTimeDelayHelper: GameTickTimeDelayHelper = GameTickTimeDelayHelperFactory.getInstance()!;

    public run();

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMEFRAMERUNNABLE_H
