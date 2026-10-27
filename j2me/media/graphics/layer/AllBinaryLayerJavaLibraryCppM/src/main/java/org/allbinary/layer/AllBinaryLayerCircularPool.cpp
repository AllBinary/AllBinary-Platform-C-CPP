
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/util/cache/BaseCircularPool.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/layer/AllBinaryLayerFactoryInterface.h"

class AllBinaryLayerCircularPool: public BaseCircularPool {

protected: AllBinaryLayerCircularPool(){
}


                //@Throws(Exception.constructor)
            
    public: void initAllBinaryLayerCircularPool(AllBinaryLayerFactoryInterface* allbinaryLayerFactoryInterface, int32_t total){
this->circularIndexUtil= CircularIndexUtil::createInstance(total);
    
this->OBJECT_ARRAY= std::vector<AllBinaryLayer*>(total);
    




                        for (
    int32_t localIndex = 0;localIndex < total; localIndex++)
        {
this->OBJECT_ARRAY[localIndex]= allbinaryLayerFactoryInterface->getInstance();
    
}

}


};

            

