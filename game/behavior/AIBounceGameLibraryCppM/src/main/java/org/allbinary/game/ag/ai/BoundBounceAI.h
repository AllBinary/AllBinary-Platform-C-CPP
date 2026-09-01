
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

            #include "../../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/bounds/BoundsVisitorInterface.h>

      
#include <org/allbinary/bounds/LayerBounds.h>

      
#include <org/allbinary/game/ai/BasicAI.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BoundBounceAI: public BasicAI {

    protected: int32_t currentRelativeAngle = 0;

    private: LayerBounds layerBounds;

    private: BoundsVisitorInterface boundsVisitorInterface;

public: BoundBounceAI(AllBinaryLayer ownerLayerInterface, GameInput gameInput, LayerBounds layerBounds, BoundsVisitorInterface boundsVisitorInterface);

    public: void paint(Graphics graphics);

                //@Throws(Exception.constructor)
            
    public: void processAI(AllBinaryLayerManager allBinaryLayerManager);

};

            


        #endif //ORG_ALLBINARY_GAME_AG_AI_BOUNDBOUNCEAI_H
