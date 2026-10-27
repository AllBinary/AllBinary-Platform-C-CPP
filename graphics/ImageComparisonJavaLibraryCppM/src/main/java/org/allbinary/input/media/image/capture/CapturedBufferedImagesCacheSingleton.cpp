
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
        



        #ifndef ORG_ALLBINARY_INPUT_MEDIA_IMAGE_CAPTURE_CAPTUREDBUFFEREDIMAGESCACHESINGLETON_CPP
        #define ORG_ALLBINARY_INPUT_MEDIA_IMAGE_CAPTURE_CAPTUREDBUFFEREDIMAGESCACHESINGLETON_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/media/image/capture/CapturedBufferedImagesCacheSingleton.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/util/cache/AutomaticCacheInterface.h>

      
#include <org/allbinary/logic/util/cache/CacheInterface.h>

      
#include <org/allbinary/logic/util/cache/CacheInterfaceFactory.h>

      
#include <org/allbinary/logic/util/cache/CachePolicyFactory.h>

      
#include <org/allbinary/logic/util/cache/CacheTypeFactory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

CapturedBufferedImagesCacheSingleton::CapturedBufferedImagesCacheSingleton() : logUtil(LogUtil::getInstance()){
}


    auto CapturedBufferedImagesCacheSingleton::getInstance() -> CacheInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CapturedBufferedImagesCacheSingleton::cacheInterface;
    
}

int32_t CapturedBufferedImagesCacheSingleton::initResult = CapturedBufferedImagesCacheSingleton::init();
        auto CapturedBufferedImagesCacheSingleton::init() -> int32_t {
                    

    LogUtil* logUtil = LogUtil::getInstance();;
    

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

    std::string STATIC_BLOCK = "Static Block";;
    

    std::string instance = "CapturedBufferedImagesCacheSingleton";;
    

        try {
            logUtil->putF(commonStrings->START, instance, STATIC_BLOCK);
    
CapturedBufferedImagesCacheSingleton::cacheInterface= dynamic_cast<AutomaticCacheInterface*>(CacheInterfaceFactory::getInstance((), ()));
    
logUtil->putF(commonStrings->END, instance, STATIC_BLOCK);
    

                //: 
} catch(Exception& e) 
            {
logUtil->put(commonStrings->EXCEPTION, instance, STATIC_BLOCK, &e);
    
}



                    return 0;
        }
                


        #endif //ORG_ALLBINARY_INPUT_MEDIA_IMAGE_CAPTURE_CAPTUREDBUFFEREDIMAGESCACHESINGLETON_CPP
