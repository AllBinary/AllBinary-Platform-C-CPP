
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_LAZYPROGRESSCANVAS_H
        #define ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_LAZYPROGRESSCANVAS_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Processor;
class BasicColor;
class NullPaintable;
class ImageCacheFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class LazyProgressCanvas: public ProgressCanvas {

public: LazyProgressCanvas(std::string title, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

    public: void start();

    public: void end();

    public: void inGame();

    public: void endFromInitialLazyLoadingComplete();

    public: void endIfPaintedSinceStart();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_LAZYPROGRESSCANVAS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_LAZYPROGRESSCANVAS_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_LAZYPROGRESSCANVAS_H_COMPLETE
        #if __has_include(<org/allbinary/canvas/Processor.h>)
#include <org/allbinary/canvas/Processor.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/NullPaintable.h>)
#include <org/allbinary/graphics/paint/NullPaintable.h>
#endif
#if __has_include(<org/allbinary/image/ImageCacheFactory.h>)
#include <org/allbinary/image/ImageCacheFactory.h>
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h")
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"
#endif

        #endif
    
