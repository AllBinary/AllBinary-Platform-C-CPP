
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
        



        #ifndef ORG_ALLBINARY_AUDIO_AUDIOCONTENTTYPEDATAFACTORY_H
        #define ORG_ALLBINARY_AUDIO_AUDIOCONTENTTYPEDATAFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AudioContentTypeData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AudioContentTypeDataFactory
            : public virtual Object
         {

    private: static AudioContentTypeDataFactory* instance_owner();
    private: static AudioContentTypeDataFactory* instance;

    public: static AudioContentTypeDataFactory* getInstance();

    public: AudioContentTypeData* MIME_AUDIO_TONE;

    public: AudioContentTypeData* MIME_AUDIO_AMR;

    public: AudioContentTypeData* MIME_AUDIO_AMR_WB;

    public: AudioContentTypeData* MIME_AUDIO_WAV;

    public: AudioContentTypeData* MIME_AUDIO_MIDI;

    public: AudioContentTypeData* MIME_AUDIO_SP_MIDI;

private: AudioContentTypeDataFactory();

};

            


        #endif //ORG_ALLBINARY_AUDIO_AUDIOCONTENTTYPEDATAFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_AUDIO_AUDIOCONTENTTYPEDATAFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_AUDIO_AUDIOCONTENTTYPEDATAFACTORY_H_COMPLETE
        #if __has_include("org/allbinary/audio/AudioContentTypeData.h")
#include "org/allbinary/audio/AudioContentTypeData.h"
#endif

        #endif
    
