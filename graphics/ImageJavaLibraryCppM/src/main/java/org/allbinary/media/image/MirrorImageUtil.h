
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

            #include "../../../../java/lang/Object.h"
        
#include <java/awt.h>

      
#include <java/awt/geom/AffineTransform.h>

      
#include <java/awt/image/AffineTransformOp.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageUtil.h"
#include "Graphics2D.h"

class MirrorImageUtil
            : public Object
         {
        

    private: static const instance: MirrorImageUtil = new MirrorImageUtil();

    public static MirrorImageUtil getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const imageUtil: ImageUtil = ImageUtil.getInstance()!;

private constructor ();

    public BufferedImage getImage(BufferedImage bufferedImage, bool verticle, bool horizontal);

    public std::vector<BufferedImage> getImages(BufferedImage bufferedImage, bool verticle, bool horizontal);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_MIRRORIMAGEUTIL_H
