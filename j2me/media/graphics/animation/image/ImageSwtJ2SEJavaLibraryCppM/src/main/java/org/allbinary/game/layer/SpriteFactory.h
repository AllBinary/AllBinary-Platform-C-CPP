
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_SPRITEFACTORY_H
        #define ORG_ALLBINARY_GAME_LAYER_SPRITEFACTORY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/game/Sprite.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/SpriteFactoryInterface.h"

class SpriteFactory
            : public Object
        , public SpriteFactoryInterface {

    private: static SpriteFactory* instance() { static std::unique_ptr<SpriteFactory> value(new SpriteFactory()); return value.get(); }

    public: static SpriteFactory* getInstance();

    protected: LogUtil* logUtil = LogUtil::getInstance();

    public: Sprite* createSprite(Image* image, int32_t frameWidth, int32_t frameHeight);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_SPRITEFACTORY_H
