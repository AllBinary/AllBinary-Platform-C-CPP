
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORCACHEFACTORY_H
        #define ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORCACHEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
class StdUtil;
#include <org/allbinary/util/ABHashtable.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class BasicColor;
class BasicColorFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicColorCacheFactory
            : public virtual Object
         {

    private: static BasicColorCacheFactory* instance_owner();
    private: static BasicColorCacheFactory* instance;

    public: static BasicColorCacheFactory* getInstance();

    private: ABHashtable<Object*, Object*>* hashtable;

private: BasicColorCacheFactory();

    public: void add(BasicColor* basicDefaultColor);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: BasicColor* getAndOrCreate(int32_t integer);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORCACHEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORCACHEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORCACHEFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif

        #endif
    
