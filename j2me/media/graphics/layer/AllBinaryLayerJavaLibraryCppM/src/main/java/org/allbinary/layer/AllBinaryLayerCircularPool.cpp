
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
        



            #include "../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/util/cache/BaseCircularPool.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AllBinaryLayerFactoryInterface.h"

class AllBinaryLayerCircularPool: public BaseCircularPool {
        

protected constructor (){

            super();
        }


                //@Throws(Exception.constructor)
            
    public initAllBinaryLayerCircularPool(AllBinaryLayerFactoryInterface allbinaryLayerFactoryInterface, int32_t total){
this.circularIndexUtil= CircularIndexUtil.createInstance(total);
    
this.OBJECT_ARRAY= new Array(total);
    




                        for (
    localIndex: int32_t = 0;localIndex < total; localIndex++)
        {
this.OBJECT_ARRAY[localIndex]= allbinaryLayerFactoryInterface!.getInstance();
    
}

}


};

            

