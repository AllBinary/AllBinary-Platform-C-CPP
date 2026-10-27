
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
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/util/cache/AutomaticCacheInterface.h>

      
#include <org/allbinary/logic/util/cache/AutomaticCacheInterfaceFactory.h>

      
#include <org/allbinary/logic/util/cache/CachePolicyFactory.h>

      
#include <org/allbinary/logic/util/cache/CacheTypeFactory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/color/ColorCacheableFactory.h"

class ColorCacheFactory
            : public Object
         {

    private: static inline AutomaticCacheInterface* cacheInterface = 
                null
            ;

                    static int32_t initResult = ColorCacheFactory::init();
                static int32_t init() { 
                    

    LogUtil* logUtil = LogUtil::getInstance();;
    

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

    std::string STATIC_BLOCK = "Static Block";;
    

        try {
            logUtil->putF(commonStrings->START, ColorCacheFactory.constructor, STATIC_BLOCK);
    
ColorCacheFactory::cacheInterface= AutomaticCacheInterfaceFactory::getInstance(new ColorCacheableFactory(), CacheTypeFactory::getInstance()->CACHE, CachePolicyFactory::getInstance()->THIRTY_MINUTES_TEN_THOUSAND_MAX);
    
logUtil->putF(commonStrings->END, ColorCacheFactory.constructor, STATIC_BLOCK);
    

                //: 
} catch(Exception& e) 
            {
logUtil->put(commonStrings->EXCEPTION, ColorCacheFactory.constructor, STATIC_BLOCK, &e);
    
}



                    return 0;
                }
            
    public: static AutomaticCacheInterface* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ColorCacheFactory::cacheInterface;
    
}


private: ColorCacheFactory(){
}


};

            

