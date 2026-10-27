
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
        



            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/util/cache/PoolInterface.h"
#include "org/allbinary/logic/util/cache/CacheableInterfaceFactoryInterface.h"
#include "org/allbinary/logic/util/cache/CacheableInterface.h"

class AbstractArrayListPool
            : public Object
        , public PoolInterface {

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    protected: BasicArrayList* buffers = new BasicArrayListD();

    protected: CacheableInterfaceFactoryInterface* cacheableInterfaceFactoryInterface;

public: AbstractArrayListPool(CacheableInterfaceFactoryInterface* cacheableInterfaceFactoryInterface){
this->cacheableInterfaceFactoryInterface= cacheableInterfaceFactoryInterface;
    
}


                //@Throws(Exception.constructor)
            
    public: void clear(){



                            throw new Exception(this->commonStrings->NOT_IMPLEMENTED);
                    
}


                //@Throws(Exception.constructor)
            
    public: CacheableInterface* remove(Object* key){



                            throw new Exception(this->commonStrings->NOT_IMPLEMENTED);
                    
}


                //@Throws(Exception.constructor)
            
    public: void add(CacheableInterface* cacheableInterface){
this->buffers->add(cacheableInterface);
    
}


                //@Throws(Exception.constructor)
            
    public: void addArray(std::vector<CacheableInterface*> cacheableInterfaces){




                        for (
    int32_t index = 0;index < cacheableInterfaces.size(); index++)
        {
this->buffers->add(cacheableInterfaces[index]);
    
}

}


};

            

