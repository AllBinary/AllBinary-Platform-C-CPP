
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
        



        #ifndef ORG_ALLBINARY_AG_WEAPON_MEDIA_AUDIO_DROPWEAPONSOUND_H
        #define ORG_ALLBINARY_AG_WEAPON_MEDIA_AUDIO_DROPWEAPONSOUND_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/media/audio/CompositeSound.h>

      
#include <org/allbinary/media/audio/Sound.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DropWeaponSound: public CompositeSound {

    private: static inline Sound* soundInterface = new DropWeaponSound();

    public: static Sound* getInstance();

private: DropWeaponSound();

};

            


        #endif //ORG_ALLBINARY_AG_WEAPON_MEDIA_AUDIO_DROPWEAPONSOUND_H
