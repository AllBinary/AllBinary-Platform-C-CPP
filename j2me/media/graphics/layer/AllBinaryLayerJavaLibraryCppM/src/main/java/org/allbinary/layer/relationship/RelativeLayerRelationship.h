
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
        



        #ifndef ORG_ALLBINARY_LAYER_RELATIONSHIP_RELATIVELAYERRELATIONSHIP_H
        #define ORG_ALLBINARY_LAYER_RELATIONSHIP_RELATIVELAYERRELATIONSHIP_H

#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/RelativeRelationship.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class RelativeLayerRelationship: public RelativeRelationship {

    private: AllBinaryLayer layer = AllBinaryLayer::NULL_ALLBINARY_LAYER;

public: RelativeLayerRelationship(AllBinaryLayer layer, GPoint point, BasicArrayList typesAllowedList);

    public: int32_t getX();

    public: int32_t getY();

    public: int32_t getZ();

};

            


        #endif //ORG_ALLBINARY_LAYER_RELATIONSHIP_RELATIVELAYERRELATIONSHIP_H
