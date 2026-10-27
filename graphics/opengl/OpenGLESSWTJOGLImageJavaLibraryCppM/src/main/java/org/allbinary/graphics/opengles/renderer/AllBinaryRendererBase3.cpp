
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_RENDERER_ALLBINARYRENDERERBASE3_CPP
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_RENDERER_ALLBINARYRENDERERBASE3_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/opengles/renderer/AllBinaryRendererBase3.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/image/opengles/OpenGLESImage.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

AllBinaryRendererBase3::AllBinaryRendererBase3() : list(new BasicArrayListD()) {
        }
        
                //@Throws(Exception.constructor)
            
    auto AllBinaryRendererBase3::update(GL10* gl) -> void{

        while(this->list->size() > 0)
        {

    OpenGLESImage* openGLESImage = dynamic_cast<OpenGLESImage*>(this->list->removeAt(0));;
    

                        if(openGLESImage != 
                                    nullptr
                                )
                        
                                    {
                                    openGLESImage->set(gl);
    

                                    }
                                
}

}


    auto AllBinaryRendererBase3::add(Image* image) -> void{
this->list->add(image);
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_RENDERER_ALLBINARYRENDERERBASE3_CPP
