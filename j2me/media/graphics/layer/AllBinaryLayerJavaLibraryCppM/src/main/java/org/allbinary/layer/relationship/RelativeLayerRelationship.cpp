
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
        



        #ifndef ORG_ALLBINARY_LAYER_RELATIONSHIP_RELATIVELAYERRELATIONSHIP_CPP
        #define ORG_ALLBINARY_LAYER_RELATIONSHIP_RELATIVELAYERRELATIONSHIP_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/layer/relationship/RelativeLayerRelationship.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/RelativeRelationship.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

RelativeLayerRelationship::RelativeLayerRelationship(AllBinaryLayer* layer, GPoint* point, BasicArrayList* typesAllowedList) : RelativeRelationship(point, typesAllowedList), layer(AllBinaryLayer::NULL_ALLBINARY_LAYER){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->layer= layer;
    
}


    auto RelativeLayerRelationship::getX() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->layer->getXP() +RelativeRelationship::getX();
    
}


    auto RelativeLayerRelationship::getY() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->layer->getYP() +RelativeRelationship::getY();
    
}


    auto RelativeLayerRelationship::getZ() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->layer->getZP() +RelativeRelationship::getZ();
    
}




        #endif //ORG_ALLBINARY_LAYER_RELATIONSHIP_RELATIVELAYERRELATIONSHIP_CPP
