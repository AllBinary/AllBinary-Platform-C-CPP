
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_BOUNDBOUNCEAI_H
        #define ORG_ALLBINARY_GAME_AG_AI_BOUNDBOUNCEAI_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Graphics;
class BoundsVisitorInterface;
class LayerBounds;
#include <org/allbinary/game/ai/BasicAI.h>
class GameInput;
class Rectangle;
class AllBinaryLayer;
class AllBinaryLayerManager;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BoundBounceAI: public BasicAI {

    /*protected*/ public: int32_t currentRelativeAngle = 0;

    private: LayerBounds* layerBounds;

    private: BoundsVisitorInterface* boundsVisitorInterface;

public: BoundBounceAI(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput, LayerBounds* layerBounds, BoundsVisitorInterface* boundsVisitorInterface);

    public: void paint(Graphics* graphics);

                //@Throws(Exception.constructor)
            
    public: void processAI(AllBinaryLayerManager* allBinaryLayerManager);

};

            


        #endif //ORG_ALLBINARY_GAME_AG_AI_BOUNDBOUNCEAI_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_AG_AI_BOUNDBOUNCEAI_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_AG_AI_BOUNDBOUNCEAI_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/bounds/BoundsVisitorInterface.h>)
#include <org/allbinary/bounds/BoundsVisitorInterface.h>
#endif
#if __has_include(<org/allbinary/bounds/LayerBounds.h>)
#include <org/allbinary/bounds/LayerBounds.h>
#endif
#if __has_include(<org/allbinary/game/ai/BasicAI.h>)
#include <org/allbinary/game/ai/BasicAI.h>
#endif
#if __has_include(<org/allbinary/game/input/GameInput.h>)
#include <org/allbinary/game/input/GameInput.h>
#endif
#if __has_include(<org/allbinary/graphics/Rectangle.h>)
#include <org/allbinary/graphics/Rectangle.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayerManager.h>)
#include <org/allbinary/layer/AllBinaryLayerManager.h>
#endif

        #endif
    
