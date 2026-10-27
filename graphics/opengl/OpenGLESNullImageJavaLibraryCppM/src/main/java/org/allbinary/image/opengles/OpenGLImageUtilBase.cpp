
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLIMAGEUTILBASE_CPP
        #define ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLIMAGEUTILBASE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/image/opengles/OpenGLImageUtilBase.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <java/io/IOException.h>

      
#include <java/io/InputStream.h>

      
#include <org/allbinary/graphics/OpenGLBitmap.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

OpenGLImageUtilBase::OpenGLImageUtilBase() {
        }
        
    auto OpenGLImageUtilBase::paint(OpenGLBitmap* alphaBitmap, OpenGLBitmap* originalBitmap, int32_t index) -> OpenGLBitmap*{



                            throw RuntimeException();
                    
}


    auto OpenGLImageUtilBase::paint(OpenGLBitmap* colorBitmap, OpenGLBitmap* originalBitmap, int32_t alpha, BasicColor* basicColor) -> OpenGLBitmap*{



                            throw RuntimeException();
                    
}


                //@Throws(IOException.constructor)
            
    auto OpenGLImageUtilBase::createImage(std::string name) -> OpenGLBitmap*{



                            throw RuntimeException();
                    
}


                //@Throws(IOException.constructor)
            
    auto OpenGLImageUtilBase::createImageFromInputStream(InputStream* inputStream) -> OpenGLBitmap*{



                            throw RuntimeException();
                    
}




        #endif //ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLIMAGEUTILBASE_CPP
