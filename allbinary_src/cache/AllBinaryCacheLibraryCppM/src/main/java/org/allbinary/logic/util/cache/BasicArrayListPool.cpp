
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

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/util/cache/AbstractArrayListPool.h"
#include "org/allbinary/logic/util/cache/CacheableInterfaceFactoryInterface.h"
#include "org/allbinary/logic/util/cache/CacheableInterface.h"
#include "org/allbinary/logic/util/cache/BasicArrayListCacheable.h"

class BasicArrayListPool: public AbstractArrayListPool {

public: BasicArrayListPool(CacheableInterfaceFactoryInterface* cacheableInterfaceFactoryInterface) : AbstractArrayListPool(cacheableInterfaceFactoryInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: void clear(){
this->buffers.clear();
    
}


                //@Throws(Exception.constructor)
            
    public: CacheableInterface* remove(Object* key){

    int32_t size = this->buffers.size();;
    

                        if(size > 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<CacheableInterface*>(this->buffers.removeAt(size -1));
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->cacheableInterfaceFactoryInterface.getInstance(key);;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public: void addAll(BasicArrayList* usedList){




                        for (
    int32_t index = usedList->size();--index >= 0; )
        {

    CacheableInterface* anyType = dynamic_cast<CacheableInterface*>(usedList->objectArray[index]);;
    
this->add(anyType);
    
}

usedList->clear();
    
}


                //@Throws(Exception.constructor)
            
    public: void releaseUsedBackToPool(BasicArrayList* usedList){




                        for (
    int32_t index = usedList->size();--index >= 0; )
        {

    BasicArrayListCacheable* list = dynamic_cast<BasicArrayListCacheable*>(usedList->objectArray[index]);;
    

                        if(list->size() == 0)
                        
                                    {
                                    usedList->removeAt(index);
    
this->add(list);
    

                                    }
                                
}

}


};

            

