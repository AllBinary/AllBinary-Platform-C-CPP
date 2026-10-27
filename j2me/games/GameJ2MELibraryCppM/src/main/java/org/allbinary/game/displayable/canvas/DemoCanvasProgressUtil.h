
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOCANVASPROGRESSUTIL_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOCANVASPROGRESSUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class ProgressCanvas;
class ProgressCanvasFactory;
class PaintableComposite;
class PaintableInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class DemoCanvas;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DemoCanvasProgressUtil
            : public virtual Object
         {

    public: static void showProgress(DemoCanvas* demoCanvas);

    public: static void showProgressOptionallyInTheBackground(DemoCanvas* demoCanvas, bool background);


            
    public: DemoCanvasProgressUtil();
        
};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOCANVASPROGRESSUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOCANVASPROGRESSUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOCANVASPROGRESSUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h>)
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h>
#endif
#if __has_include(<org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>)
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/PaintableComposite.h>)
#include <org/allbinary/graphics/paint/PaintableComposite.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/PaintableInterface.h>)
#include <org/allbinary/graphics/paint/PaintableInterface.h>
#endif
#if __has_include("org/allbinary/game/displayable/canvas/DemoCanvas.h")
#include "org/allbinary/game/displayable/canvas/DemoCanvas.h"
#endif

        #endif
    
