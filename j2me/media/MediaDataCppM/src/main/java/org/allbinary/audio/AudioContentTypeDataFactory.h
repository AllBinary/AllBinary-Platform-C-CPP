
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/audio/AudioContentTypeData.h"

class AudioContentTypeDataFactory
            : public Object
         {

    private: static AudioContentTypeDataFactory* instance() { static std::unique_ptr<AudioContentTypeDataFactory> value(new AudioContentTypeDataFactory()); return value.get(); }

    public: static AudioContentTypeDataFactory* getInstance();

    public: AudioContentTypeData* MIME_AUDIO_TONE = new AudioContentTypeData("audio/x-tone-seq");

    public: AudioContentTypeData* MIME_AUDIO_AMR = new AudioContentTypeData("audio/amr");

    public: AudioContentTypeData* MIME_AUDIO_AMR_WB = new AudioContentTypeData("audio/amr-wb");

    public: AudioContentTypeData* MIME_AUDIO_WAV = new AudioContentTypeData("audio/x-wav");

    public: AudioContentTypeData* MIME_AUDIO_MIDI = new AudioContentTypeData("audio/midi");

    public: AudioContentTypeData* MIME_AUDIO_SP_MIDI = new AudioContentTypeData("audio/sp-midi");

private: AudioContentTypeDataFactory();

};

            


        #endif //ORG_ALLBINARY_AUDIO_AUDIOCONTENTTYPEDATAFACTORY_H
