
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_COLOR_SMALLBASICCOLORCACHEFACTORY_CPP
        #define ORG_ALLBINARY_GRAPHICS_COLOR_SMALLBASICCOLORCACHEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/color/SmallBasicColorCacheFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"

auto SmallBasicColorCacheFactory::instance_owner() -> SmallBasicColorCacheFactory* { static std::unique_ptr<SmallBasicColorCacheFactory> value(new SmallBasicColorCacheFactory()); return value.get(); }
SmallBasicColorCacheFactory* SmallBasicColorCacheFactory::instance = SmallBasicColorCacheFactory::instance_owner();

    auto SmallBasicColorCacheFactory::getInstance() -> SmallBasicColorCacheFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SmallBasicColorCacheFactory::instance;
    
}


SmallBasicColorCacheFactory::SmallBasicColorCacheFactory() : INDEX_TO_COLOR(std::vector<int32_t>(this->SIZE)), BASIC_COLOR_ARRAY(std::vector<BasicColor*>(this->SIZE)){
}


    auto SmallBasicColorCacheFactory::add(BasicColor* basicDefaultColor) -> void{
this->BASIC_COLOR_ARRAY[this->colorIndex]= basicDefaultColor;
    
this->INDEX_TO_COLOR[this->colorIndex]= basicDefaultColor->intValue();
    
this->colorIndex++;
    
}


    auto SmallBasicColorCacheFactory::getAndOrCreate(int32_t colorAsInt) -> BasicColor*{

    BasicColor* basicColor;;
    




                        for (
    int32_t index = 0;index < this->SIZE; index++)
        {

                        if(this->INDEX_TO_COLOR[index] == colorAsInt)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->BASIC_COLOR_ARRAY[index];
    

                                    }
                                
}


    int32_t ALPHA_MASK = static_cast<int32_t>(0xFF000000);;
    
basicColor= BasicColorFactory::getInstance()->createInstanceAN(colorAsInt&ALPHA_MASK, colorAsInt&0x00FFFFFF, StringUtil::getInstance()->EMPTY_STRING);
    
this->add(basicColor);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return basicColor;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_COLOR_SMALLBASICCOLORCACHEFACTORY_CPP
