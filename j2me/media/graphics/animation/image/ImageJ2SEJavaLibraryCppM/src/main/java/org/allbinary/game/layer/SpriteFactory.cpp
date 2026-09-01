
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/game/Sprite.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SpriteFactoryInterface.h"

class SpriteFactory
            : public Object
        : public SpriteFactoryInterface {

    private: static SpriteFactory instance() { return SpriteFactory(); }

    public: static SpriteFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SpriteFactory::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    public: Sprite createSprite(Image image, int32_t frameWidth, int32_t frameHeight){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Sprite(image, frameWidth, frameHeight);
    
}


};

            

