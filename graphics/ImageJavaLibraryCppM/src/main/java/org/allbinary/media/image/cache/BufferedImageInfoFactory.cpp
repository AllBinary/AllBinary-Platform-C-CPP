
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_CACHE_BUFFEREDIMAGEINFOFACTORY_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_CACHE_BUFFEREDIMAGEINFOFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/cache/BufferedImageInfoFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/cache/BufferedImageInfo.h"

HashMap<Object*, Object*>* BufferedImageInfoFactory::hashMap = StdUtil::getInstance()->createHashMap();

BufferedImageInfoFactory::BufferedImageInfoFactory(){
}


    auto BufferedImageInfoFactory::getInstance(int32_t width, int32_t height, int32_t type) -> BufferedImageInfo*{

    StringMaker* stringbuffer = new StringMaker();;
    
stringbuffer->appendint(width);
    
stringbuffer->appendint(height);
    
stringbuffer->appendint(type);
    

    std::string key = stringbuffer->toString();;
    

    BufferedImageInfo* bufferedImageInfo = dynamic_cast<BufferedImageInfo*>(BufferedImageInfoFactory::hashMap->get(key));;
    

                        if(bufferedImageInfo == 
                                    nullptr
                                )
                        
                                    {
                                    bufferedImageInfo= new BufferedImageInfo(width, height, type);
    
BufferedImageInfoFactory::hashMap->put(key, bufferedImageInfo);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return bufferedImageInfo;
    
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_CACHE_BUFFEREDIMAGEINFOFACTORY_CPP
