
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
        



            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageRotationUtil.h"

class ImageToRotationImageArrayUtil
            : public Object
         {

    private: static ImageToRotationImageArrayUtil instance() { return ImageToRotationImageArrayUtil(); }

    public: static ImageToRotationImageArrayUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageToRotationImageArrayUtil::instance();
    
}


private: ImageToRotationImageArrayUtil(){
}


                //@Throws(Exception.constructor)
            
    public: std::vector<Image> generate(Image image, int32_t angleIncrement, int32_t totalAngle){

    ImageRotationUtil imageRotationUtil = ImageRotationUtil::getInstance();;
    

    int32_t totalFrames = totalAngle /angleIncrement;;
    

    std::vector<Image> imageArray = std::vector<Image>(totalFrames);;
    
imageArray[0]= image;
    




                        for (
    int32_t index = 1;index < totalFrames; index++)
        {
imageArray[index]= imageRotationUtil.createRotatedImage(image, index *angleIncrement);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return imageArray;
    
}


};

            

