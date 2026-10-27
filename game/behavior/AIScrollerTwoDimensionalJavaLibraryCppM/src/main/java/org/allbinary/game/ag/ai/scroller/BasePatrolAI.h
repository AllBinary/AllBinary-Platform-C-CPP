
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_SCROLLER_BASEPATROLAI_H
        #define ORG_ALLBINARY_GAME_AG_AI_SCROLLER_BASEPATROLAI_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
class Canvas;
#include <org/allbinary/game/ai/BasicAI.h>
class GameInput;
class BasicVelocityProperties;
class VelocityInterfaceCompositeInterface;
class AllBinaryLayer;
class MathUtil;
class SmallIntegerSingletonFactory;
#include <org/allbinary/util/ABHashtable.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasePatrolAI: public BasicAI {

    public: static int32_t MAX_DISTANCE;

    public: static int32_t DIRECTION_ARRAY;

    public: static int32_t FIRING_DISTANCE;

    public: static int32_t SPEED;

    /*protected*/ public: int32_t maxDistance;

    /*protected*/ public: int32_t currentDistance;

    /*protected*/ public: int32_t xTotalDistance= 0;

    /*protected*/ public: int32_t lastKeyDirection;

    /*protected*/ public: int32_t keyDirection;

public: BasePatrolAI(ABHashtable<Object*, Object*>* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

    /*protected*/ public: void update();

    private: void updateTotalDistance();

    private: void changeDirectionIfReachedPacingAreaMax();

    /*protected*/ public: void nextDirection();

    public: void disable();

};

            


        #endif //ORG_ALLBINARY_GAME_AG_AI_SCROLLER_BASEPATROLAI_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_AG_AI_SCROLLER_BASEPATROLAI_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_AG_AI_SCROLLER_BASEPATROLAI_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Canvas.h>)
#include <javax/microedition/lcdui/Canvas.h>
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
#if __has_include(<org/allbinary/game/physics/velocity/VelocityInterfaceCompositeInterface.h>)
#include <org/allbinary/game/physics/velocity/VelocityInterfaceCompositeInterface.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/logic/math/MathUtil.h>)
#include <org/allbinary/logic/math/MathUtil.h>
#endif
#if __has_include(<org/allbinary/logic/math/SmallIntegerSingletonFactory.h>)
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif

        #endif
    
