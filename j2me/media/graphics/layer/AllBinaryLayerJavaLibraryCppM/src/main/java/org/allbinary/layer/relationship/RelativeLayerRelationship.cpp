
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

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/RelativeRelationship.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class RelativeLayerRelationship: public RelativeRelationship {
        

    private: layer: AllBinaryLayer = AllBinaryLayer.NULL_ALLBINARY_LAYER;

public constructor (AllBinaryLayer layer, GPoint point, BasicArrayList typesAllowedList){
            super(point, typesAllowedList);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.layer= layer;
    
}


    public int32_t getX(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.layer.getXP() +super.getX();
    
}


    public int32_t getY(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.layer.getYP() +super.getY();
    
}


    public int32_t getZ(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.layer.getZP() +super.getZ();
    
}


};

            

