
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
        



        #ifndef ORG_ALLBINARY_CANVAS_RUNNABLECANVASREFRESHHELPER_CPP
        #define ORG_ALLBINARY_CANVAS_RUNNABLECANVASREFRESHHELPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/canvas/RunnableCanvasRefreshHelper.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/graphics/displayable/MyCanvas.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/canvas/Processor.h"


RunnableCanvasRefreshHelper::RunnableCanvasRefreshHelper(MyCanvas* runnableCanvas){
this->runnableCanvas= runnableCanvas;
    
}


    auto RunnableCanvasRefreshHelper::process() -> void{
this->runnableCanvas->repaint();
    
}




        #endif //ORG_ALLBINARY_CANVAS_RUNNABLECANVASREFRESHHELPER_CPP
