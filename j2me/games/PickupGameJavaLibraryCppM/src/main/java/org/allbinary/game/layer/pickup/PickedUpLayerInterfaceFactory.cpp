
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
        



#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PickedUpLayerInterfaceFactoryBase.h"
#include "PickedUpLayerType.h"
#include "IconLayer.h"

class PickedUpLayerInterfaceFactory: public PickedUpLayerInterfaceFactoryBase {
        

    private: const pickedUpLayerType: PickedUpLayerType;

    private: const iconLayer: IconLayer;

    private: const animationInterface: Animation;

protected constructor (PickedUpLayerType pickeUpLayerType, IconLayer iconLayer, Animation animationInterface){

            super();
        this.pickedUpLayerType= pickeUpLayerType;
    
this.animationInterface= animationInterface;
    
this.iconLayer= iconLayer;
    
}


    public AllBinaryLayer getIconLayer(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.iconLayer;
    
}


    public Animation getAnimationInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.animationInterface;
    
}


    public PickedUpLayerType getPickedUpLayerType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.pickedUpLayerType;
    
}


};

            

