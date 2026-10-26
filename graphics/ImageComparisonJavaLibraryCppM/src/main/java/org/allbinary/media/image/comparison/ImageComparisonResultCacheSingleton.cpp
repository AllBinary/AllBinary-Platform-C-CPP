
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/util/cache/CacheInterface.h>

      
#include <org/allbinary/logic/util/cache/CacheInterfaceFactory.h>

      
#include <org/allbinary/logic/util/cache/CachePolicyFactory.h>

      
#include <org/allbinary/logic/util/cache/CacheTypeFactory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ImageComparisonResultCacheSingleton
            : public Object
         {

    private: static CacheInterface cacheInterface = 
                null
            ;

                    static int32_t initResult = ImageComparisonResultCacheSingleton::init();
                static int32_t init() { 
                    

    LogUtil logUtil = LogUtil::getInstance();;
    

    CommonStrings commonStrings = CommonStrings::getInstance();;
    

    std::string STATIC_BLOCK = "Static Block";;
    

    std::string instance = "ImageComparisonCacheSingleton";;
    

        try {
            logUtil.putF(commonStrings.START, instance, STATIC_BLOCK);
    
ImageComparisonResultCacheSingleton::cacheInterface= CacheInterfaceFactory::getInstance(CacheTypeFactory::getInstance().CACHE, CachePolicyFactory::getInstance().ONE_MINUTE_FIVE_MAX);
    
logUtil.putF(commonStrings.END, instance, STATIC_BLOCK);
    

                //: 
} catch(e) 
            {
logUtil.put(commonStrings.EXCEPTION, instance, STATIC_BLOCK, e);
    
}



                    return 0;
                }
            
    public: static CacheInterface getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageComparisonResultCacheSingleton::cacheInterface;
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

private: ImageComparisonResultCacheSingleton(){
}


};

            

