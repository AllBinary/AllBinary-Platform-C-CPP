
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_ANDROIDMEDIAPLAYERWRAPPERLISTENER_H
        #define ORG_ALLBINARY_MEDIA_AUDIO_ANDROIDMEDIAPLAYERWRAPPERLISTENER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class PlayerListener;
class MediaPlayer;
class LogUtil;
class StringMaker;
class CommonLabels;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AndroidMediaPlayerWrapper;
#include "org/allbinary/media/audio/OnBufferingUpdateListener.h"
#include "org/allbinary/media/audio/OnPreparedListener.h"
#include "org/allbinary/media/audio/OnErrorListener.h"
#include "org/allbinary/media/audio/OnCompletionListener.h"
//#include "org/allbinary/media/audio/MediaPlayerOnBufferingUpdateListener.h"
//class AndroidMediaPlayerOnBufferingUpdateListener;
//#include "org/allbinary/media/audio/MediaPlayerOnPreparedListener.h"
//class AndroidMediaPlayerOnPreparedListener;
//#include "org/allbinary/media/audio/MediaPlayerOnErrorListener.h"
//class AndroidMediaPlayerOnErrorListener;
//#include "org/allbinary/media/audio/MediaPlayerOnCompletionListener.h"
//class AndroidMediaPlayerOnCompletionListener;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AndroidMediaPlayerWrapperListener
            : public virtual Object
         {
private: class MediaPlayerOnBufferingUpdateListener;
private: class MediaPlayerOnPreparedListener;
private: class MediaPlayerOnErrorListener;
private: class MediaPlayerOnCompletionListener;
private: class AndroidMediaPlayerOnBufferingUpdateListener;
private: class AndroidMediaPlayerOnPreparedListener;
private: class AndroidMediaPlayerOnErrorListener;
private: class AndroidMediaPlayerOnCompletionListener;

    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    private: AndroidMediaPlayerWrapper* androidMediaPlayerWrapper;

public: AndroidMediaPlayerWrapperListener(AndroidMediaPlayerWrapper* androidMediaPlayerWrapper);

//inner= member=true isStatic=
private: class MediaPlayerOnBufferingUpdateListener
            : public virtual Object
        , public MediaPlayer::OnBufferingUpdateListener {


            
    public: MediaPlayerOnBufferingUpdateListener();
        
    public: void onBufferingUpdate(MediaPlayer* mediaPlayer, int32_t i);

};

            
//inner= member=true isStatic=
private: class MediaPlayerOnPreparedListener
            : public virtual Object
        , public MediaPlayer::OnPreparedListener {


            
    public: MediaPlayerOnPreparedListener();
        
    public: void onPrepared(MediaPlayer* mp);

};

            
//inner= member=true isStatic=
private: class MediaPlayerOnErrorListener
            : public virtual Object
        , public MediaPlayer::OnErrorListener {


            
    public: MediaPlayerOnErrorListener();
        
    public: bool onError(MediaPlayer* mp, int32_t what, int32_t extra);

};

            
//inner= member=true isStatic=
private: class MediaPlayerOnCompletionListener
            : public virtual Object
        , public MediaPlayer::OnCompletionListener {


            
    public: MediaPlayerOnCompletionListener();
        
    public: void onCompletion(MediaPlayer* mp);

};

            
//inner= member=true isStatic=
private: class AndroidMediaPlayerOnBufferingUpdateListener: public MediaPlayerOnBufferingUpdateListener {

    private: const std::string ON_BUFFERING_UPDATE = "onBufferingUpdate()";

    private: AndroidMediaPlayerWrapperListener* androidMediaPlayerWrapperListener;

public: AndroidMediaPlayerOnBufferingUpdateListener(AndroidMediaPlayerWrapperListener* androidMediaPlayerWrapperListener);

    public: void onBufferingUpdate(MediaPlayer* mediaPlayer, int32_t i);

};

            
    private: MediaPlayer::OnBufferingUpdateListener* mOnBufferingUpdateListener;

//inner= member=true isStatic=
private: class AndroidMediaPlayerOnPreparedListener: public MediaPlayerOnPreparedListener {

    private: const std::string ON_PREPARE = "onPrepare()";

    private: AndroidMediaPlayerWrapperListener* androidMediaPlayerWrapperListener;

public: AndroidMediaPlayerOnPreparedListener(AndroidMediaPlayerWrapperListener* androidMediaPlayerWrapperListener);

    public: void onPrepared(MediaPlayer* mp);

};

            
    private: MediaPlayer::OnPreparedListener* mOnPreparedListener;

//inner= member=true isStatic=
private: class AndroidMediaPlayerOnErrorListener: public MediaPlayerOnErrorListener {

    private: const std::string ON_ERROR = "onError()";

    private: AndroidMediaPlayerWrapperListener* androidMediaPlayerWrapperListener;

public: AndroidMediaPlayerOnErrorListener(AndroidMediaPlayerWrapperListener* androidMediaPlayerWrapperListener);

    public: bool onError(MediaPlayer* mp, int32_t what, int32_t extra);

};

            
    private: MediaPlayer::OnErrorListener* mOnErrorListener;

//inner= member=true isStatic=
private: class AndroidMediaPlayerOnCompletionListener: public MediaPlayerOnCompletionListener {

    private: const std::string ON_COMPLETE = "onComplete()";

    private: AndroidMediaPlayerWrapperListener* androidMediaPlayerWrapperListener;

public: AndroidMediaPlayerOnCompletionListener(AndroidMediaPlayerWrapperListener* androidMediaPlayerWrapperListener);

    public: void onCompletion(MediaPlayer* mp);

};

            
    private: MediaPlayer::OnCompletionListener* mOnCompletionListener;

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_ANDROIDMEDIAPLAYERWRAPPERLISTENER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_AUDIO_ANDROIDMEDIAPLAYERWRAPPERLISTENER_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_AUDIO_ANDROIDMEDIAPLAYERWRAPPERLISTENER_H_COMPLETE
        #if __has_include(<javax/microedition/media/PlayerListener.h>)
#include <javax/microedition/media/PlayerListener.h>
#endif
#if __has_include(<android/media/MediaPlayer.h>)
#include <android/media/MediaPlayer.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/media/audio/AndroidMediaPlayerWrapper.h")
#include "org/allbinary/media/audio/AndroidMediaPlayerWrapper.h"
#endif
#if __has_include("org/allbinary/media/audio/OnBufferingUpdateListener.h")
#include "org/allbinary/media/audio/OnBufferingUpdateListener.h"
#endif
#if __has_include("org/allbinary/media/audio/OnPreparedListener.h")
#include "org/allbinary/media/audio/OnPreparedListener.h"
#endif
#if __has_include("org/allbinary/media/audio/OnErrorListener.h")
#include "org/allbinary/media/audio/OnErrorListener.h"
#endif
#if __has_include("org/allbinary/media/audio/OnCompletionListener.h")
#include "org/allbinary/media/audio/OnCompletionListener.h"
#endif

        #endif
    
