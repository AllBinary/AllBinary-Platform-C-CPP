
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_CACHE_BUFFEREDIMAGEPOOLSINGLETON_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_CACHE_BUFFEREDIMAGEPOOLSINGLETON_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/cache/BufferedImagePoolSingleton.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/util/cache/CachePolicyFactory.h>

      
#include <org/allbinary/logic/util/cache/PoolInterface.h>

      
#include <org/allbinary/logic/util/cache/PoolInterfaceFactory.h>

      
#include <org/allbinary/logic/util/cache/PoolTypeFactory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/cache/BufferedImageCacheableFactory.h"

int32_t BufferedImagePoolSingleton::initResult = BufferedImagePoolSingleton::init();
        auto BufferedImagePoolSingleton::init() -> int32_t {
                    

    LogUtil* logUtil = LogUtil::getInstance();;
    

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

    std::string STATIC_BLOCK = "Static Block";;
    

    std::string instance = "BufferedImagePoolSingleton";;
    

        try {
            logUtil->putF(commonStrings->START, instance, STATIC_BLOCK);
    
BufferedImagePoolSingleton::poolInterface= PoolInterfaceFactory::getInstance(new BufferedImageCacheableFactory(), PoolTypeFactory::getInstance()->VECTOR_POOL, CachePolicyFactory::getInstance()->MAX_TIME_THOUSAND_MAX);
    
logUtil->putF(commonStrings->END, instance, STATIC_BLOCK);
    

                //: 
} catch(Exception& e) 
            {
logUtil->put(commonStrings->EXCEPTION, instance, STATIC_BLOCK, &e);
    
}



                    return 0;
        }
                
BufferedImagePoolSingleton::BufferedImagePoolSingleton(){
}


    auto BufferedImagePoolSingleton::getInstance() -> PoolInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BufferedImagePoolSingleton::poolInterface;
    
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_CACHE_BUFFEREDIMAGEPOOLSINGLETON_CPP
