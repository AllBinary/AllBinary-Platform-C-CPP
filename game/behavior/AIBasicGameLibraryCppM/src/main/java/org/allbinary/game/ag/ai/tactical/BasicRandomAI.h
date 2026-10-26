
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_TACTICAL_BASICRANDOMAI_H
        #define ORG_ALLBINARY_GAME_AG_AI_TACTICAL_BASICRANDOMAI_H

            #include <vector>
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/game/ai/BasicAI.h>

      
#include <org/allbinary/game/ag/ai/InputProbability.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/game/rand/MyRandomFactory.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/logic/util/visitor/Visitor.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicRandomAI: public BasicAI {

    private: int32_t i_random = 0;

    private: InputProbability inputProbability;

    private: Visitor visitor;

    private: const std::vector<int32_t> keyArray = {Canvas::UP,Canvas::DOWN,Canvas::LEFT,Canvas::RIGHT,Canvas::KEY_NUM1,Canvas::KEY_NUM7,Canvas::KEY_NUM9};

public: BasicRandomAI(AllBinaryLayer ownerLayerInterface, GameInput gameInput, InputProbability inputProbability, Visitor visitor);

    private: const MyRandomFactory myRandomFactory = MyRandomFactory::getInstance();

                //@Throws(Exception.constructor)
            
    public: void processAI(AllBinaryLayerManager allBinaryLayerManager);

};

            


        #endif //ORG_ALLBINARY_GAME_AG_AI_TACTICAL_BASICRANDOMAI_H
