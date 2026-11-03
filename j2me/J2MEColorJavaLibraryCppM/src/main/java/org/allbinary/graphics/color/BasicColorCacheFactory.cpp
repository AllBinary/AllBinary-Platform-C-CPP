
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORCACHEFACTORY_CPP
        #define ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORCACHEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/color/BasicColorCacheFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"

auto BasicColorCacheFactory::instance_owner() -> BasicColorCacheFactory* { static std::unique_ptr<BasicColorCacheFactory> value(new BasicColorCacheFactory()); return value.get(); }
BasicColorCacheFactory* BasicColorCacheFactory::instance = BasicColorCacheFactory::instance_owner();

    auto BasicColorCacheFactory::getInstance() -> BasicColorCacheFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return BasicColorCacheFactory::instance;
    
}


BasicColorCacheFactory::BasicColorCacheFactory() : hashtable(StdUtil::getInstance()->createHashtable()){
}


    auto BasicColorCacheFactory::add(BasicColor* basicDefaultColor) -> void{
this->hashtable->put(int32_t(basicDefaultColor->intValue()), basicDefaultColor);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto BasicColorCacheFactory::getAndOrCreate(int32_t integer) -> BasicColor*{

    BasicColor* basicColor = dynamic_cast<BasicColor*>(this->hashtable->get(integer));;
    

                        if(basicColor == 
                                    nullptr
                                )
                        
                                    {
                                    basicColor= BasicColorFactory::getInstance()->createInstance(integer);
    
this->hashtable->put(integer, basicColor);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return basicColor;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORCACHEFACTORY_CPP
