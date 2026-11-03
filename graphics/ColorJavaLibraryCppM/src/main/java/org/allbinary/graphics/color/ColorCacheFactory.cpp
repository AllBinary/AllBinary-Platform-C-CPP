
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_COLOR_COLORCACHEFACTORY_CPP
        #define ORG_ALLBINARY_GRAPHICS_COLOR_COLORCACHEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/color/ColorCacheFactory.h"
        

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

int32_t ColorCacheFactory::initResult = ColorCacheFactory::init();
        auto ColorCacheFactory::init() -> int32_t {
                    

    LogUtil* logUtil = LogUtil::getInstance();;
    

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

    std::string STATIC_BLOCK = "Static Block";;
    

        try {
            logUtil->putF(commonStrings->START, 
                            Class::forType(typeid(ColorCacheFactory)), STATIC_BLOCK);
    
ColorCacheFactory::cacheInterface= AutomaticCacheInterfaceFactory::getInstance(new ColorCacheableFactory(), CacheTypeFactory::getInstance()->CACHE, CachePolicyFactory::getInstance()->THIRTY_MINUTES_TEN_THOUSAND_MAX);
    
logUtil->putF(commonStrings->END, 
                            Class::forType(typeid(ColorCacheFactory)), STATIC_BLOCK);
    

                //: 
} catch(Exception& e) 
            {
logUtil->put(commonStrings->EXCEPTION, 
                            Class::forType(typeid(ColorCacheFactory)), STATIC_BLOCK, &e);
    
}



                    return 0;
        }
                
ColorCacheFactory::ColorCacheFactory(){
}


    auto ColorCacheFactory::getInstance() -> AutomaticCacheInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ColorCacheFactory::cacheInterface;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_COLOR_COLORCACHEFACTORY_CPP
