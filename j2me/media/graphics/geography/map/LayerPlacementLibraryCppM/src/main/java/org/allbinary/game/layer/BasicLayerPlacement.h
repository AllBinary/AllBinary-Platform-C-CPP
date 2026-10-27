
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_BASICLAYERPLACEMENT_H
        #define ORG_ALLBINARY_GAME_LAYER_BASICLAYERPLACEMENT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class LayerPlacementType;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicLayerPlacement
            : public virtual Object
         {

    private: LayerPlacementType* layerType;

    private: int32_t width;

    private: int32_t height;

public: BasicLayerPlacement(LayerPlacementType* layerType, int32_t width, int32_t height);

    public: int32_t getWidth();

    public: int32_t getHeight();

    public: LayerPlacementType* getLayerType();

    /*protected*/ public: void setLayerType(LayerPlacementType* layerType);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_BASICLAYERPLACEMENT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_BASICLAYERPLACEMENT_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_BASICLAYERPLACEMENT_H_COMPLETE
        #if __has_include("org/allbinary/game/layer/LayerPlacementType.h")
#include "org/allbinary/game/layer/LayerPlacementType.h"
#endif

        #endif
    
