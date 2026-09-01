
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
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_SOUND_H
        #define ORG_ALLBINARY_MEDIA_AUDIO_SOUND_H

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Runnable.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/media/Player.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SoundInterface.h"
#include "NoPlayer.h"

class Sound
            : public Object
        : public SoundInterface, public Runnable {

    private: std::string resource;

    protected: Player player = NoPlayer::NO_PLAYER;

protected: Sound(std::string resource);

    public: std::string getResource();

    public: Player getPlayerP();

    public: void setPlayerP(Player player);

                //@Throws(Exception.constructor)
            
    public: void init();

    public: int32_t getDuration();

    public: void run();

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_SOUND_H
