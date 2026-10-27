
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_SCROLLER_FLOCKINGAI_H
        #define ORG_ALLBINARY_GAME_AG_AI_SCROLLER_FLOCKINGAI_H

        
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
class BasicGroupFactory;
class GameInput;
class GroupLayerManagerListener;
class WeaponLayer;
class AllBinaryLayer;
class AllBinaryLayerManager;
class MathUtil;
#include <org/allbinary/util/ABHashtable.h>
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class BasePatrolAI;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class FlockingAI: public BasicAI {

    private: int32_t allowedDistance;

public: FlockingAI(ABHashtable<Object*, Object*>* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

                //@Throws(Exception.constructor)
            
    public: void processAI(AllBinaryLayerManager* allBinaryLayerManager);

    private: int32_t getXYDistance(AllBinaryLayer* allBinaryLayer);

};

            


        #endif //ORG_ALLBINARY_GAME_AG_AI_SCROLLER_FLOCKINGAI_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_AG_AI_SCROLLER_FLOCKINGAI_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_AG_AI_SCROLLER_FLOCKINGAI_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Canvas.h>)
#include <javax/microedition/lcdui/Canvas.h>
#endif
#if __has_include(<org/allbinary/game/ai/BasicAI.h>)
#include <org/allbinary/game/ai/BasicAI.h>
#endif
#if __has_include(<org/allbinary/game/identification/BasicGroupFactory.h>)
#include <org/allbinary/game/identification/BasicGroupFactory.h>
#endif
#if __has_include(<org/allbinary/game/input/GameInput.h>)
#include <org/allbinary/game/input/GameInput.h>
#endif
#if __has_include(<org/allbinary/game/layer/identification/GroupLayerManagerListener.h>)
#include <org/allbinary/game/layer/identification/GroupLayerManagerListener.h>
#endif
#if __has_include(<org/allbinary/game/layer/weapon/WeaponLayer.h>)
#include <org/allbinary/game/layer/weapon/WeaponLayer.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayerManager.h>)
#include <org/allbinary/layer/AllBinaryLayerManager.h>
#endif
#if __has_include(<org/allbinary/logic/math/MathUtil.h>)
#include <org/allbinary/logic/math/MathUtil.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include("org/allbinary/game/ag/ai/scroller/BasePatrolAI.h")
#include "org/allbinary/game/ag/ai/scroller/BasePatrolAI.h"
#endif

        #endif
    
