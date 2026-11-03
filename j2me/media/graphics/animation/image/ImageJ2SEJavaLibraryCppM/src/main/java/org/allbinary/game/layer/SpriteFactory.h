
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Image;
class Sprite;
class LogUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/SpriteFactoryInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SpriteFactory
            : public virtual Object
        , public virtual SpriteFactoryInterface {

    private: static SpriteFactory* instance_owner();
    private: static SpriteFactory* instance;

    public: static SpriteFactory* getInstance();


            
    public: SpriteFactory();
        
    /*protected*/ public: LogUtil* logUtil;

    public: Sprite* createSprite(Image* image, int32_t frameWidth, int32_t frameHeight);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_SPRITEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_SPRITEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_SPRITEFACTORY_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<javax/microedition/lcdui/game/Sprite.h>)
#include <javax/microedition/lcdui/game/Sprite.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include("org/allbinary/game/layer/SpriteFactoryInterface.h")
#include "org/allbinary/game/layer/SpriteFactoryInterface.h"
#endif

        #endif
    
