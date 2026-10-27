
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
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/graphics/paint/PaintableInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/image/GameFeatureImageCacheFactory.h"

class PaintableToImageUtil
            : public Object
         {

    private: static PaintableToImageUtil* instance() { static std::unique_ptr<PaintableToImageUtil> value(new PaintableToImageUtil()); return value.get(); }

                //@Throws(Exception.constructor)
            
    public: static Image* getImage(PaintableInterface* paintableInterface, int32_t width, int32_t height){

    Image* image = GameFeatureImageCacheFactory::getInstance()->get(PaintableToImageUtil::instance()->getClass()->getName(), width, height);;
    

    Graphics* graphics = image->getGraphics();;
    
paintableInterface->paint(graphics);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    
}


};

            

