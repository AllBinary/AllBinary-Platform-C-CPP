
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class DisplayInfoSingleton;
class AllBinaryLayer;
class ViewPositionBase;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameLayerUtil
            : public virtual Object
         {

    public: static bool isOnScreen(AllBinaryLayer* layer);

    public: static bool isInside(int32_t rectX1, int32_t rectY1, int32_t rectX2, int32_t rectY2, int32_t rect2X1, int32_t rect2Y1, int32_t rect2X2, int32_t rect2Y2);

private: GameLayerUtil();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_GAMELAYERUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_GAMELAYERUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_GAMELAYERUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/displayable/DisplayInfoSingleton.h>)
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/view/ViewPositionBase.h>)
#include <org/allbinary/view/ViewPositionBase.h>
#endif

        #endif
    
