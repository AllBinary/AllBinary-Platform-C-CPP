
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
        



            #include "../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AudioContentTypeData.h"

class AudioContentTypeDataFactory
            : public Object
         {
        

    private: static const instance: AudioContentTypeDataFactory = new AudioContentTypeDataFactory();

    public static AudioContentTypeDataFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AudioContentTypeDataFactory.instance;
    
}


    public const MIME_AUDIO_TONE: AudioContentTypeData = new AudioContentTypeData("audio/x-tone-seq");

    public const MIME_AUDIO_AMR: AudioContentTypeData = new AudioContentTypeData("audio/amr");

    public const MIME_AUDIO_AMR_WB: AudioContentTypeData = new AudioContentTypeData("audio/amr-wb");

    public const MIME_AUDIO_WAV: AudioContentTypeData = new AudioContentTypeData("audio/x-wav");

    public const MIME_AUDIO_MIDI: AudioContentTypeData = new AudioContentTypeData("audio/midi");

    public const MIME_AUDIO_SP_MIDI: AudioContentTypeData = new AudioContentTypeData("audio/sp-midi");

private constructor (){

            super();
        }


};

            

