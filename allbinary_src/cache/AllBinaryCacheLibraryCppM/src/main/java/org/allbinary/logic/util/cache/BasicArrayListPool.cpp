
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
        
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbstractArrayListPool.h"
#include "CacheableInterfaceFactoryInterface.h"
#include "CacheableInterface.h"
#include "BasicArrayListCacheable.h"

class BasicArrayListPool: public AbstractArrayListPool {

public: BasicArrayListPool(CacheableInterfaceFactoryInterface cacheableInterfaceFactoryInterface){
            super(cacheableInterfaceFactoryInterface);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: void clear(){
this->buffers.clear();
    
}


                //@Throws(Exception.constructor)
            
    public: CacheableInterface remove(Object* key){

    int32_t size = this->buffers.size();;
    

                        if(size > 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->buffers.removeAt(size -1) as CacheableInterface;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->cacheableInterfaceFactoryInterface.getInstance(key);;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public: void addAll(BasicArrayList usedList){




                        for (
    int32_t index = usedList.size();--index >= 0; )
        {

    CacheableInterface anyType = usedList.objectArray[index]! as CacheableInterface;;
    
this->add(anyType);
    
}

usedList.clear();
    
}


                //@Throws(Exception.constructor)
            
    public: void releaseUsedBackToPool(BasicArrayList usedList){




                        for (
    int32_t index = usedList.size();--index >= 0; )
        {

    BasicArrayListCacheable list = usedList.objectArray[index]! as BasicArrayListCacheable;;
    

                        if(list.size() == 0)
                        
                                    {
                                    usedList.removeAt(index);
    
this->add(list);
    

                                    }
                                
}

}


};

            

