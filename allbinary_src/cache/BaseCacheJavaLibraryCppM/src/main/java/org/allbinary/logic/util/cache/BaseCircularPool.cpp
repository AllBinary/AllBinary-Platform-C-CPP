
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AllBinaryObjectFactoryInterface.h"

class BaseCircularPool
            : public Object
         {
        

    circularIndexUtil: CircularIndexUtil = CircularIndexUtil.NULL_CIRCULAR_INDEX_UTIL;

    OBJECT_ARRAY: std::vector<any> = NullUtil.getInstance()!.NULL_OBJECT_ARRAY;

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public any getNextInstance(){

    anyType: any = this.OBJECT_ARRAY[this.circularIndexUtil!.getIndex()]!;;
    
this.circularIndexUtil!.next();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return anyType;
    
}


    public init(AllBinaryObjectFactoryInterface allBinaryObjectFactoryInterface){
this.circularIndexUtil!.setIndex(0);
    

    size: int32_t = this.circularIndexUtil!.getSize()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
this.OBJECT_ARRAY[index]= allBinaryObjectFactoryInterface!.getInstance();
    
}

}


                //@Throws(Exception.constructor)
            
    public any getInstance(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.OBJECT_ARRAY[index]!;
    
}


};

            

