
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
        



        #ifndef ORG_ALLBINARY_INPUT_MEDIA_IMAGE_CAPTURE_PROCESSINGFRAMEINDEXFACTORY_CPP
        #define ORG_ALLBINARY_INPUT_MEDIA_IMAGE_CAPTURE_PROCESSINGFRAMEINDEXFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/media/image/capture/ProcessingFrameIndexFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ProcessingFrameIndexFactory::ProcessingFrameIndexFactory(){
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto ProcessingFrameIndexFactory::next() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ProcessingFrameIndexFactory::currentFrame++;
    
}




        #endif //ORG_ALLBINARY_INPUT_MEDIA_IMAGE_CAPTURE_PROCESSINGFRAMEINDEXFACTORY_CPP
