
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
        



        #ifndef ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLIMAGEUTILBASE_H
        #define ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLIMAGEUTILBASE_H

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/RuntimeException.h"
        
#include <java/io/IOException.h>

      
#include <java/io/InputStream.h>

      
#include <org/allbinary/graphics/OpenGLBitmap.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OpenGLImageUtilBase
            : public Object
         {
        

    public OpenGLBitmap paint(OpenGLBitmap alphaBitmap, OpenGLBitmap originalBitmap, int32_t index);

    public OpenGLBitmap paint(OpenGLBitmap colorBitmap, OpenGLBitmap originalBitmap, int32_t alpha, BasicColor basicColor);

                //@Throws(IOException.constructor)
            
    public OpenGLBitmap createImage(string name);

                //@Throws(IOException.constructor)
            
    public OpenGLBitmap createImageFromInputStream(InputStream inputStream);

};

            


        #endif //ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLIMAGEUTILBASE_H
