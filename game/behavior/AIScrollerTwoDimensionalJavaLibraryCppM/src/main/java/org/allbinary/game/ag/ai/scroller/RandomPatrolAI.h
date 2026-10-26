
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

            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/game/rand/MyRandomFactory.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasePatrolAI.h"

class RandomPatrolAI: public BasePatrolAI {

    private: bool changedDirection = true;

public: RandomPatrolAI(ABHashtable<Object*, Object*> hashtable, AllBinaryLayer ownerLayerInterface, GameInput gameInput);

    private: void updateRandomDistance();

                //@Throws(Exception.constructor)
            
    public: void processAI(AllBinaryLayerManager allBinaryLayerManager);

    protected: void nextDirection();

};

            


        #endif //ORG_ALLBINARY_GAME_AG_AI_SCROLLER_RANDOMPATROLAI_H
