
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class IndexedAnimation;
class RotationAnimationInterface;
class RotationAnimationInterfaceCompositeInterface;
#include <org/allbinary/game/ag/ai/tactical/LurchAI.h>
class GameInput;
class AllBinaryLayer;
class AngleIncrementInfo;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class LurchRotationAI: public LurchAI {

    private: IndexedAnimation* rotationAnimationInterface;

public: LurchRotationAI(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

    /*protected*/ public: void reverse();

    private: void update();

};

            


        #endif //ORG_ALLBINARY_GAME_AG_AI_LURCHROTATIONAI_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_AG_AI_LURCHROTATIONAI_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_AG_AI_LURCHROTATIONAI_H_COMPLETE
        #if __has_include(<org/allbinary/animation/IndexedAnimation.h>)
#include <org/allbinary/animation/IndexedAnimation.h>
#endif
#if __has_include(<org/allbinary/animation/RotationAnimationInterface.h>)
#include <org/allbinary/animation/RotationAnimationInterface.h>
#endif
#if __has_include(<org/allbinary/animation/RotationAnimationInterfaceCompositeInterface.h>)
#include <org/allbinary/animation/RotationAnimationInterfaceCompositeInterface.h>
#endif
#if __has_include(<org/allbinary/game/ag/ai/tactical/LurchAI.h>)
#include <org/allbinary/game/ag/ai/tactical/LurchAI.h>
#endif
#if __has_include(<org/allbinary/game/input/GameInput.h>)
#include <org/allbinary/game/input/GameInput.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/math/AngleIncrementInfo.h>)
#include <org/allbinary/math/AngleIncrementInfo.h>
#endif

        #endif
    
