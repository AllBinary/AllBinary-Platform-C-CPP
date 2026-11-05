
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class GPoint;
#include <org/allbinary/graphics/RelativeRelationship.h>
class AllBinaryLayer;
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RelativeLayerRelationship: public RelativeRelationship {

    private: AllBinaryLayer* layer;

public: RelativeLayerRelationship(AllBinaryLayer* layer, GPoint* point, BasicArrayList* typesAllowedList);

    public: int32_t getX();

    public: int32_t getY();

    public: int32_t getZ();

};

            


        #endif //ORG_ALLBINARY_LAYER_RELATIONSHIP_RELATIVELAYERRELATIONSHIP_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LAYER_RELATIONSHIP_RELATIVELAYERRELATIONSHIP_H_COMPLETE)
        #define ORG_ALLBINARY_LAYER_RELATIONSHIP_RELATIVELAYERRELATIONSHIP_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/GPoint.h>)
#include <org/allbinary/graphics/GPoint.h>
#endif
#if __has_include(<org/allbinary/graphics/RelativeRelationship.h>)
#include <org/allbinary/graphics/RelativeRelationship.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

        #endif
    
