
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/displayable/canvas/GameCanvasRunnableInterface.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h>

      
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/ClientInformationFactory.h>

      
#include <org/allbinary/thread/PrimaryThreadPool.h>

      
#include <org/allbinary/game/displayable/canvas/NullGameCanvasRunnable.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/midlet/GameMidlet.h"
#include "org/allbinary/game/midlet/DemoRunnable.h"
#include "org/allbinary/game/midlet/CreateGameRunnable.h"

class DemoGameMidlet: public GameMidlet {

public: DemoGameMidlet(ClientInformationFactory* clientInformationFactory);

                //@Throws(Exception.constructor)
            
    protected: bool isContinue();

    public: int32_t getHighestLevel();

                //@Throws(Exception.constructor)
            
    public: GameCanvasRunnableInterface* createDemoGameCanvasRunnableInterface();

                //@Throws(Exception.constructor)
            
    protected: GameCanvasRunnableInterface* createGameCanvasRunnable(AllBinaryGameLayerManager* allBinaryGameLayerManager);

                //@Throws(Exception.constructor)
            
    protected: GameCanvasRunnableInterface* createGameCanvasRunnableInterface();

    public: void demoSetup();

    public: void postDemoSetup();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void setDemo();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void createGame();

    public: bool isReady();

};

            


        #endif //ORG_ALLBINARY_GAME_MIDLET_DEMOGAMEMIDLET_H
