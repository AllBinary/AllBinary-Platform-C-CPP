
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_GRAPHICSANALYSISUTIL_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_GRAPHICSANALYSISUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/awt.h>
#include <java/awt/image/BufferedImage.h>
class ColorCacheFactory;
class ColorCacheable;
class AutomaticCacheInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class Color;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GraphicsAnalysisUtil
            : public virtual Object
         {

    private: static inline const int32_t MAX = 122;

                //@Throws(Exception.constructor)
            
    public: static double getNominator(BufferedImage* bufferedImage, int32_t min_x, int32_t max_x, int32_t y);

private: GraphicsAnalysisUtil();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_GRAPHICSANALYSISUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_GRAPHICSANALYSISUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_GRAPHICSANALYSISUTIL_H_COMPLETE
        #if __has_include(<java/awt.h>)
#include <java/awt.h>
#endif
#if __has_include(<java/awt/image/BufferedImage.h>)
#include <java/awt/image/BufferedImage.h>
#endif
#if __has_include(<org/allbinary/graphics/color/ColorCacheFactory.h>)
#include <org/allbinary/graphics/color/ColorCacheFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/color/ColorCacheable.h>)
#include <org/allbinary/graphics/color/ColorCacheable.h>
#endif
#if __has_include(<org/allbinary/logic/util/cache/AutomaticCacheInterface.h>)
#include <org/allbinary/logic/util/cache/AutomaticCacheInterface.h>
#endif
#if __has_include("org/allbinary/input/automation/module/game/Color.h")
#include "org/allbinary/input/automation/module/game/Color.h"
#endif

        #endif
    
