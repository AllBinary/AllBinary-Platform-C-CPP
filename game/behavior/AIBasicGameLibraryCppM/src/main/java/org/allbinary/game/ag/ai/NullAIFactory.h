
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_NULLAIFACTORY_H
        #define ORG_ALLBINARY_GAME_AG_AI_NULLAIFACTORY_H

            #include "java/lang/Object.h"
        
#include <org/allbinary/ai/ArtificialIntelligenceInterface.h>

      
#include <org/allbinary/game/ai/ArtificialIntelligenceInterfaceFactoryInterface.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "NullAI.h"

class NullAIFactory
            : public Object
        : public ArtificialIntelligenceInterfaceFactoryInterface {

    private: static NullAI NULL_AI = NullAI();

    public: static ArtificialIntelligenceInterface getInstance();

    public: ArtificialIntelligenceInterface getInstance(ABHashtable<Object*, Object*> hashtable, AllBinaryLayer ownerLayerInterface, GameInput gameInput);

};

            


        #endif //ORG_ALLBINARY_GAME_AG_AI_NULLAIFACTORY_H
