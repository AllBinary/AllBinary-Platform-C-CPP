
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
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_SELECTSOUND_H
        #define ORG_ALLBINARY_MEDIA_AUDIO_SELECTSOUND_H

















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CompositeSound.h"
#include "Sound.h"
//Use 8hz16bitmono for most J2ME
class SelectSound: public CompositeSound {
        

    private: static soundInterface: Sound = new SelectSound();

    public static Sound getInstance();

private constructor ();

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_SELECTSOUND_H
