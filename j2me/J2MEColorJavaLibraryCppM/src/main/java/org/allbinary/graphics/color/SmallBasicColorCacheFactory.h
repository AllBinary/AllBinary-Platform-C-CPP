
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_COLOR_SMALLBASICCOLORCACHEFACTORY_H
        #define ORG_ALLBINARY_GRAPHICS_COLOR_SMALLBASICCOLORCACHEFACTORY_H

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

class SmallBasicColorCacheFactory
            : public Object
         {

    private: static SmallBasicColorCacheFactory* instance() { static std::unique_ptr<SmallBasicColorCacheFactory> value(new SmallBasicColorCacheFactory()); return value.get(); }

    public: static SmallBasicColorCacheFactory* getInstance();

    private: const int32_t SIZE = 255;

    private: const std::vector<int32_t> INDEX_TO_COLOR = std::vector<int32_t>(this->SIZE);

    private: const std::vector<BasicColor*> BASIC_COLOR_ARRAY = std::vector<BasicColor*>(this->SIZE);

    private: int32_t colorIndex = 0;

private: SmallBasicColorCacheFactory();

    public: void add(BasicColor* basicDefaultColor);

    public: BasicColor* getAndOrCreate(int32_t colorAsInt);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_COLOR_SMALLBASICCOLORCACHEFACTORY_H
