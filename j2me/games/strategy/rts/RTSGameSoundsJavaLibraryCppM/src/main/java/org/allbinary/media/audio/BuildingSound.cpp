
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
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_BUILDINGSOUND_CPP
        #define ORG_ALLBINARY_MEDIA_AUDIO_BUILDINGSOUND_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/audio/BuildingSound.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/media/audio/CompositeSound.h>

      
#include <org/allbinary/media/audio/Sound.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
Sound* BuildingSound::soundInterface = new BuildingSound();

BuildingSound::BuildingSound() : CompositeSound("resource:/wav/building.wav"){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto BuildingSound::getInstance() -> Sound*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return BuildingSound::soundInterface;
    
}




        #endif //ORG_ALLBINARY_MEDIA_AUDIO_BUILDINGSOUND_CPP
