
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
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_NULLAUDIOFORMAT_CPP
        #define ORG_ALLBINARY_MEDIA_AUDIO_NULLAUDIOFORMAT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/audio/NullAudioFormat.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/sound/sampled/AudioFormat.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

NullAudioFormat::NullAudioFormat() {
        }
        auto NullAudioFormat::NULL_AUDIO_FORMAT_owner() -> AudioFormat* { static std::unique_ptr<AudioFormat> value(new AudioFormat(AudioFormat::Encoding->PCM_UNSIGNED, 0.0, 0, 0, 0, 0.0, false)); return value.get(); }
AudioFormat* NullAudioFormat::NULL_AUDIO_FORMAT = NullAudioFormat::NULL_AUDIO_FORMAT_owner();



        #endif //ORG_ALLBINARY_MEDIA_AUDIO_NULLAUDIOFORMAT_CPP
