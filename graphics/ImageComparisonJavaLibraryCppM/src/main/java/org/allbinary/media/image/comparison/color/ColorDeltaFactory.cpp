
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

      
#include <org/allbinary/logic/util/cache/CacheInterfaceFactory.h>

      
#include <org/allbinary/logic/util/cache/CachePolicyFactory.h>

      
#include <org/allbinary/logic/util/cache/CacheTypeFactory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/comparison/color/ColorDelta.h"

class ColorDeltaFactory
            : public Object
         {

    private: static inline AutomaticCacheInterface* cacheInterface = 
                null
            ;

                    static int32_t initResult = ColorDeltaFactory::init();
                static int32_t init() { 
                    

    LogUtil* logUtil = LogUtil::getInstance();;
    

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

    std::string STATIC_BLOCK = "Static Block";;
    

    std::string instance = "ColorDeltaFactory";;
    

        try {
            logUtil->putF(commonStrings->START, instance, STATIC_BLOCK);
    
ColorDeltaFactory::cacheInterface= dynamic_cast<AutomaticCacheInterface*>(CacheInterfaceFactory::getInstance(CacheTypeFactory::getInstance()->CACHE, CachePolicyFactory::getInstance()->THIRTY_MINUTES_TEN_THOUSAND_MAX));
    
logUtil->putF(commonStrings->END, instance, STATIC_BLOCK);
    

                //: 
} catch(Exception& e) 
            {
logUtil->put(commonStrings->EXCEPTION, instance, STATIC_BLOCK, &e);
    
}



                    return 0;
                }
            
                //@Throws(Exception.constructor)
            
    public: static ColorDelta* getInstance(int32_t rgb1, int32_t rgb2){

    ColorDelta* colorDelta = dynamic_cast<ColorDelta*>(ColorDeltaFactory::cacheInterface->get(ColorDelta::getKey(rgb1, rgb2)));;
    

                        if(colorDelta == 
                                    nullptr
                                )
                        
                                    {
                                    colorDelta= new ColorDelta(rgb1, rgb2);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return colorDelta;
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

private: ColorDeltaFactory(){
}


};

            

