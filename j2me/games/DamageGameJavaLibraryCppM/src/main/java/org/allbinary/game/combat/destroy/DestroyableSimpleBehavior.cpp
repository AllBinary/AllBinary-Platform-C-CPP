
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

        
#include <org/allbinary/game/layer/CollidableCompositeLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/combat/destroy/DestroyableBaseBehavior.h"
#include "org/allbinary/game/combat/destroy/DestroyedLayerProcessor.h"

class DestroyableSimpleBehavior: public DestroyableBaseBehavior {

    protected: CollidableCompositeLayer* ownerLayer;

    private: bool destroyed = false;

public: DestroyableSimpleBehavior(CollidableCompositeLayer* ownerLayer){
this->ownerLayer= ownerLayer;
    
}


    public: bool isDestroyed(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->destroyed;
    
}


    public: void setDestroyed(bool destroyed){
this->destroyed= destroyed;
    

                        if(this->isDestroyed())
                        
                                    {
                                    DestroyedLayerProcessor::getInstance()->add(this->ownerLayer);
    

                                    }
                                
}


};

            

