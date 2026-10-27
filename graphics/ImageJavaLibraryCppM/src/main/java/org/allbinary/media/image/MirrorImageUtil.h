
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_MIRRORIMAGEUTIL_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_MIRRORIMAGEUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/awt.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/AffineTransformOp.h>
#include <java/awt/image/BufferedImage.h>
class LogUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ImageUtil;
class Graphics2D;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MirrorImageUtil
            : public virtual Object
         {

    private: static MirrorImageUtil* instance_owner();
    private: static MirrorImageUtil* instance;

    public: static MirrorImageUtil* getInstance();

    /*protected*/ public: LogUtil* logUtil;

    private: ImageUtil* imageUtil;

private: MirrorImageUtil();

    public: BufferedImage* getImage(BufferedImage* bufferedImage, bool verticle, bool horizontal);

    public: std::vector<BufferedImage*> getImages(BufferedImage* bufferedImage, bool verticle, bool horizontal);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_MIRRORIMAGEUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_MIRRORIMAGEUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_MIRRORIMAGEUTIL_H_COMPLETE
        #if __has_include(<java/awt.h>)
#include <java/awt.h>
#endif
#if __has_include(<java/awt/geom/AffineTransform.h>)
#include <java/awt/geom/AffineTransform.h>
#endif
#if __has_include(<java/awt/image/AffineTransformOp.h>)
#include <java/awt/image/AffineTransformOp.h>
#endif
#if __has_include(<java/awt/image/BufferedImage.h>)
#include <java/awt/image/BufferedImage.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include("org/allbinary/media/image/ImageUtil.h")
#include "org/allbinary/media/image/ImageUtil.h"
#endif
#if __has_include("org/allbinary/media/image/Graphics2D.h")
#include "org/allbinary/media/image/Graphics2D.h"
#endif

        #endif
    
