
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

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Thread.h"
        
#include <android/media/MediaPlayer.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MediaPlayerUtil
            : public Object
         {

    private: static MediaPlayerUtil instance() { return MediaPlayerUtil(); }

    public: static MediaPlayerUtil getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

                //@Throws(Exception.constructor)
            
    public: void waitForMediaPlayer(MediaPlayer mediaPlayer);

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_MEDIAPLAYERUTIL_H
