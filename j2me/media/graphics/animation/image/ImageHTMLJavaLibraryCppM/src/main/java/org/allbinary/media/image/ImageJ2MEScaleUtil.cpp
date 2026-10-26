
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
        



            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ImageJ2MEScaleUtil
            : public Object
         {

    private: static ImageJ2MEScaleUtil instance() { return ImageJ2MEScaleUtil(); }

    public: static ImageJ2MEScaleUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageJ2MEScaleUtil::instance();
    
}


private: ImageJ2MEScaleUtil(){
}


                //@Throws(Exception.constructor)
            
    public: std::vector<Image> scaleArray(std::vector<Image> images, int32_t width, int32_t height){

    std::vector<Image> scaledImages = std::vector<Image>(images.length);;
    




                        for (
    int32_t index = images.size();--index >= 0; )
        {
scaledImages[index]= this->scale(images[index], width, height);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return scaledImages;
    
}


                //@Throws(Exception.constructor)
            
    public: Image scale(Image image, int32_t width, int32_t height){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    
}


};

            

