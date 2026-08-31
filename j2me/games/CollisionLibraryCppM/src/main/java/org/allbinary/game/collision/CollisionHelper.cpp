
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
        



            #include "../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/layer/CollidableCompositeLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CollisionHelper
            : public Object
         {
        

    sourceLayerInterface: AllBinaryLayer;

public constructor (AllBinaryLayer sourceLayerInterface){

            super();
        this.sourceLayerInterface= sourceLayerInterface;
    
}


    public bool isCollidable(CollidableCompositeLayer layerInterface){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    public AllBinaryLayer getOwnerLayerInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.sourceLayerInterface;
    
}


    public setOwnerLayerInterface(AllBinaryLayer sourceLayerInterface){
this.sourceLayerInterface= sourceLayerInterface;
    
}


};

            

