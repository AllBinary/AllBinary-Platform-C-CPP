
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
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/util/cache/CachePolicyFactory.h>

      
#include <org/allbinary/logic/util/cache/PoolInterface.h>

      
#include <org/allbinary/logic/util/cache/PoolInterfaceFactory.h>

      
#include <org/allbinary/logic/util/cache/PoolTypeFactory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BufferedImageCacheableFactory.h"

class BufferedImagePoolSingleton
            : public Object
         {

    private: static PoolInterface poolInterface = 
                null
            ;

                    static int32_t initResult = BufferedImagePoolSingleton::init();
                static int32_t init() { 
                    

    LogUtil logUtil = LogUtil::getInstance();;
    

    CommonStrings commonStrings = CommonStrings::getInstance();;
    

    std::string STATIC_BLOCK = "Static Block";;
    

    std::string instance = "BufferedImagePoolSingleton";;
    

        try {
            logUtil.putF(commonStrings.START, instance, STATIC_BLOCK);
    
BufferedImagePoolSingleton::poolInterface= PoolInterfaceFactory::getInstance(BufferedImageCacheableFactory(), PoolTypeFactory::getInstance().VECTOR_POOL, CachePolicyFactory::getInstance().MAX_TIME_THOUSAND_MAX);
    
logUtil.putF(commonStrings.END, instance, STATIC_BLOCK);
    

                //: 
} catch(e) 
            {
logUtil.put(commonStrings.EXCEPTION, instance, STATIC_BLOCK, e);
    
}



                    return 0;
                }
            
    public: static PoolInterface getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BufferedImagePoolSingleton::poolInterface;
    
}


private: BufferedImagePoolSingleton(){
}


};

            

