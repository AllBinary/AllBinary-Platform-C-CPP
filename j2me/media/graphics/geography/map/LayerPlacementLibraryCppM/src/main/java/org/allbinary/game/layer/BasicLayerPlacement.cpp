
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/LayerPlacementType.h"

class BasicLayerPlacement
            : public Object
         {

    private: LayerPlacementType* layerType;

    private: int32_t width;

    private: int32_t height;

public: BasicLayerPlacement(LayerPlacementType* layerType, int32_t width, int32_t height){
this->layerType= layerType;
    
this->width= width;
    
this->height= height;
    
}


    public: int32_t getWidth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->width;
    
}


    public: int32_t getHeight(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->height;
    
}


    public: LayerPlacementType* getLayerType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->layerType;
    
}


    protected: void setLayerType(LayerPlacementType* layerType){
this->layerType= layerType;
    
}


};

            

