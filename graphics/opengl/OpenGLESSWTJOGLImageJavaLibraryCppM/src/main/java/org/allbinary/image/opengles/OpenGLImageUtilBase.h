
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
class OpenGLBitmap;
class BasicColor;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OpenGLImageUtilBase
            : public virtual Object
         {


            
    public: OpenGLImageUtilBase();
        
    public: OpenGLBitmap* paint(OpenGLBitmap* alphaBitmap, OpenGLBitmap* originalBitmap, int32_t index);

    public: OpenGLBitmap* paint(OpenGLBitmap* colorBitmap, OpenGLBitmap* originalBitmap, int32_t alpha, BasicColor* basicColor);

                //@Throws(IOException.constructor)
            
    public: OpenGLBitmap* createImage(std::string name);

                //@Throws(Exception.constructor)
            
    public: OpenGLBitmap* createImageFromInputStream(InputStream* inputStream);

};

            


        #endif //ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLIMAGEUTILBASE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLIMAGEUTILBASE_H_COMPLETE)
        #define ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLIMAGEUTILBASE_H_COMPLETE
        #if __has_include(<java/io/IOException.h>)
#include <java/io/IOException.h>
#endif
#if __has_include(<java/io/InputStream.h>)
#include <java/io/InputStream.h>
#endif
#if __has_include(<org/allbinary/graphics/OpenGLBitmap.h>)
#include <org/allbinary/graphics/OpenGLBitmap.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif

        #endif
    
