
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
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_MEDIAPLAYERUTIL_CPP
        #define ORG_ALLBINARY_MEDIA_AUDIO_MEDIAPLAYERUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/audio/MediaPlayerUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Thread.h"
        
#include <android/media/MediaPlayer.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

MediaPlayerUtil::MediaPlayerUtil() : logUtil(LogUtil::getInstance()) {
        }
        auto MediaPlayerUtil::instance_owner() -> MediaPlayerUtil* { static std::unique_ptr<MediaPlayerUtil> value(new MediaPlayerUtil()); return value.get(); }
MediaPlayerUtil* MediaPlayerUtil::instance = MediaPlayerUtil::instance_owner();

    auto MediaPlayerUtil::getInstance() -> MediaPlayerUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MediaPlayerUtil::instance;
    
}


                //@Throws(Exception.constructor)
            
    auto MediaPlayerUtil::waitForMediaPlayer(MediaPlayer* mediaPlayer) -> void{

    std::string MESSAGE = "Not Stopped Waiting";;
    

    std::string METHOD_NAME = "wait";;
    

    int32_t index = 0;;
    

        while(mediaPlayer->isPlaying() && index < 50)
        {
this->logUtil->putF(MESSAGE, this, METHOD_NAME);
    
Thread::sleep(100);
    
index++;
    
}

}




        #endif //ORG_ALLBINARY_MEDIA_AUDIO_MEDIAPLAYERUTIL_CPP
