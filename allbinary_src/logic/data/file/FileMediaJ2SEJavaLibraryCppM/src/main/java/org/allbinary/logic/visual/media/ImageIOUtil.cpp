
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_IMAGEIOUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_IMAGEIOUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/media/ImageIOUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <java/awt/image/RenderedImage.h>

      
#include <javax/imageio/ImageIO.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/AbFileNativeUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ImageIOUtil::ImageIOUtil() {
        }
        
                //@Throws(Exception.constructor)
            
    auto ImageIOUtil::read(AbFile* file) -> BufferedImage*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageIO::read(AbFileNativeUtil::get(file));;
    
}


                //@Throws(Exception.constructor)
            
    auto ImageIOUtil::write(RenderedImage* renderedImage, std::string name, AbFile* file) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageIO::write(renderedImage, name, AbFileNativeUtil::get(file));;
    
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_IMAGEIOUTIL_CPP
