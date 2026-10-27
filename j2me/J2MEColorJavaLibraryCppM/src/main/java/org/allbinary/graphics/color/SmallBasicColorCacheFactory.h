
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class BasicColor;
class BasicColorFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SmallBasicColorCacheFactory
            : public virtual Object
         {

    private: static SmallBasicColorCacheFactory* instance_owner();
    private: static SmallBasicColorCacheFactory* instance;

    public: static SmallBasicColorCacheFactory* getInstance();

    private: const int32_t SIZE = 255;

    private: std::vector<int32_t> INDEX_TO_COLOR;

    private: std::vector<BasicColor*> BASIC_COLOR_ARRAY;

    private: int32_t colorIndex = 0;

private: SmallBasicColorCacheFactory();

    public: void add(BasicColor* basicDefaultColor);

    public: BasicColor* getAndOrCreate(int32_t colorAsInt);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_COLOR_SMALLBASICCOLORCACHEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_COLOR_SMALLBASICCOLORCACHEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_COLOR_SMALLBASICCOLORCACHEFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif

        #endif
    
