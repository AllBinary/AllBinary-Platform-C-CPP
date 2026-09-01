
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

            #include "../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AudioContentTypeData.h"

class AudioContentTypeDataFactory
            : public Object
         {

    private: static AudioContentTypeDataFactory instance() { return AudioContentTypeDataFactory(); }

    public: static AudioContentTypeDataFactory getInstance();

    public: const AudioContentTypeData MIME_AUDIO_TONE = AudioContentTypeData("audio/x-tone-seq");

    public: const AudioContentTypeData MIME_AUDIO_AMR = AudioContentTypeData("audio/amr");

    public: const AudioContentTypeData MIME_AUDIO_AMR_WB = AudioContentTypeData("audio/amr-wb");

    public: const AudioContentTypeData MIME_AUDIO_WAV = AudioContentTypeData("audio/x-wav");

    public: const AudioContentTypeData MIME_AUDIO_MIDI = AudioContentTypeData("audio/midi");

    public: const AudioContentTypeData MIME_AUDIO_SP_MIDI = AudioContentTypeData("audio/sp-midi");

private: AudioContentTypeDataFactory();

};

            


        #endif //ORG_ALLBINARY_AUDIO_AUDIOCONTENTTYPEDATAFACTORY_H
