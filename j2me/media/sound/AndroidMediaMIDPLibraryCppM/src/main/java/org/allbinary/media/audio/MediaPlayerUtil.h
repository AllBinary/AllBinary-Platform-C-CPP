
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
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_MEDIAPLAYERUTIL_H
        #define ORG_ALLBINARY_MEDIA_AUDIO_MEDIAPLAYERUTIL_H

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
        
class MediaPlayerUtil
            : public Object
         {

    private: static MediaPlayerUtil* instance() { static std::unique_ptr<MediaPlayerUtil> value(new MediaPlayerUtil()); return value.get(); }

    public: static MediaPlayerUtil* getInstance();

    protected: LogUtil* logUtil = LogUtil::getInstance();

                //@Throws(Exception.constructor)
            
    public: void waitForMediaPlayer(MediaPlayer* mediaPlayer);

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_MEDIAPLAYERUTIL_H
