
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_HORIZONTAROTATIONMANEUVERAI_H
        #define ORG_ALLBINARY_GAME_AG_AI_HORIZONTAROTATIONMANEUVERAI_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
class Canvas;
class ArtificialIntelligence;
#include <org/allbinary/ai/ArtificialIntelligenceTransitionInterface.h>
class IndexedAnimation;
class RotationAnimationInterface;
class RotationAnimationInterfaceCompositeInterface;
#include <org/allbinary/game/ai/BasicAI.h>
class GameInput;
class BasicVelocityProperties;
class VelocityInterface;
class VelocityInterfaceCompositeInterface;
class DisplayInfoSingleton;
class AllBinaryLayer;
class AllBinaryLayerManager;
class AngleIncrementInfo;
class CircularIndexUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class HorizontaRotationManeuverAI: public BasicAI, public ArtificialIntelligenceTransitionInterface {

    private: CircularIndexUtil* circularIndexUtil;

    private: int32_t currentSpeedDivisor = 5;

    private: IndexedAnimation* rotationAnimationInterface;

    private: BasicVelocityProperties* baseVelocityInterface;

    private: VelocityInterface* velocityInterface;

public: HorizontaRotationManeuverAI(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

    public: void transition();

                //@Throws(Exception.constructor)
            
    public: void processAI(AllBinaryLayerManager* allBinaryLayerManager);

    /*protected*/ public: void reverse();

    private: void accelerate();

    private: void drop();

    public: int32_t getId();

};

            


        #endif //ORG_ALLBINARY_GAME_AG_AI_HORIZONTAROTATIONMANEUVERAI_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_AG_AI_HORIZONTAROTATIONMANEUVERAI_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_AG_AI_HORIZONTAROTATIONMANEUVERAI_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Canvas.h>)
#include <javax/microedition/lcdui/Canvas.h>
#endif
#if __has_include(<org/allbinary/ai/ArtificialIntelligence.h>)
#include <org/allbinary/ai/ArtificialIntelligence.h>
#endif
#if __has_include(<org/allbinary/ai/ArtificialIntelligenceTransitionInterface.h>)
#include <org/allbinary/ai/ArtificialIntelligenceTransitionInterface.h>
#endif
#if __has_include(<org/allbinary/animation/IndexedAnimation.h>)
#include <org/allbinary/animation/IndexedAnimation.h>
#endif
#if __has_include(<org/allbinary/animation/RotationAnimationInterface.h>)
#include <org/allbinary/animation/RotationAnimationInterface.h>
#endif
#if __has_include(<org/allbinary/animation/RotationAnimationInterfaceCompositeInterface.h>)
#include <org/allbinary/animation/RotationAnimationInterfaceCompositeInterface.h>
#endif
#if __has_include(<org/allbinary/game/ai/BasicAI.h>)
#include <org/allbinary/game/ai/BasicAI.h>
#endif
#if __has_include(<org/allbinary/game/input/GameInput.h>)
#include <org/allbinary/game/input/GameInput.h>
#endif
#if __has_include(<org/allbinary/game/physics/velocity/BasicVelocityProperties.h>)
#include <org/allbinary/game/physics/velocity/BasicVelocityProperties.h>
#endif
#if __has_include(<org/allbinary/game/physics/velocity/VelocityInterface.h>)
#include <org/allbinary/game/physics/velocity/VelocityInterface.h>
#endif
#if __has_include(<org/allbinary/game/physics/velocity/VelocityInterfaceCompositeInterface.h>)
#include <org/allbinary/game/physics/velocity/VelocityInterfaceCompositeInterface.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/DisplayInfoSingleton.h>)
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayerManager.h>)
#include <org/allbinary/layer/AllBinaryLayerManager.h>
#endif
#if __has_include(<org/allbinary/math/AngleIncrementInfo.h>)
#include <org/allbinary/math/AngleIncrementInfo.h>
#endif
#if __has_include(<org/allbinary/util/CircularIndexUtil.h>)
#include <org/allbinary/util/CircularIndexUtil.h>
#endif

        #endif
    
