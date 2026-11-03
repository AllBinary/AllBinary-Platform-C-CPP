
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_ANDROIDMEDIAPLAYERWRAPPERLISTENER_CPP
        #define ORG_ALLBINARY_MEDIA_AUDIO_ANDROIDMEDIAPLAYERWRAPPERLISTENER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/audio/AndroidMediaPlayerWrapperListener.h"
        

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


AndroidMediaPlayerWrapperListener::AndroidMediaPlayerWrapperListener(AndroidMediaPlayerWrapper* androidMediaPlayerWrapper) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), androidMediaPlayerWrapper(AndroidMediaPlayerWrapper::NULL_ANDROID_MEDIA_PLAYER_WRAPPER), mOnBufferingUpdateListener(javaInner(new AndroidMediaPlayerOnBufferingUpdateListener(this), this)), mOnPreparedListener(javaInner(new AndroidMediaPlayerOnPreparedListener(this), this)), mOnErrorListener(javaInner(new AndroidMediaPlayerOnErrorListener(this), this)), mOnCompletionListener(javaInner(new AndroidMediaPlayerOnCompletionListener(this), this)){

        try {
            this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
    
this->androidMediaPlayerWrapper= androidMediaPlayerWrapper;
    

    MediaPlayer* mediaPlayer = androidMediaPlayerWrapper->getMediaPlayer();;
    
mediaPlayer->setOnCompletionListener(this->mOnCompletionListener);
    
mediaPlayer->setOnBufferingUpdateListener(this->mOnBufferingUpdateListener);
    
mediaPlayer->setOnPreparedListener(this->mOnPreparedListener);
    
mediaPlayer->setOnErrorListener(this->mOnErrorListener);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->CONSTRUCTOR, &e);
    
}

}


AndroidMediaPlayerWrapperListener::MediaPlayerOnBufferingUpdateListener::MediaPlayerOnBufferingUpdateListener() {
        }
        
    auto AndroidMediaPlayerWrapperListener::MediaPlayerOnBufferingUpdateListener::onBufferingUpdate(MediaPlayer* mediaPlayer, int32_t i) -> void{
}


AndroidMediaPlayerWrapperListener::MediaPlayerOnPreparedListener::MediaPlayerOnPreparedListener() {
        }
        
    auto AndroidMediaPlayerWrapperListener::MediaPlayerOnPreparedListener::onPrepared(MediaPlayer* mp) -> void{
}


AndroidMediaPlayerWrapperListener::MediaPlayerOnErrorListener::MediaPlayerOnErrorListener() {
        }
        
    auto AndroidMediaPlayerWrapperListener::MediaPlayerOnErrorListener::onError(MediaPlayer* mp, int32_t what, int32_t extra) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


AndroidMediaPlayerWrapperListener::MediaPlayerOnCompletionListener::MediaPlayerOnCompletionListener() {
        }
        
    auto AndroidMediaPlayerWrapperListener::MediaPlayerOnCompletionListener::onCompletion(MediaPlayer* mp) -> void{
}


AndroidMediaPlayerWrapperListener::AndroidMediaPlayerOnBufferingUpdateListener::AndroidMediaPlayerOnBufferingUpdateListener(AndroidMediaPlayerWrapperListener* androidMediaPlayerWrapperListener){
this->androidMediaPlayerWrapperListener= androidMediaPlayerWrapperListener;
    
}


    auto AndroidMediaPlayerWrapperListener::AndroidMediaPlayerOnBufferingUpdateListener::onBufferingUpdate(MediaPlayer* mediaPlayer, int32_t i) -> void{

    LogUtil* logUtil = LogUtil::getInstance();;
    
logUtil->putF((new StringMaker())->append("Update buffer: ")->appendint(i)->append("%")->toString(), this, this->ON_BUFFERING_UPDATE);
    
this->androidMediaPlayerWrapperListener->androidMediaPlayerWrapper->update(PlayerListener::DEVICE_UNAVAILABLE);
    
}


AndroidMediaPlayerWrapperListener::AndroidMediaPlayerOnPreparedListener::AndroidMediaPlayerOnPreparedListener(AndroidMediaPlayerWrapperListener* androidMediaPlayerWrapperListener){
this->androidMediaPlayerWrapperListener= androidMediaPlayerWrapperListener;
    
}


    auto AndroidMediaPlayerWrapperListener::AndroidMediaPlayerOnPreparedListener::onPrepared(MediaPlayer* mp) -> void{

    LogUtil* logUtil = LogUtil::getInstance();;
    

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
logUtil->putF(commonStrings->START, this, this->ON_PREPARE);
    
this->androidMediaPlayerWrapperListener->androidMediaPlayerWrapper->update(PlayerListener::DEVICE_AVAILABLE);
    
}


AndroidMediaPlayerWrapperListener::AndroidMediaPlayerOnErrorListener::AndroidMediaPlayerOnErrorListener(AndroidMediaPlayerWrapperListener* androidMediaPlayerWrapperListener){
this->androidMediaPlayerWrapperListener= androidMediaPlayerWrapperListener;
    
}


    auto AndroidMediaPlayerWrapperListener::AndroidMediaPlayerOnErrorListener::onError(MediaPlayer* mp, int32_t what, int32_t extra) -> bool{

    LogUtil* logUtil = LogUtil::getInstance();;
    
logUtil->putF((new StringMaker())->append(CommonLabels::getInstance()->START_LABEL)->append("What: ")->appendint(what)->append(" Extra: ")->appendint(extra)->toString(), this, this->ON_ERROR);
    
this->androidMediaPlayerWrapperListener->androidMediaPlayerWrapper->update(PlayerListener::ERROR);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    
}


AndroidMediaPlayerWrapperListener::AndroidMediaPlayerOnCompletionListener::AndroidMediaPlayerOnCompletionListener(AndroidMediaPlayerWrapperListener* androidMediaPlayerWrapperListener){
this->androidMediaPlayerWrapperListener= androidMediaPlayerWrapperListener;
    
}


    auto AndroidMediaPlayerWrapperListener::AndroidMediaPlayerOnCompletionListener::onCompletion(MediaPlayer* mp) -> void{

    LogUtil* logUtil = LogUtil::getInstance();;
    

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
logUtil->putF(commonStrings->START, this, this->ON_COMPLETE);
    
this->androidMediaPlayerWrapperListener->androidMediaPlayerWrapper->update(PlayerListener::END_OF_MEDIA);
    
}




        #endif //ORG_ALLBINARY_MEDIA_AUDIO_ANDROIDMEDIAPLAYERWRAPPERLISTENER_CPP
