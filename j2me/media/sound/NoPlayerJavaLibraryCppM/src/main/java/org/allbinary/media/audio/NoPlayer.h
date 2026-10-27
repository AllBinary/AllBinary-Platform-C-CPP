
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
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_NOPLAYER_H
        #define ORG_ALLBINARY_MEDIA_AUDIO_NOPLAYER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class Control;
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/audio/BasicPlayer.h"
class NullControl;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NoPlayer: public BasicPlayer {

    private: static NoPlayer* NO_PLAYER_owner();
    public: static NoPlayer* NO_PLAYER;

public: NoPlayer();

    public: void close();

    public: std::string getContentType();

    public: Control* getControl(std::string controlType);

    public: std::vector<Control*> getControls();

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_NOPLAYER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_AUDIO_NOPLAYER_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_AUDIO_NOPLAYER_H_COMPLETE
        #if __has_include(<javax/microedition/media/Control.h>)
#include <javax/microedition/media/Control.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include("org/allbinary/media/audio/BasicPlayer.h")
#include "org/allbinary/media/audio/BasicPlayer.h"
#endif
#if __has_include("org/allbinary/media/audio/NullControl.h")
#include "org/allbinary/media/audio/NullControl.h"
#endif

        #endif
    
