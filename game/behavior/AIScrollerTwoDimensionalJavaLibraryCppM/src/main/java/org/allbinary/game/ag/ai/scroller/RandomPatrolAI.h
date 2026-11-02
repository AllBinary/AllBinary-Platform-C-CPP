
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_SCROLLER_RANDOMPATROLAI_H
        #define ORG_ALLBINARY_GAME_AG_AI_SCROLLER_RANDOMPATROLAI_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Canvas;
class GameInput;
class MyRandomFactory;
class AllBinaryLayer;
class AllBinaryLayerManager;
template<typename T1, typename T2> class ABHashtable;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/ag/ai/scroller/BasePatrolAI.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RandomPatrolAI: public BasePatrolAI {

    private: bool changedDirection = true;

public: RandomPatrolAI(ABHashtable<Object*, Object*>* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

    private: void updateRandomDistance();

                //@Throws(Exception.constructor)
            
    public: void processAI(AllBinaryLayerManager* allBinaryLayerManager);

    /*protected*/ public: void nextDirection();

};

            


        #endif //ORG_ALLBINARY_GAME_AG_AI_SCROLLER_RANDOMPATROLAI_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_AG_AI_SCROLLER_RANDOMPATROLAI_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_AG_AI_SCROLLER_RANDOMPATROLAI_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Canvas.h>)
#include <javax/microedition/lcdui/Canvas.h>
#endif
#if __has_include(<org/allbinary/game/input/GameInput.h>)
#include <org/allbinary/game/input/GameInput.h>
#endif
#if __has_include(<org/allbinary/game/rand/MyRandomFactory.h>)
#include <org/allbinary/game/rand/MyRandomFactory.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayerManager.h>)
#include <org/allbinary/layer/AllBinaryLayerManager.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include("org/allbinary/game/ag/ai/scroller/BasePatrolAI.h")
#include "org/allbinary/game/ag/ai/scroller/BasePatrolAI.h"
#endif

        #endif
    
