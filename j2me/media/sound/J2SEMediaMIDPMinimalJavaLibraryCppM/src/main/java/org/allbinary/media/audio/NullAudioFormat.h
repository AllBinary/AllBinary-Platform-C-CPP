
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_NULLAUDIOFORMAT_H
        #define ORG_ALLBINARY_MEDIA_AUDIO_NULLAUDIOFORMAT_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/sound/sampled/AudioFormat.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class NullAudioFormat
            : public Object
         {

    public: static AudioFormat* NULL_AUDIO_FORMAT() { static std::unique_ptr<AudioFormat> value(new AudioFormat(AudioFormat::Encoding.PCM_UNSIGNED, 0.0, 0, 0, 0, 0.0, false)); return value.get(); }

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_NULLAUDIOFORMAT_H
