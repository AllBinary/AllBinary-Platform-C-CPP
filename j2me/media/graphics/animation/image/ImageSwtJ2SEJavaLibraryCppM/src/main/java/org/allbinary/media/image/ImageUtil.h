
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGEUTIL_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class SWT;
class Canvas;
class Composite;
class GC;
class ImageData;
class LogUtil;
class CommonSeps;
class CommonStrings;
class StringMaker;
class CommonLabels;
class PaintEvent;
class PaintListener;
class Transform;
class Display;
class BareMain;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class Image;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageUtil
            : public virtual Object
         {

    private: static ImageUtil* instance_owner();
    private: static ImageUtil* instance;

    public: static ImageUtil* getInstance();

    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    private: CommonSeps* commonSeps;

    private: std::string IIOIMAGE_POOL_NAME = "IIOIMAGE_POOL_NAME";

    private: const std::string CREATE_BUFFERED_IMAGE = "createBufferedImage";

private: ImageUtil();

    public: org::eclipse::swt::graphics::Image* create(int32_t width, int32_t height);

                //@Throws(Exception.constructor)
            
    public: std::vector<org::eclipse::swt::graphics::Image*> createBufferedImage(std::vector<org::eclipse::swt::graphics::Image*> bufferedImageArray, int32_t percent, bool scale);

                //@Throws(Exception.constructor)
            
    public: std::vector<org::eclipse::swt::graphics::Image*> createBufferedImage2(std::vector<org::eclipse::swt::graphics::Image*> bufferedImageArray, float percent, bool scale);

                //@Throws(Exception.constructor)
            
    public: std::vector<org::eclipse::swt::graphics::Image*> createBufferedImage3(std::vector<org::eclipse::swt::graphics::Image*> bufferedImageArray, int32_t width, int32_t height, bool scale);

                //@Throws(Exception.constructor)
            
    public: org::eclipse::swt::graphics::Image* createBufferedImage4(org::eclipse::swt::graphics::Image* bufferedImage, int32_t newWidth, int32_t newHeight);

                //@Throws(Exception.constructor)
            
    public: org::eclipse::swt::graphics::Image* createBufferedImage5(org::eclipse::swt::graphics::Image* bufferedImage, int32_t newWidth, int32_t newHeight, bool scale);

                //@Throws(Exception.constructor)
            
    public: org::eclipse::swt::graphics::Image* createBufferedImage6(org::eclipse::swt::graphics::Image* bufferedImage, int32_t newWidth, int32_t newHeight, bool scale, bool allowTranslate);

    public: Canvas* drawTransformedImage(org::eclipse::swt::graphics::Image* image, Composite* parent, int32_t dx, int32_t dy, int32_t width, int32_t height);

    public: std::string toString(org::eclipse::swt::graphics::Image* bufferedImage);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_IMAGEUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEUTIL_H_COMPLETE
        #if __has_include(<org/eclipse/swt/SWT.h>)
#include <org/eclipse/swt/SWT.h>
#endif
#if __has_include(<org/eclipse/swt/widgets/Canvas.h>)
#include <org/eclipse/swt/widgets/Canvas.h>
#endif
#if __has_include(<org/eclipse/swt/widgets/Composite.h>)
#include <org/eclipse/swt/widgets/Composite.h>
#endif
#if __has_include(<org/eclipse/swt/graphics/GC.h>)
#include <org/eclipse/swt/graphics/GC.h>
#endif
#if __has_include(<org/eclipse/swt/graphics/ImageData.h>)
#include <org/eclipse/swt/graphics/ImageData.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include(<org/eclipse/swt/events/PaintEvent.h>)
#include <org/eclipse/swt/events/PaintEvent.h>
#endif
#if __has_include(<org/eclipse/swt/events/PaintListener.h>)
#include <org/eclipse/swt/events/PaintListener.h>
#endif
#if __has_include(<org/eclipse/swt/graphics/Transform.h>)
#include <org/eclipse/swt/graphics/Transform.h>
#endif
#if __has_include(<org/eclipse/swt/widgets/Display.h>)
#include <org/eclipse/swt/widgets/Display.h>
#endif
#if __has_include(<org/microemu/app/BareMain.h>)
#include <org/microemu/app/BareMain.h>
#endif
#if __has_include("org/allbinary/media/image/Image.h")
#include "org/allbinary/media/image/Image.h"
#endif

        #endif
    
