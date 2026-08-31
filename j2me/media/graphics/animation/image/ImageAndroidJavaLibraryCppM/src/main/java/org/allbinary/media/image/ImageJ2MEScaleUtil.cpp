
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2023 AllBinary
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/image/GameFeatureImageCacheFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageScaleUtil.h"

class ImageJ2MEScaleUtil
            : public Object
         {
        

    private: static const instance: ImageJ2MEScaleUtil = new ImageJ2MEScaleUtil();

    public static ImageJ2MEScaleUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageJ2MEScaleUtil.instance;
    
}


private constructor (){

            super();
        }


                //@Throws(Exception.constructor)
            
    public std::vector<Image> scaleArray(std::vector<Image> images, int32_t width, int32_t height){




                        for (
    index: int32_t = 0;index < images.length; index++)
        {

    image: Image = images[index]!;;
    
images[index]= ImageScaleUtil.getInstance()!.createImage2(GameFeatureImageCacheFactory.getInstance(), image, width /2, image.getWidth(), height, image.getHeight(), false);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return images;
    
}


                //@Throws(Exception.constructor)
            
    public Image scale(Image image, int32_t width, int32_t height){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageScaleUtil.getInstance()!.createImage2(GameFeatureImageCacheFactory.getInstance(), image, width, image.getWidth(), height, image.getHeight(), false);;
    
}


};

            

