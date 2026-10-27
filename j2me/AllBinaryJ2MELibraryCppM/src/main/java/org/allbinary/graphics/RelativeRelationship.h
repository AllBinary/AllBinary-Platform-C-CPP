
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_RELATIVERELATIONSHIP_H
        #define ORG_ALLBINARY_GRAPHICS_RELATIVERELATIONSHIP_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class BasicArrayList;
class BasicArrayListUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class PointFactory;
class GPoint;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RelativeRelationship
            : public virtual Object
         {

    private: static RelativeRelationship* NULL_RELATIVE_RELATIONSHIP_owner();
    public: static RelativeRelationship* NULL_RELATIVE_RELATIONSHIP;

    private: BasicArrayList* typesAllowedList;

    private: int32_t x;

    private: int32_t y;

    private: int32_t z;

public: RelativeRelationship(GPoint* point, BasicArrayList* typesAllowedList);

    public: int32_t getX();

    public: int32_t getY();

    public: int32_t getZ();

    public: BasicArrayList* getTypesAllowedList();

    public: void setTypesAllowedList(BasicArrayList* typesAllowedList);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_RELATIVERELATIONSHIP_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_RELATIVERELATIONSHIP_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_RELATIVERELATIONSHIP_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListUtil.h>)
#include <org/allbinary/util/BasicArrayListUtil.h>
#endif
#if __has_include("org/allbinary/graphics/PointFactory.h")
#include "org/allbinary/graphics/PointFactory.h"
#endif
#if __has_include("org/allbinary/graphics/GPoint.h")
#include "org/allbinary/graphics/GPoint.h"
#endif

        #endif
    
