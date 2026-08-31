
        /* Generated Code Do Not Modify */
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/media/PlayerListener.h>

      
#include <android/media/MediaPlayer.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AndroidMediaPlayerWrapper.h"
#include "OnBufferingUpdateListener.h"
#include "OnPreparedListener.h"
#include "OnErrorListener.h"
#include "OnCompletionListener.h"
//#include "MediaPlayerOnBufferingUpdateListener.h"
//#include "AndroidMediaPlayerOnBufferingUpdateListener.h"
//#include "MediaPlayerOnPreparedListener.h"
//#include "AndroidMediaPlayerOnPreparedListener.h"
//#include "MediaPlayerOnErrorListener.h"
//#include "AndroidMediaPlayerOnErrorListener.h"
//#include "MediaPlayerOnCompletionListener.h"
//#include "AndroidMediaPlayerOnCompletionListener.h"

class AndroidMediaPlayerWrapperListener
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: androidMediaPlayerWrapper: AndroidMediaPlayerWrapper = AndroidMediaPlayerWrapper.NULL_ANDROID_MEDIA_PLAYER_WRAPPER;

public constructor (AndroidMediaPlayerWrapper androidMediaPlayerWrapper){

            super();
        
        try {
            this.logUtil!.putF(this.commonStrings!.START, this, this.commonStrings!.CONSTRUCTOR);
    
this.androidMediaPlayerWrapper= androidMediaPlayerWrapper;
    

    mediaPlayer: MediaPlayer = androidMediaPlayerWrapper!.getMediaPlayer()!;;
    
mediaPlayer!.setOnCompletionListener(this.mOnCompletionListener);
    
mediaPlayer!.setOnBufferingUpdateListener(this.mOnBufferingUpdateListener);
    
mediaPlayer!.setOnPreparedListener(this.mOnPreparedListener);
    
mediaPlayer!.setOnErrorListener(this.mOnErrorListener);
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.commonStrings!.CONSTRUCTOR, e);
    
}

}


//inner= member=true isStatic=
class MediaPlayerOnBufferingUpdateListener
            : public Object
        : public MediaPlayer.OnBufferingUpdateListener {
        

    public onBufferingUpdate(MediaPlayer mediaPlayer, int32_t i){
}


};

            
//inner= member=true isStatic=
class MediaPlayerOnPreparedListener
            : public Object
        : public MediaPlayer.OnPreparedListener {
        

    public onPrepared(MediaPlayer mp){
}


};

            
//inner= member=true isStatic=
class MediaPlayerOnErrorListener
            : public Object
        : public MediaPlayer.OnErrorListener {
        

    public bool onError(MediaPlayer mp, int32_t what, int32_t extra){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


};

            
//inner= member=true isStatic=
class MediaPlayerOnCompletionListener
            : public Object
        : public MediaPlayer.OnCompletionListener {
        

    public onCompletion(MediaPlayer mp){
}


};

            
//inner= member=true isStatic=
class AndroidMediaPlayerOnBufferingUpdateListener: public MediaPlayerOnBufferingUpdateListener {
        

    private: const ON_BUFFERING_UPDATE: string = "onBufferingUpdate()";

    private: const androidMediaPlayerWrapperListener: AndroidMediaPlayerWrapperListener;

public constructor (AndroidMediaPlayerWrapperListener androidMediaPlayerWrapperListener){

            super();
        this.androidMediaPlayerWrapperListener= androidMediaPlayerWrapperListener;
    
}


    public onBufferingUpdate(MediaPlayer mediaPlayer, int32_t i){

    logUtil: LogUtil = LogUtil.getInstance()!;;
    
logUtil!.putF(new StringMaker().append("Update buffer: ")!.appendint(i)!.append("%")!.toString(), this, this.ON_BUFFERING_UPDATE);
    
this.androidMediaPlayerWrapperListener!.androidMediaPlayerWrapper!.update(PlayerListener.DEVICE_UNAVAILABLE);
    
}


};

            
    private: mOnBufferingUpdateListener: MediaPlayer.OnBufferingUpdateListener = new this.AndroidMediaPlayerOnBufferingUpdateListener(this);

//inner= member=true isStatic=
class AndroidMediaPlayerOnPreparedListener: public MediaPlayerOnPreparedListener {
        

    private: const ON_PREPARE: string = "onPrepare()";

    private: const androidMediaPlayerWrapperListener: AndroidMediaPlayerWrapperListener;

public constructor (AndroidMediaPlayerWrapperListener androidMediaPlayerWrapperListener){

            super();
        this.androidMediaPlayerWrapperListener= androidMediaPlayerWrapperListener;
    
}


    public onPrepared(MediaPlayer mp){

    logUtil: LogUtil = LogUtil.getInstance()!;;
    

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
logUtil!.putF(commonStrings!.START, this, this.ON_PREPARE);
    
this.androidMediaPlayerWrapperListener!.androidMediaPlayerWrapper!.update(PlayerListener.DEVICE_AVAILABLE);
    
}


};

            
    private: mOnPreparedListener: MediaPlayer.OnPreparedListener = new this.AndroidMediaPlayerOnPreparedListener(this);

//inner= member=true isStatic=
class AndroidMediaPlayerOnErrorListener: public MediaPlayerOnErrorListener {
        

    private: const ON_ERROR: string = "onError()";

    private: const androidMediaPlayerWrapperListener: AndroidMediaPlayerWrapperListener;

public constructor (AndroidMediaPlayerWrapperListener androidMediaPlayerWrapperListener){

            super();
        this.androidMediaPlayerWrapperListener= androidMediaPlayerWrapperListener;
    
}


    public bool onError(MediaPlayer mp, int32_t what, int32_t extra){

    logUtil: LogUtil = LogUtil.getInstance()!;;
    
logUtil!.putF(new StringMaker().append(CommonLabels.getInstance()!.START_LABEL)!.append("What: ")!.appendint(what)!.append(" Extra: ")!.appendint(extra)!.toString(), this, this.ON_ERROR);
    
this.androidMediaPlayerWrapperListener!.androidMediaPlayerWrapper!.update(PlayerListener.ERROR);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


};

            
    private: mOnErrorListener: MediaPlayer.OnErrorListener = new this.AndroidMediaPlayerOnErrorListener(this);

//inner= member=true isStatic=
class AndroidMediaPlayerOnCompletionListener: public MediaPlayerOnCompletionListener {
        

    private: const ON_COMPLETE: string = "onComplete()";

    private: const androidMediaPlayerWrapperListener: AndroidMediaPlayerWrapperListener;

public constructor (AndroidMediaPlayerWrapperListener androidMediaPlayerWrapperListener){

            super();
        this.androidMediaPlayerWrapperListener= androidMediaPlayerWrapperListener;
    
}


    public onCompletion(MediaPlayer mp){

    logUtil: LogUtil = LogUtil.getInstance()!;;
    

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
logUtil!.putF(commonStrings!.START, this, this.ON_COMPLETE);
    
this.androidMediaPlayerWrapperListener!.androidMediaPlayerWrapper!.update(PlayerListener.END_OF_MEDIA);
    
}


};

            
    private: mOnCompletionListener: MediaPlayer.OnCompletionListener = new this.AndroidMediaPlayerOnCompletionListener(this);

};

            

