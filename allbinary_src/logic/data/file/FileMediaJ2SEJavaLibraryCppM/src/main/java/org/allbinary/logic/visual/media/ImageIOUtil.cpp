
        /* Generated Code Do Not Modify */
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
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
            
    public: static BufferedImage read(AbFile file){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageIO::read(AbFileNativeUtil::get(file));;
    
}


                //@Throws(Exception.constructor)
            
    public: static bool write(RenderedImage renderedImage, std::string name, AbFile file){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageIO::write(renderedImage, name, AbFileNativeUtil::get(file));;
    
}


};

            

