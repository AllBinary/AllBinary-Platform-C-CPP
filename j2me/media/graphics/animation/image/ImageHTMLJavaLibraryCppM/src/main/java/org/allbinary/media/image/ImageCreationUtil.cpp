
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/image/GameFeatureImageCacheFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ImageCreationUtil
            : public Object
         {

    private: static ImageCreationUtil* instance() { static std::unique_ptr<ImageCreationUtil> value(new ImageCreationUtil()); return value.get(); }

    public: static ImageCreationUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageCreationUtil::instance();
    
}


private: ImageCreationUtil(){
}


                //@Throws(Exception.constructor)
            
    public: Image* createImageWH(int32_t width, int32_t height){

    Image* image = GameFeatureImageCacheFactory::getInstance()->get(this->getClass()->getName(), width, height);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    
}


                //@Throws(Exception.constructor)
            
    public: Image* createImage(int32_t width, int32_t height, float maxScaleX, float maxScaleY){

    Image* image = GameFeatureImageCacheFactory::getInstance()->get(this->getClass()->getName(), static_cast<int32_t>((width *maxScaleX)) +1, static_cast<int32_t>((height *maxScaleY)) +1);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    
}


};

            

