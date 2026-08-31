
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_ANDROIDMEDIAPLAYERWRAPPERLISTENER_H
        #define ORG_ALLBINARY_MEDIA_AUDIO_ANDROIDMEDIAPLAYERWRAPPERLISTENER_H

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

public constructor (AndroidMediaPlayerWrapper androidMediaPlayerWrapper);

//inner= member=true isStatic=
class MediaPlayerOnBufferingUpdateListener
            : public Object
        : public MediaPlayer.OnBufferingUpdateListener {
        

    public onBufferingUpdate(MediaPlayer mediaPlayer, int32_t i);

};

            
//inner= member=true isStatic=
class MediaPlayerOnPreparedListener
            : public Object
        : public MediaPlayer.OnPreparedListener {
        

    public onPrepared(MediaPlayer mp);

};

            
//inner= member=true isStatic=
class MediaPlayerOnErrorListener
            : public Object
        : public MediaPlayer.OnErrorListener {
        

    public bool onError(MediaPlayer mp, int32_t what, int32_t extra);

};

            
//inner= member=true isStatic=
class MediaPlayerOnCompletionListener
            : public Object
        : public MediaPlayer.OnCompletionListener {
        

    public onCompletion(MediaPlayer mp);

};

            
//inner= member=true isStatic=
class AndroidMediaPlayerOnBufferingUpdateListener: public MediaPlayerOnBufferingUpdateListener {
        

    private: const ON_BUFFERING_UPDATE: string = "onBufferingUpdate()";

    private: const androidMediaPlayerWrapperListener: AndroidMediaPlayerWrapperListener;

public constructor (AndroidMediaPlayerWrapperListener androidMediaPlayerWrapperListener);

    public onBufferingUpdate(MediaPlayer mediaPlayer, int32_t i);

};

            
    private: mOnBufferingUpdateListener: MediaPlayer.OnBufferingUpdateListener = new this.AndroidMediaPlayerOnBufferingUpdateListener(this);

//inner= member=true isStatic=
class AndroidMediaPlayerOnPreparedListener: public MediaPlayerOnPreparedListener {
        

    private: const ON_PREPARE: string = "onPrepare()";

    private: const androidMediaPlayerWrapperListener: AndroidMediaPlayerWrapperListener;

public constructor (AndroidMediaPlayerWrapperListener androidMediaPlayerWrapperListener);

    public onPrepared(MediaPlayer mp);

};

            
    private: mOnPreparedListener: MediaPlayer.OnPreparedListener = new this.AndroidMediaPlayerOnPreparedListener(this);

//inner= member=true isStatic=
class AndroidMediaPlayerOnErrorListener: public MediaPlayerOnErrorListener {
        

    private: const ON_ERROR: string = "onError()";

    private: const androidMediaPlayerWrapperListener: AndroidMediaPlayerWrapperListener;

public constructor (AndroidMediaPlayerWrapperListener androidMediaPlayerWrapperListener);

    public bool onError(MediaPlayer mp, int32_t what, int32_t extra);

};

            
    private: mOnErrorListener: MediaPlayer.OnErrorListener = new this.AndroidMediaPlayerOnErrorListener(this);

//inner= member=true isStatic=
class AndroidMediaPlayerOnCompletionListener: public MediaPlayerOnCompletionListener {
        

    private: const ON_COMPLETE: string = "onComplete()";

    private: const androidMediaPlayerWrapperListener: AndroidMediaPlayerWrapperListener;

public constructor (AndroidMediaPlayerWrapperListener androidMediaPlayerWrapperListener);

    public onCompletion(MediaPlayer mp);

};

            
    private: mOnCompletionListener: MediaPlayer.OnCompletionListener = new this.AndroidMediaPlayerOnCompletionListener(this);

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_ANDROIDMEDIAPLAYERWRAPPERLISTENER_H
