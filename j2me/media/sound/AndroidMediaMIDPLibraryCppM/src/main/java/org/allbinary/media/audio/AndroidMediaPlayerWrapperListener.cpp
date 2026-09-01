
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

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: AndroidMediaPlayerWrapper androidMediaPlayerWrapper = AndroidMediaPlayerWrapper::NULL_ANDROID_MEDIA_PLAYER_WRAPPER;

public: AndroidMediaPlayerWrapperListener(AndroidMediaPlayerWrapper androidMediaPlayerWrapper){

        try {
            this->logUtil.putF(this->commonStrings.START, this, this->commonStrings.CONSTRUCTOR);
    
this->androidMediaPlayerWrapper= androidMediaPlayerWrapper;
    

    MediaPlayer mediaPlayer = androidMediaPlayerWrapper.getMediaPlayer();;
    
mediaPlayer.setOnCompletionListener(this->mOnCompletionListener);
    
mediaPlayer.setOnBufferingUpdateListener(this->mOnBufferingUpdateListener);
    
mediaPlayer.setOnPreparedListener(this->mOnPreparedListener);
    
mediaPlayer.setOnErrorListener(this->mOnErrorListener);
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.CONSTRUCTOR, e);
    
}

}


//inner= member=true isStatic=
class MediaPlayerOnBufferingUpdateListener
            : public Object
        : public MediaPlayer::OnBufferingUpdateListener {

    public: void onBufferingUpdate(MediaPlayer mediaPlayer, int32_t i){
}


};

            
//inner= member=true isStatic=
class MediaPlayerOnPreparedListener
            : public Object
        : public MediaPlayer::OnPreparedListener {

    public: void onPrepared(MediaPlayer mp){
}


};

            
//inner= member=true isStatic=
class MediaPlayerOnErrorListener
            : public Object
        : public MediaPlayer::OnErrorListener {

    public: bool onError(MediaPlayer mp, int32_t what, int32_t extra){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


};

            
//inner= member=true isStatic=
class MediaPlayerOnCompletionListener
            : public Object
        : public MediaPlayer::OnCompletionListener {

    public: void onCompletion(MediaPlayer mp){
}


};

            
//inner= member=true isStatic=
class AndroidMediaPlayerOnBufferingUpdateListener: public MediaPlayerOnBufferingUpdateListener {

    private: const std::string ON_BUFFERING_UPDATE = "onBufferingUpdate()";

    private: AndroidMediaPlayerWrapperListener androidMediaPlayerWrapperListener;

public: AndroidMediaPlayerOnBufferingUpdateListener(AndroidMediaPlayerWrapperListener androidMediaPlayerWrapperListener){
this->androidMediaPlayerWrapperListener= androidMediaPlayerWrapperListener;
    
}


    public: void onBufferingUpdate(MediaPlayer mediaPlayer, int32_t i){

    LogUtil logUtil = LogUtil::getInstance();;
    
logUtil.putF(StringMaker().append("Update buffer: ").appendint(i).append("%").toString(), this, this->ON_BUFFERING_UPDATE);
    
this->androidMediaPlayerWrapperListener.androidMediaPlayerWrapper.update(PlayerListener::DEVICE_UNAVAILABLE);
    
}


};

            
    private: MediaPlayer::OnBufferingUpdateListener mOnBufferingUpdateListener = AndroidMediaPlayerOnBufferingUpdateListener(this);

//inner= member=true isStatic=
class AndroidMediaPlayerOnPreparedListener: public MediaPlayerOnPreparedListener {

    private: const std::string ON_PREPARE = "onPrepare()";

    private: AndroidMediaPlayerWrapperListener androidMediaPlayerWrapperListener;

public: AndroidMediaPlayerOnPreparedListener(AndroidMediaPlayerWrapperListener androidMediaPlayerWrapperListener){
this->androidMediaPlayerWrapperListener= androidMediaPlayerWrapperListener;
    
}


    public: void onPrepared(MediaPlayer mp){

    LogUtil logUtil = LogUtil::getInstance();;
    

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
logUtil.putF(commonStrings.START, this, this->ON_PREPARE);
    
this->androidMediaPlayerWrapperListener.androidMediaPlayerWrapper.update(PlayerListener::DEVICE_AVAILABLE);
    
}


};

            
    private: MediaPlayer::OnPreparedListener mOnPreparedListener = AndroidMediaPlayerOnPreparedListener(this);

//inner= member=true isStatic=
class AndroidMediaPlayerOnErrorListener: public MediaPlayerOnErrorListener {

    private: const std::string ON_ERROR = "onError()";

    private: AndroidMediaPlayerWrapperListener androidMediaPlayerWrapperListener;

public: AndroidMediaPlayerOnErrorListener(AndroidMediaPlayerWrapperListener androidMediaPlayerWrapperListener){
this->androidMediaPlayerWrapperListener= androidMediaPlayerWrapperListener;
    
}


    public: bool onError(MediaPlayer mp, int32_t what, int32_t extra){

    LogUtil logUtil = LogUtil::getInstance();;
    
logUtil.putF(StringMaker().append(CommonLabels::getInstance().START_LABEL).append("What: ").appendint(what).append(" Extra: ").appendint(extra).toString(), this, this->ON_ERROR);
    
this->androidMediaPlayerWrapperListener.androidMediaPlayerWrapper.update(PlayerListener::ERROR);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


};

            
    private: MediaPlayer::OnErrorListener mOnErrorListener = AndroidMediaPlayerOnErrorListener(this);

//inner= member=true isStatic=
class AndroidMediaPlayerOnCompletionListener: public MediaPlayerOnCompletionListener {

    private: const std::string ON_COMPLETE = "onComplete()";

    private: AndroidMediaPlayerWrapperListener androidMediaPlayerWrapperListener;

public: AndroidMediaPlayerOnCompletionListener(AndroidMediaPlayerWrapperListener androidMediaPlayerWrapperListener){
this->androidMediaPlayerWrapperListener= androidMediaPlayerWrapperListener;
    
}


    public: void onCompletion(MediaPlayer mp){

    LogUtil logUtil = LogUtil::getInstance();;
    

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
logUtil.putF(commonStrings.START, this, this->ON_COMPLETE);
    
this->androidMediaPlayerWrapperListener.androidMediaPlayerWrapper.update(PlayerListener::END_OF_MEDIA);
    
}


};

            
    private: MediaPlayer::OnCompletionListener mOnCompletionListener = AndroidMediaPlayerOnCompletionListener(this);

};

            

