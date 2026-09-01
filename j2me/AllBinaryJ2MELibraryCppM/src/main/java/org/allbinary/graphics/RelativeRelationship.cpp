
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
        



            #include "../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
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

public: RelativeRelationship(GPoint point, BasicArrayList typesAllowedList){
this->x= point.getX();
    
this->y= point.getY();
    
this->z= point.getZ();
    
this->typesAllowedList= typesAllowedList;
    
}


    public: int32_t getX(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->x;
    
}


    public: int32_t getY(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->y;
    
}


    public: int32_t getZ(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->z;
    
}


    public: BasicArrayList getTypesAllowedList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->typesAllowedList;
    
}


    public: void setTypesAllowedList(BasicArrayList typesAllowedList){
this->typesAllowedList= typesAllowedList;
    
}


};

            

