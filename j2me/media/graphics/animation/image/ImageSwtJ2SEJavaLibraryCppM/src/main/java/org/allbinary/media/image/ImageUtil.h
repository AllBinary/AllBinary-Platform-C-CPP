
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

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <org/eclipse/swt/SWT.h>

      
#include <org/eclipse/swt/widgets/Canvas.h>

      
#include <org/eclipse/swt/widgets/Composite.h>

      
#include <org/eclipse/swt/graphics/GC.h>

      
#include <org/eclipse/swt/graphics/ImageData.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/eclipse/swt/events/PaintEvent.h>

      
#include <org/eclipse/swt/events/PaintListener.h>

      
#include <org/eclipse/swt/graphics/Transform.h>

      
#include <org/eclipse/swt/widgets/Display.h>

      
#include <org/microemu/app/BareMain.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Image.h"

class ImageUtil
            : public Object
         {
        

    private: static const instance: ImageUtil = new ImageUtil();

    public static ImageUtil getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const commonSeps: CommonSeps = CommonSeps.getInstance()!;

    private: IIOIMAGE_POOL_NAME: string = "IIOIMAGE_POOL_NAME";

    private: const CREATE_BUFFERED_IMAGE: string = "createBufferedImage";

private constructor ();

    public org.eclipse.swt.graphics.Image create(int32_t width, int32_t height);

                //@Throws(Exception.constructor)
            
    public std::vector<org.eclipse.swt.graphics.Image> createBufferedImage(std::vector<org.eclipse.swt.graphics.Image> bufferedImageArray, int32_t percent, bool scale);

                //@Throws(Exception.constructor)
            
    public std::vector<org.eclipse.swt.graphics.Image> createBufferedImage2(std::vector<org.eclipse.swt.graphics.Image> bufferedImageArray, float percent, bool scale);

                //@Throws(Exception.constructor)
            
    public std::vector<org.eclipse.swt.graphics.Image> createBufferedImage3(std::vector<org.eclipse.swt.graphics.Image> bufferedImageArray, int32_t width, int32_t height, bool scale);

                //@Throws(Exception.constructor)
            
    public org.eclipse.swt.graphics.Image createBufferedImage4(org.eclipse.swt.graphics.Image bufferedImage, int32_t newWidth, int32_t newHeight);

                //@Throws(Exception.constructor)
            
    public org.eclipse.swt.graphics.Image createBufferedImage5(org.eclipse.swt.graphics.Image bufferedImage, int32_t newWidth, int32_t newHeight, bool scale);

                //@Throws(Exception.constructor)
            
    public org.eclipse.swt.graphics.Image createBufferedImage6(org.eclipse.swt.graphics.Image bufferedImage, int32_t newWidth, int32_t newHeight, bool scale, bool allowTranslate);

    public Canvas drawTransformedImage(org.eclipse.swt.graphics.Image image, Composite parent, int32_t dx, int32_t dy, int32_t width, int32_t height);

    public string toString(org.eclipse.swt.graphics.Image bufferedImage);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEUTIL_H
