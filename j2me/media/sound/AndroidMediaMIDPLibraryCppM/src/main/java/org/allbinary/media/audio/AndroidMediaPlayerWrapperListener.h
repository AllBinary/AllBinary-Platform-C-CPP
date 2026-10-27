
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_ANDROIDMEDIAPLAYERWRAPPERLISTENER_H
        #define ORG_ALLBINARY_MEDIA_AUDIO_ANDROIDMEDIAPLAYERWRAPPERLISTENER_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/media/PlayerListener.h>

      
#include <android/media/MediaPlayer.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/audio/AndroidMediaPlayerWrapper.h"
#include "org/allbinary/media/audio/OnBufferingUpdateListener.h"
#include "org/allbinary/media/audio/OnPreparedListener.h"
#include "org/allbinary/media/audio/OnErrorListener.h"
#include "org/allbinary/media/audio/OnCompletionListener.h"
//#include "org/allbinary/media/audio/MediaPlayerOnBufferingUpdateListener.h"
//#include "org/allbinary/media/audio/AndroidMediaPlayerOnBufferingUpdateListener.h"
//#include "org/allbinary/media/audio/MediaPlayerOnPreparedListener.h"
//#include "org/allbinary/media/audio/AndroidMediaPlayerOnPreparedListener.h"
//#include "org/allbinary/media/audio/MediaPlayerOnErrorListener.h"
//#include "org/allbinary/media/audio/AndroidMediaPlayerOnErrorListener.h"
//#include "org/allbinary/media/audio/MediaPlayerOnCompletionListener.h"
//#include "org/allbinary/media/audio/AndroidMediaPlayerOnCompletionListener.h"

class AndroidMediaPlayerWrapperListener
            : public Object
         {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: AndroidMediaPlayerWrapper* androidMediaPlayerWrapper = AndroidMediaPlayerWrapper::NULL_ANDROID_MEDIA_PLAYER_WRAPPER;

public: AndroidMediaPlayerWrapperListener(AndroidMediaPlayerWrapper* androidMediaPlayerWrapper);

//inner= member=true isStatic=
class MediaPlayerOnBufferingUpdateListener
            : public Object
        , public MediaPlayer::OnBufferingUpdateListener {

    public: void onBufferingUpdate(MediaPlayer* mediaPlayer, int32_t i);

};

            
//inner= member=true isStatic=
class MediaPlayerOnPreparedListener
            : public Object
        , public MediaPlayer::OnPreparedListener {

    public: void onPrepared(MediaPlayer* mp);

};

            
//inner= member=true isStatic=
class MediaPlayerOnErrorListener
            : public Object
        , public MediaPlayer::OnErrorListener {

    public: bool onError(MediaPlayer* mp, int32_t what, int32_t extra);

};

            
//inner= member=true isStatic=
class MediaPlayerOnCompletionListener
            : public Object
        , public MediaPlayer::OnCompletionListener {

    public: void onCompletion(MediaPlayer* mp);

};

            
//inner= member=true isStatic=
class AndroidMediaPlayerOnBufferingUpdateListener: public MediaPlayerOnBufferingUpdateListener {

    private: const std::string ON_BUFFERING_UPDATE = "onBufferingUpdate()";

    private: AndroidMediaPlayerWrapperListener* androidMediaPlayerWrapperListener;

public: AndroidMediaPlayerOnBufferingUpdateListener(AndroidMediaPlayerWrapperListener* androidMediaPlayerWrapperListener);

    public: void onBufferingUpdate(MediaPlayer* mediaPlayer, int32_t i);

};

            
    private: MediaPlayer::OnBufferingUpdateListener* mOnBufferingUpdateListener = new AndroidMediaPlayerOnBufferingUpdateListener(this);

//inner= member=true isStatic=
class AndroidMediaPlayerOnPreparedListener: public MediaPlayerOnPreparedListener {

    private: const std::string ON_PREPARE = "onPrepare()";

    private: AndroidMediaPlayerWrapperListener* androidMediaPlayerWrapperListener;

public: AndroidMediaPlayerOnPreparedListener(AndroidMediaPlayerWrapperListener* androidMediaPlayerWrapperListener);

    public: void onPrepared(MediaPlayer* mp);

};

            
    private: MediaPlayer::OnPreparedListener* mOnPreparedListener = new AndroidMediaPlayerOnPreparedListener(this);

//inner= member=true isStatic=
class AndroidMediaPlayerOnErrorListener: public MediaPlayerOnErrorListener {

    private: const std::string ON_ERROR = "onError()";

    private: AndroidMediaPlayerWrapperListener* androidMediaPlayerWrapperListener;

public: AndroidMediaPlayerOnErrorListener(AndroidMediaPlayerWrapperListener* androidMediaPlayerWrapperListener);

    public: bool onError(MediaPlayer* mp, int32_t what, int32_t extra);

};

            
    private: MediaPlayer::OnErrorListener* mOnErrorListener = new AndroidMediaPlayerOnErrorListener(this);

//inner= member=true isStatic=
class AndroidMediaPlayerOnCompletionListener: public MediaPlayerOnCompletionListener {

    private: const std::string ON_COMPLETE = "onComplete()";

    private: AndroidMediaPlayerWrapperListener* androidMediaPlayerWrapperListener;

public: AndroidMediaPlayerOnCompletionListener(AndroidMediaPlayerWrapperListener* androidMediaPlayerWrapperListener);

    public: void onCompletion(MediaPlayer* mp);

};

            
    private: MediaPlayer::OnCompletionListener* mOnCompletionListener = new AndroidMediaPlayerOnCompletionListener(this);

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_ANDROIDMEDIAPLAYERWRAPPERLISTENER_H
