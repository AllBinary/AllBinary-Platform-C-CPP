
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class GameCanvasRunnableInterface;
class AllBinaryGameLayerManager;
class ProgressCanvas;
class ProgressCanvasFactory;
class StdUtil;
class ClientInformationFactory;
class PrimaryThreadPool;
class NullGameCanvasRunnable;
#include <org/allbinary/util/ABHashtable.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/midlet/GameMidlet.h"
class DemoRunnable;
class CreateGameRunnable;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DemoGameMidlet: public GameMidlet {

public: DemoGameMidlet(ClientInformationFactory* clientInformationFactory);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: bool isContinue();

    public: int32_t getHighestLevel();

                //@Throws(Exception.constructor)
            
    public: GameCanvasRunnableInterface* createDemoGameCanvasRunnableInterface();

                //@Throws(Exception.constructor)
            
    /*protected*/ public: GameCanvasRunnableInterface* createGameCanvasRunnable(AllBinaryGameLayerManager* allBinaryGameLayerManager);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: GameCanvasRunnableInterface* createGameCanvasRunnableInterface();

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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_MIDLET_DEMOGAMEMIDLET_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_MIDLET_DEMOGAMEMIDLET_H_COMPLETE
        #if __has_include(<org/allbinary/game/displayable/canvas/GameCanvasRunnableInterface.h>)
#include <org/allbinary/game/displayable/canvas/GameCanvasRunnableInterface.h>
#endif
#if __has_include(<org/allbinary/game/layer/AllBinaryGameLayerManager.h>)
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>
#endif
#if __has_include(<org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h>)
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h>
#endif
#if __has_include(<org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>)
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/ClientInformationFactory.h>)
#include <org/allbinary/logic/system/security/licensing/ClientInformationFactory.h>
#endif
#if __has_include(<org/allbinary/thread/PrimaryThreadPool.h>)
#include <org/allbinary/thread/PrimaryThreadPool.h>
#endif
#if __has_include(<org/allbinary/game/displayable/canvas/NullGameCanvasRunnable.h>)
#include <org/allbinary/game/displayable/canvas/NullGameCanvasRunnable.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include("org/allbinary/game/midlet/GameMidlet.h")
#include "org/allbinary/game/midlet/GameMidlet.h"
#endif
#if __has_include("org/allbinary/game/midlet/DemoRunnable.h")
#include "org/allbinary/game/midlet/DemoRunnable.h"
#endif
#if __has_include("org/allbinary/game/midlet/CreateGameRunnable.h")
#include "org/allbinary/game/midlet/CreateGameRunnable.h"
#endif

        #endif
    
