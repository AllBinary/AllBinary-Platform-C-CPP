
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_IMAGEIOUTIL_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_IMAGEIOUTIL_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <java/awt/image/RenderedImage.h>

      
#include <javax/imageio/ImageIO.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/AbFileNativeUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ImageIOUtil
            : public Object
         {

                //@Throws(Exception.constructor)
            
    public: static BufferedImage read(AbFile file);

                //@Throws(Exception.constructor)
            
    public: static bool write(RenderedImage renderedImage, std::string name, AbFile file);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_IMAGEIOUTIL_H
