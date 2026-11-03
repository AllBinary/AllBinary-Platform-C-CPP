
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Runnable.h"
        
class Player;
class PreLogUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/audio/SoundInterface.h"
class NoPlayer;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class Sound
            : public virtual Object
        , public virtual SoundInterface, public virtual Runnable {

    private: std::string resource;

    /*protected*/ public: Player* player;

/*protected*/ public: Sound(std::string resource);

    public: std::string getResource();

    public: Player* getPlayerP();

    public: void setPlayerP(Player* player);

                //@Throws(Exception.constructor)
            
    public: void init();

    public: int32_t getDuration();

    public: void run();

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_SOUND_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_AUDIO_SOUND_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_AUDIO_SOUND_H_COMPLETE
        #if __has_include(<javax/microedition/media/Player.h>)
#include <javax/microedition/media/Player.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/PreLogUtil.h>)
#include <org/allbinary/logic/communication/log/PreLogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/media/audio/SoundInterface.h")
#include "org/allbinary/media/audio/SoundInterface.h"
#endif
#if __has_include("org/allbinary/media/audio/NoPlayer.h")
#include "org/allbinary/media/audio/NoPlayer.h"
#endif

        #endif
    
