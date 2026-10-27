
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_BUFFEREDIMAGEUTIL2_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_BUFFEREDIMAGEUTIL2_H

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/awt.h>

      
#include <java/awt/image/BufferedImage.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/ImageUtil.h"
#include "org/allbinary/media/image/Graphics2D.h"

class BufferedImageUtil2
            : public Object
         {

    private: static BufferedImageUtil2* instance() { static std::unique_ptr<BufferedImageUtil2> value(new BufferedImageUtil2()); return value.get(); }

    public: static BufferedImageUtil2* getInstance();

    private: ImageUtil* imageUtil = ImageUtil::getInstance();

    public: BufferedImage* createSpriteImage(std::vector<BufferedImage*> bufferedImageArray);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_BUFFEREDIMAGEUTIL2_H
