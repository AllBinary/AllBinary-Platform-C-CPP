
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_GAMELAYERUTIL_H
        #define ORG_ALLBINARY_GAME_LAYER_GAMELAYERUTIL_H

            #include "java/lang/Object.h"
        
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/view/ViewPositionBase.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameLayerUtil
            : public Object
         {

    public: static bool isOnScreen(AllBinaryLayer layer);

    public: static bool isInside(int32_t rectX1, int32_t rectY1, int32_t rectX2, int32_t rectY2, int32_t rect2X1, int32_t rect2Y1, int32_t rect2X2, int32_t rect2Y2);

private: GameLayerUtil();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_GAMELAYERUTIL_H
