
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_RECTANGLEFACTORY_H
        #define ORG_ALLBINARY_GRAPHICS_RECTANGLEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class Rectangle;
class PointFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RectangleFactory
            : public virtual Object
         {

    private: static Rectangle* SINGLETON_owner();
    public: static Rectangle* SINGLETON;

    public: static std::vector<std::vector<Rectangle*>> ARRAY_OF_ARRAYS;


            
    public: RectangleFactory();
        
};

            


        #endif //ORG_ALLBINARY_GRAPHICS_RECTANGLEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_RECTANGLEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_RECTANGLEFACTORY_H_COMPLETE
        #if __has_include("org/allbinary/graphics/Rectangle.h")
#include "org/allbinary/graphics/Rectangle.h"
#endif
#if __has_include("org/allbinary/graphics/PointFactory.h")
#include "org/allbinary/graphics/PointFactory.h"
#endif

        #endif
    
