
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

            #include "java/lang/Object.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PointFactory.h"
#include "GPoint.h"

class RelativeRelationship
            : public Object
         {

    public: static const RelativeRelationship NULL_RELATIVE_RELATIONSHIP = RelativeRelationship(PointFactory::getInstance().ZERO_ZERO, BasicArrayListUtil::getInstance().getImmutableInstance());

    private: BasicArrayList typesAllowedList;

    private: int32_t x;

    private: int32_t y;

    private: int32_t z;

public: RelativeRelationship(GPoint point, BasicArrayList typesAllowedList);

    public: int32_t getX();

    public: int32_t getY();

    public: int32_t getZ();

    public: BasicArrayList getTypesAllowedList();

    public: void setTypesAllowedList(BasicArrayList typesAllowedList);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_RELATIVERELATIONSHIP_H
