
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
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_GAMEBEGINSOUND_CPP
        #define ORG_ALLBINARY_MEDIA_AUDIO_GAMEBEGINSOUND_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/audio/GameBeginSound.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/audio/CompositeSound.h"
#include "org/allbinary/media/audio/Sound.h"
//Use 8hz16bitmono for most J2ME
Sound* GameBeginSound::soundInterface = new GameBeginSound();

GameBeginSound::GameBeginSound() : CompositeSound("resource:/wav/begin.wav"){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto GameBeginSound::getInstance() -> Sound*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameBeginSound::soundInterface;
    
}




        #endif //ORG_ALLBINARY_MEDIA_AUDIO_GAMEBEGINSOUND_CPP
