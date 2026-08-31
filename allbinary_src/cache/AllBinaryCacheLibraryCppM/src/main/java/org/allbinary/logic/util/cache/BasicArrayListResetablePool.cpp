
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
        



            #include "../../../../../java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbstractArrayListPool.h"
#include "CacheableInterfaceFactoryInterface.h"
#include "CacheableInterface.h"

class BasicArrayListResetablePool: public AbstractArrayListPool {
        

public constructor (CacheableInterfaceFactoryInterface cacheableInterfaceFactoryInterface){
            super(cacheableInterfaceFactoryInterface);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public clear(){
}


                //@Throws(Exception.constructor)
            
    public CacheableInterface remove(any = {} key){

    size: int32_t = this.buffers.size()!;;
    

                        if(size > 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.buffers.removeAt(size -1) as CacheableInterface;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.cacheableInterfaceFactoryInterface!.getInstance(key);;
    

                        }
                            
}


};

            

