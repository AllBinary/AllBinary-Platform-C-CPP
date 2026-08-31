
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
        



        #ifndef ORG_ALLBINARY_GAME_MIDLET_DEMOGAMEMIDLET_H
        #define ORG_ALLBINARY_GAME_MIDLET_DEMOGAMEMIDLET_H

            #include "../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <java/util/Hashtable.h>

      
#include <org/allbinary/game/displayable/canvas/GameCanvasRunnableInterface.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h>

      
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/ClientInformationFactory.h>

      
#include <org/allbinary/thread/PrimaryThreadPool.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameMidlet.h"
#include "DemoRunnable.h"
#include "CreateGameRunnable.h"

class DemoGameMidlet: public GameMidlet {
        

public constructor (ClientInformationFactory clientInformationFactory);

                //@Throws(Exception.constructor)
            
    bool isContinue();

    public int32_t getHighestLevel();

                //@Throws(Exception.constructor)
            
    public GameCanvasRunnableInterface createDemoGameCanvasRunnableInterface();

                //@Throws(Exception.constructor)
            
    GameCanvasRunnableInterface createGameCanvasRunnable(AllBinaryGameLayerManager allBinaryGameLayerManager);

                //@Throws(Exception.constructor)
            
    GameCanvasRunnableInterface createGameCanvasRunnableInterface();

    public demoSetup();

    public postDemoSetup();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public setDemo();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public createGame();

    public bool isReady();

};

            


        #endif //ORG_ALLBINARY_GAME_MIDLET_DEMOGAMEMIDLET_H
