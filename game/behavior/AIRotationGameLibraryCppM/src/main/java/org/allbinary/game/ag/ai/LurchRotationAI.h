
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_LURCHROTATIONAI_H
        #define ORG_ALLBINARY_GAME_AG_AI_LURCHROTATIONAI_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/animation/RotationAnimationInterface.h>

      
#include <org/allbinary/animation/RotationAnimationInterfaceCompositeInterface.h>

      
#include <org/allbinary/game/ag/ai/tactical/LurchAI.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/math/AngleIncrementInfo.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LurchRotationAI: public LurchAI {

    private: IndexedAnimation* rotationAnimationInterface;

public: LurchRotationAI(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

    protected: void reverse();

    private: void update();

};

            


        #endif //ORG_ALLBINARY_GAME_AG_AI_LURCHROTATIONAI_H
