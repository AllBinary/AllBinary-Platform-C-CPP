
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Thread.h"
        
#include <android/media/MediaPlayer.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MediaPlayerUtil
            : public Object
         {
        

    private: static const instance: MediaPlayerUtil = new MediaPlayerUtil();

    public static MediaPlayerUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MediaPlayerUtil.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

                //@Throws(Exception.constructor)
            
    public waitForMediaPlayer(MediaPlayer mediaPlayer){

    MESSAGE: string = "Not Stopped Waiting";;
    

    METHOD_NAME: string = "wait";;
    

    index: int32_t = 0;;
    

        while(mediaPlayer!.isPlaying() && index < 50)
        {
this.logUtil!.putF(MESSAGE, this, METHOD_NAME);
    
Thread.sleep(100);
    
index++;
    
}

}


};

            

