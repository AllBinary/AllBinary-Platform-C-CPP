
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_BUFFEREDIMAGEUTIL2_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_BUFFEREDIMAGEUTIL2_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/awt.h>
#include <java/awt/image/BufferedImage.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ImageUtil;
class Graphics2D;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BufferedImageUtil2
            : public virtual Object
         {

    private: static BufferedImageUtil2* instance_owner();
    private: static BufferedImageUtil2* instance;

    public: static BufferedImageUtil2* getInstance();


            
    public: BufferedImageUtil2();
        
    private: ImageUtil* imageUtil;

    public: BufferedImage* createSpriteImage(std::vector<BufferedImage*> bufferedImageArray);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_BUFFEREDIMAGEUTIL2_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_BUFFEREDIMAGEUTIL2_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_BUFFEREDIMAGEUTIL2_H_COMPLETE
        #if __has_include(<java/awt.h>)
#include <java/awt.h>
#endif
#if __has_include(<java/awt/image/BufferedImage.h>)
#include <java/awt/image/BufferedImage.h>
#endif
#if __has_include("org/allbinary/media/image/ImageUtil.h")
#include "org/allbinary/media/image/ImageUtil.h"
#endif
#if __has_include("org/allbinary/media/image/Graphics2D.h")
#include "org/allbinary/media/image/Graphics2D.h"
#endif

        #endif
    
