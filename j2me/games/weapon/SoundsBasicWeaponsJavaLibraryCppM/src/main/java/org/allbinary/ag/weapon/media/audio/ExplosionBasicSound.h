
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
        



        #ifndef ORG_ALLBINARY_AG_WEAPON_MEDIA_AUDIO_EXPLOSIONBASICSOUND_H
        #define ORG_ALLBINARY_AG_WEAPON_MEDIA_AUDIO_EXPLOSIONBASICSOUND_H

#include <org/allbinary/media/audio/CompositeSound.h>

      
#include <org/allbinary/media/audio/Sound.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ExplosionBasicSound: public CompositeSound {

    private: static Sound soundInterface = ExplosionBasicSound();

    public: static Sound getInstance();

private: ExplosionBasicSound();

};

            


        #endif //ORG_ALLBINARY_AG_WEAPON_MEDIA_AUDIO_EXPLOSIONBASICSOUND_H
