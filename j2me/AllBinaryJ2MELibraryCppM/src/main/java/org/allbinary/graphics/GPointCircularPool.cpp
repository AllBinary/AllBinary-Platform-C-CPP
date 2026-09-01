
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
        



#include <org/allbinary/logic/util/cache/BaseCircularPool.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CustomGPoint.h"

class GPointCircularPool: public BaseCircularPool {

public: GPointCircularPool(int32_t size){
this->circularIndexUtil= CircularIndexUtil::createInstance(size);
    
this->OBJECT_ARRAY= new Array(size);
    




                        for (
    int32_t index = size -1;index >= 0; index--)
        {
this->OBJECT_ARRAY[index]= CustomGPoint::getInstance3(0, 0);
    
}

}


};

            

