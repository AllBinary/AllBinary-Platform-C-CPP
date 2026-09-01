
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2002 AllBinary 
                *   
                *  By agreeing to this license you and any business entity you represent are 
                *  legally bound to the AllBinary Open License Version 1 legal agreement. 
                *   
                *  You may obtain the AllBinary Open License Version 1 legal agreement from 
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
                *    Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_SELECTBUILDINGSOUND_H
        #define ORG_ALLBINARY_MEDIA_AUDIO_SELECTBUILDINGSOUND_H

#include <org/allbinary/media/audio/CompositeSound.h>

      
#include <org/allbinary/media/audio/Sound.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class SelectBuildingSound: public CompositeSound {

    private: static Sound soundInterface = SelectBuildingSound();

    public: static Sound getInstance();

private: SelectBuildingSound();

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_SELECTBUILDINGSOUND_H
