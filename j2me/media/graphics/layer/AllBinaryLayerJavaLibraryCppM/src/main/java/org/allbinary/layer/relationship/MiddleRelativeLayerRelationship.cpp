
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
        



        #ifndef ORG_ALLBINARY_LAYER_RELATIONSHIP_MIDDLERELATIVELAYERRELATIONSHIP_CPP
        #define ORG_ALLBINARY_LAYER_RELATIONSHIP_MIDDLERELATIVELAYERRELATIONSHIP_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/layer/relationship/MiddleRelativeLayerRelationship.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/layer/relationship/RelativeLayerRelationship.h"


MiddleRelativeLayerRelationship::MiddleRelativeLayerRelationship(AllBinaryLayer* layer) : RelativeLayerRelationship(layer, PointFactory::getInstance()->createXY(layer->getHalfWidth(), layer->getHalfHeight()), BasicArrayListUtil::getInstance()->getImmutableInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}




        #endif //ORG_ALLBINARY_LAYER_RELATIONSHIP_MIDDLERELATIVELAYERRELATIONSHIP_CPP
