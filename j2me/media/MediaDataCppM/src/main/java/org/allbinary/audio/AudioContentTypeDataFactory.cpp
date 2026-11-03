
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
        



        #ifndef ORG_ALLBINARY_AUDIO_AUDIOCONTENTTYPEDATAFACTORY_CPP
        #define ORG_ALLBINARY_AUDIO_AUDIOCONTENTTYPEDATAFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/audio/AudioContentTypeDataFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/audio/AudioContentTypeData.h"

auto AudioContentTypeDataFactory::instance_owner() -> AudioContentTypeDataFactory* { static std::unique_ptr<AudioContentTypeDataFactory> value(new AudioContentTypeDataFactory()); return value.get(); }
AudioContentTypeDataFactory* AudioContentTypeDataFactory::instance = AudioContentTypeDataFactory::instance_owner();

    auto AudioContentTypeDataFactory::getInstance() -> AudioContentTypeDataFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AudioContentTypeDataFactory::instance;
    
}


AudioContentTypeDataFactory::AudioContentTypeDataFactory() : MIME_AUDIO_TONE(new AudioContentTypeData("audio/x-tone-seq")), MIME_AUDIO_AMR(new AudioContentTypeData("audio/amr")), MIME_AUDIO_AMR_WB(new AudioContentTypeData("audio/amr-wb")), MIME_AUDIO_WAV(new AudioContentTypeData("audio/x-wav")), MIME_AUDIO_MIDI(new AudioContentTypeData("audio/midi")), MIME_AUDIO_SP_MIDI(new AudioContentTypeData("audio/sp-midi")){
}




        #endif //ORG_ALLBINARY_AUDIO_AUDIOCONTENTTYPEDATAFACTORY_CPP
