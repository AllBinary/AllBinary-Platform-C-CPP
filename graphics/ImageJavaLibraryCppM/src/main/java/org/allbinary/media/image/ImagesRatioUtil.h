
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGESRATIOUTIL_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGESRATIOUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/awt.h>
#include <java/awt/image/BufferedImage.h>
class LogUtil;
class CommonLabels;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ImageUtil;
class Point;
class Graphics2D;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImagesRatioUtil
            : public virtual Object
         {

    private: static ImagesRatioUtil* instance_owner();
    private: static ImagesRatioUtil* instance;

    public: static ImagesRatioUtil* getInstance();

    /*protected*/ public: LogUtil* logUtil;

private: ImagesRatioUtil();

    private: ImageUtil* imageUtil;

    public: bool isEqual(std::vector<BufferedImage*> bufferedImageArray, int32_t totalImages);

    public: double getAverage(std::vector<BufferedImage*> bufferedImageArray, int32_t totalImages);

                //@Throws(Exception.constructor)
            
    public: BufferedImage* fudge(BufferedImage* bufferedImage, double ratio);

                //@Throws(Exception.constructor)
            
    public: std::vector<BufferedImage*> fudge(std::vector<BufferedImage*> bufferedImageArray, int32_t totalImages, double ratio);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGESRATIOUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_IMAGESRATIOUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGESRATIOUTIL_H_COMPLETE
        #if __has_include(<java/awt.h>)
#include <java/awt.h>
#endif
#if __has_include(<java/awt/image/BufferedImage.h>)
#include <java/awt/image/BufferedImage.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include("org/allbinary/media/image/ImageUtil.h")
#include "org/allbinary/media/image/ImageUtil.h"
#endif
#if __has_include("org/allbinary/media/image/Point.h")
#include "org/allbinary/media/image/Point.h"
#endif
#if __has_include("org/allbinary/media/image/Graphics2D.h")
#include "org/allbinary/media/image/Graphics2D.h"
#endif

        #endif
    
