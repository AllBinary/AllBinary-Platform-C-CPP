
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Thread.h"
        
#include <android/media/MediaPlayer.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MediaPlayerUtil
            : public Object
         {

    private: static MediaPlayerUtil instance() { return MediaPlayerUtil(); }

    public: static MediaPlayerUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MediaPlayerUtil::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

                //@Throws(Exception.constructor)
            
    public: void waitForMediaPlayer(MediaPlayer mediaPlayer){

    std::string MESSAGE = "Not Stopped Waiting";;
    

    std::string METHOD_NAME = "wait";;
    

    int32_t index = 0;;
    

        while(mediaPlayer.isPlaying() && index < 50)
        {
this->logUtil.putF(MESSAGE, this, METHOD_NAME);
    
Thread::sleep(100);
    
index++;
    
}

}


};

            

