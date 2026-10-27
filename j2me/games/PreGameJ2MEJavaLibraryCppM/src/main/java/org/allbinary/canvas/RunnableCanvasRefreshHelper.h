
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
        



        #ifndef ORG_ALLBINARY_CANVAS_RUNNABLECANVASREFRESHHELPER_H
        #define ORG_ALLBINARY_CANVAS_RUNNABLECANVASREFRESHHELPER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class MyCanvas;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/canvas/Processor.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RunnableCanvasRefreshHelper: public Processor {

    private: MyCanvas* runnableCanvas;

public: RunnableCanvasRefreshHelper(MyCanvas* runnableCanvas);

    public: void process();

};

            


        #endif //ORG_ALLBINARY_CANVAS_RUNNABLECANVASREFRESHHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_CANVAS_RUNNABLECANVASREFRESHHELPER_H_COMPLETE)
        #define ORG_ALLBINARY_CANVAS_RUNNABLECANVASREFRESHHELPER_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/displayable/MyCanvas.h>)
#include <org/allbinary/graphics/displayable/MyCanvas.h>
#endif
#if __has_include("org/allbinary/canvas/Processor.h")
#include "org/allbinary/canvas/Processor.h"
#endif

        #endif
    
