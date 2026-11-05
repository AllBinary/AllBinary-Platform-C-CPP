
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_COLOR_COLORCACHEABLE_H
        #define ORG_ALLBINARY_GRAPHICS_COLOR_COLORCACHEABLE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <java/awt.h>
#include <org/allbinary/logic/util/cache/CacheableInterface.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class Color;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ColorCacheable
            : public virtual Object
        , public virtual CacheableInterface {

    private: Object* key;

    private: Color* color;

public: ColorCacheable(Object* key);
public: ColorCacheable(const std::string& key) : ColorCacheable(JavaString::box(key)) { }
public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> ColorCacheable(BoxValue key) : ColorCacheable(JavaBoxes::toObject(key)) { }
public: template<typename BoxElement> ColorCacheable(const std::vector<BoxElement>& key) : ColorCacheable(JavaBoxes::toObject(key)) { }

    public: Object* getKey();

    public: Color* getColor();

    public: void setColor(Color* color);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_COLOR_COLORCACHEABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_COLOR_COLORCACHEABLE_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_COLOR_COLORCACHEABLE_H_COMPLETE
        #if __has_include(<java/awt.h>)
#include <java/awt.h>
#endif
#if __has_include(<org/allbinary/logic/util/cache/CacheableInterface.h>)
#include <org/allbinary/logic/util/cache/CacheableInterface.h>
#endif
#if __has_include("org/allbinary/graphics/color/Color.h")
#include "org/allbinary/graphics/color/Color.h"
#endif

        #endif
    
