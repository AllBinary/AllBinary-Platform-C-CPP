
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
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_NOSOUND_H
        #define ORG_ALLBINARY_MEDIA_AUDIO_NOSOUND_H

#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Sound.h"
#include "NoPlayer.h"

class NoSound: public Sound {
        

    public static NoSound getInstance();

    private: static const instance: NoSound = new NoSound();

private constructor ();

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_NOSOUND_H
