
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
        #include "AllBinaryEventObjectFactoryInterface.h"

class AllBinaryEventCircularPool: public BaseCircularPool {
        

public constructor (int32_t max){

            super();
        this.OBJECT_ARRAY= new Array(max);
    
this.circularIndexUtil= CircularIndexUtil.createInstance(max);
    
}


    public initAllBinaryEventCircularPool(AllBinaryEventObjectFactoryInterface allBinaryEventObjectFactoryInterface){
this.circularIndexUtil!.setIndex(0);
    

    size: int32_t = this.circularIndexUtil!.getSize()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
this.OBJECT_ARRAY[index]= allBinaryEventObjectFactoryInterface!.getInstance();
    
}

}


};

            

