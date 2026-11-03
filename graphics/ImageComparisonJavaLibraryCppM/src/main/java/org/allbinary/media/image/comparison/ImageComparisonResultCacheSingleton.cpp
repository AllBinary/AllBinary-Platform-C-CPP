
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARISONRESULTCACHESINGLETON_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARISONRESULTCACHESINGLETON_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/comparison/ImageComparisonResultCacheSingleton.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/util/cache/CacheInterface.h>

      
#include <org/allbinary/logic/util/cache/CacheInterfaceFactory.h>

      
#include <org/allbinary/logic/util/cache/CachePolicyFactory.h>

      
#include <org/allbinary/logic/util/cache/CacheTypeFactory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
int32_t ImageComparisonResultCacheSingleton::initResult = ImageComparisonResultCacheSingleton::init();
        auto ImageComparisonResultCacheSingleton::init() -> int32_t {
                    

    LogUtil* logUtil = LogUtil::getInstance();;
    

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

    std::string STATIC_BLOCK = "Static Block";;
    

    std::string instance = "ImageComparisonCacheSingleton";;
    

        try {
            logUtil->putF(commonStrings->START, instance, STATIC_BLOCK);
    
ImageComparisonResultCacheSingleton::cacheInterface= CacheInterfaceFactory::getInstance(CacheTypeFactory::getInstance()->CACHE, CachePolicyFactory::getInstance()->ONE_MINUTE_FIVE_MAX);
    
logUtil->putF(commonStrings->END, instance, STATIC_BLOCK);
    

                //: 
} catch(Exception& e) 
            {
logUtil->put(commonStrings->EXCEPTION, instance, STATIC_BLOCK, &e);
    
}



                    return 0;
        }
                
ImageComparisonResultCacheSingleton::ImageComparisonResultCacheSingleton() : logUtil(LogUtil::getInstance()){
}


    auto ImageComparisonResultCacheSingleton::getInstance() -> CacheInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ImageComparisonResultCacheSingleton::cacheInterface;
    
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARISONRESULTCACHESINGLETON_CPP
