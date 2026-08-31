
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_BUFFEREDIMAGEUTIL2_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_BUFFEREDIMAGEUTIL2_H

            #include "../../../../java/lang/Object.h"
        
#include <java/awt.h>

      
#include <java/awt/image/BufferedImage.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageUtil.h"
#include "Graphics2D.h"

class BufferedImageUtil2
            : public Object
         {
        

    private: static const instance: BufferedImageUtil2 = new BufferedImageUtil2();

    public static BufferedImageUtil2 getInstance();

    private: const imageUtil: ImageUtil = ImageUtil.getInstance()!;

    public BufferedImage createSpriteImage(std::vector<BufferedImage> bufferedImageArray);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_BUFFEREDIMAGEUTIL2_H
