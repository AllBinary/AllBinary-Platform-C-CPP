
        /* Generated Code Do Not Modify */
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
            #include "java/lang/System.h"
        
            #include "java/lang/Thread.h"
        
            #include "java/lang/Runnable.h"
        
#include <android/app/Service.h>

      
#include <android/content/Intent.h>

      
#include <android/media/MediaPlayer.h>

      
#include <android/os/IBinder.h>

      
#include <org/allbinary/android/NullAndroidCanvas.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStateStrings.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/thread/ARunnable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/audio/music/MusicStrings.h"

class BaseMusicService: public Service {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: CommonStateStrings* commonStateStrings = CommonStateStrings::getInstance();

    private: const std::string ALREADY_PLAYING = "This is one song per music service";

    private: const std::string WAITING_FOR_MUSIC_TO_END = "Waiting for music to end";

    private: MediaPlayer* player = NullAndroidCanvas::NULL_MEDIA_PLAYER;

    private: int32_t songId =  -1;

    private: int32_t leftVolume =  -1;

    private: int32_t rightVolume =  -1;

    public: IBinder* onBind(Intent* intent){
this->logUtil->putF(this->commonStrings->START, this, this->commonStateStrings->BIND);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: void onCreate(){
this->logUtil->putF(this->commonStrings->START, this, this->commonStateStrings->CREATE);
    
}


    public: void onDestroy(){
this->logUtil->putF(this->commonStrings->START, this, this->commonStateStrings->DESTROY);
    

                        if(this->player != NullAndroidCanvas::NULL_MEDIA_PLAYER)
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->START, this, this->commonStateStrings->PAUSE);
    
this->player->stop();
    
this->player->reset();
    
this->player->release();
    

                                    }
                                
}


    public: void pause(){

                        if(this->player != NullAndroidCanvas::NULL_MEDIA_PLAYER)
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->START, this, this->commonStateStrings->PAUSE);
    
this->player->pause();
    

                                    }
                                
}


    public: void resume(){

                        if(this->player != NullAndroidCanvas::NULL_MEDIA_PLAYER && !this->player->isPlaying())
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->START, this, this->commonStateStrings->RESUME);
    
this->player->start();
    

                                    }
                                
}


    public: void start(){
this->player= MediaPlayer::create(this, this->songId);
    
this->player->setVolume((this->leftVolume) /100.0, (this->rightVolume) /100.0);
    
this->player->setLooping(false);
    
this->player->start();
    
}


    public: void onStart(Intent* intent, int32_t startid){
this->onStartCommandIntent(intent);
    
this->logUtil->putF(this->commonStrings->START, this, this->commonStateStrings->START);
    
}


    public: int32_t onStartCommand(Intent* intent, int32_t flags, int32_t startId){
this->onStartCommandIntent(intent);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Service::START_STICKY;
    
}


    public: void onStartCommandIntent(Intent* intent){
this->logUtil->putF(this->commonStrings->START, this, this->commonStateStrings->ON_START_COMMAND);
    

    MusicStrings* musicStrings = MusicStrings::getInstance();;
    

                        if(intent != 
                                    nullptr
                                )
                        
                                    {
                                    
    int32_t command = intent->getIntExtra(this->commonStateStrings->ON_START_COMMAND,  -1);;
    
this->logUtil->putF(CommonLabels::getInstance()->COMMAND_LABEL +command, this, this->commonStateStrings->ON_START_COMMAND);
    

                        if(command == 1)
                        
                                    {
                                    this->pause();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                
                             else 
                        if(command == 2)
                        
                                    {
                                    this->resume();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                
                        else {
                            this->songId= intent->getIntExtra(musicStrings->SONG_EXTRA,  -1);
    
this->leftVolume= intent->getIntExtra(musicStrings->LEFT_VOLUME,  -1);
    
this->rightVolume= intent->getIntExtra(musicStrings->RIGHT_VOLUME,  -1);
    

                        }
                            

                                    }
                                
                        else {
                            


                            throw new RuntimeException("Started service without intent");
                    

                        }
                            

                        if(this->songId !=  -1)
                        
                                    {
                                    System.gc();
    

                        if(this->player != NullAndroidCanvas::NULL_MEDIA_PLAYER && this->player->isPlaying())
                        
                                    {
                                    
    MediaPlayer* player = this->player;;
    
this->logUtil->putF(this->ALREADY_PLAYING, this, this->commonStateStrings->ON_START_COMMAND);
    

//inner=true member= isStatic=
class MusicRunnable: public ARunnable {

    private: BaseMusicService* baseMusicService;

: MusicRunnable(BaseMusicService* baseMusicService){
this->baseMusicService= baseMusicService;
    
}


    public: void run(){

    LogUtil* logUtil = LogUtil::getInstance();;
    

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

    CommonStateStrings* commonStateStrings = CommonStateStrings::getInstance();;
    

        try {
            
        while(player->isPlaying())
        {
logUtil->putF(this->baseMusicService->WAITING_FOR_MUSIC_TO_END, this, commonStateStrings->ON_START_COMMAND);
    
Thread::sleep(1200);
    
}

this->baseMusicService->onStartCommandIntent(intent);
    

                //: 
} catch(Exception& e) 
            {
logUtil->put(commonStrings->EXCEPTION, this, commonStateStrings->ON_START_COMMAND, &e);
    
}

}


};

            

                    //Otherwise - statement - EmptyStmt


    Runnable* runnable = new MusicRunnable(this);;
    

    Thread* thread = new Thread(runnable);;
    
thread->start();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                
this->start();
    

                                    }
                                
}


};

            

