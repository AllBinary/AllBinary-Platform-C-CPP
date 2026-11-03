
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_RELATIVERELATIONSHIP_CPP
        #define ORG_ALLBINARY_GRAPHICS_RELATIVERELATIONSHIP_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/RelativeRelationship.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/GPoint.h"

auto RelativeRelationship::NULL_RELATIVE_RELATIONSHIP_owner() -> RelativeRelationship* { static std::unique_ptr<RelativeRelationship> value(new RelativeRelationship(PointFactory::getInstance()->ZERO_ZERO, BasicArrayListUtil::getInstance()->getImmutableInstance())); return value.get(); }
RelativeRelationship* RelativeRelationship::NULL_RELATIVE_RELATIONSHIP = RelativeRelationship::NULL_RELATIVE_RELATIONSHIP_owner();

RelativeRelationship::RelativeRelationship(GPoint* point, BasicArrayList* typesAllowedList){
this->x= point->getX();
    
this->y= point->getY();
    
this->z= point->getZ();
    
this->typesAllowedList= typesAllowedList;
    
}


    auto RelativeRelationship::getX() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->x;
    
}


    auto RelativeRelationship::getY() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->y;
    
}


    auto RelativeRelationship::getZ() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->z;
    
}


    auto RelativeRelationship::getTypesAllowedList() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->typesAllowedList;
    
}


    auto RelativeRelationship::setTypesAllowedList(BasicArrayList* typesAllowedList) -> void{
this->typesAllowedList= typesAllowedList;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_RELATIVERELATIONSHIP_CPP
