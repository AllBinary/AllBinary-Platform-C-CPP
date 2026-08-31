
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
        



            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RelativeLayerRelationship.h"

class MiddleRelativeLayerRelationship: public RelativeLayerRelationship {
        

public constructor (AllBinaryLayer layer){
            super(layer, PointFactory.getInstance()!.createXY(layer.getHalfWidth(), layer.getHalfHeight()), BasicArrayListUtil.getInstance()!.getImmutableInstance());
                    

                            //For kotlin this is before the body of the constructor.
                    
}


};

            

