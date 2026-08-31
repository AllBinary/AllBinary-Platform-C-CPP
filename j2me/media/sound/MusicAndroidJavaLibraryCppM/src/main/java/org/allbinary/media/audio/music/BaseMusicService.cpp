
        /* Generated Code Do Not Modify */
        



            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/RuntimeException.h"
        
            #include "../../../../../java/lang/System.h"
        
            #include "../../../../../java/lang/Thread.h"
        
            #include "../../../../../java/lang/Runnable.h"
        
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
        #include "MusicStrings.h"

class BaseMusicService: public Service {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const commonStateStrings: CommonStateStrings = CommonStateStrings.getInstance()!;

    private: const ALREADY_PLAYING: string = "This is one song per music service";

    private: const WAITING_FOR_MUSIC_TO_END: string = "Waiting for music to end";

    private: player: MediaPlayer = NullAndroidCanvas.NULL_MEDIA_PLAYER;

    private: songId: int32_t =  -1;

    private: leftVolume: int32_t =  -1;

    private: rightVolume: int32_t =  -1;

    public IBinder onBind(Intent intent){
this.logUtil!.putF(this.commonStrings!.START, this, this.commonStateStrings!.BIND);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public onCreate(){
this.logUtil!.putF(this.commonStrings!.START, this, this.commonStateStrings!.CREATE);
    
}


    public onDestroy(){
this.logUtil!.putF(this.commonStrings!.START, this, this.commonStateStrings!.DESTROY);
    

                        if(this.player != NullAndroidCanvas.NULL_MEDIA_PLAYER)
                        
                                    {
                                    this.logUtil!.putF(this.commonStrings!.START, this, this.commonStateStrings!.PAUSE);
    
this.player.stop();
    
this.player.reset();
    
this.player.release();
    

                                    }
                                
}


    public pause(){

                        if(this.player != NullAndroidCanvas.NULL_MEDIA_PLAYER)
                        
                                    {
                                    this.logUtil!.putF(this.commonStrings!.START, this, this.commonStateStrings!.PAUSE);
    
this.player.pause();
    

                                    }
                                
}


    public resume(){

                        if(this.player != NullAndroidCanvas.NULL_MEDIA_PLAYER && !this.player.isPlaying())
                        
                                    {
                                    this.logUtil!.putF(this.commonStrings!.START, this, this.commonStateStrings!.RESUME);
    
this.player.start();
    

                                    }
                                
}


    public start(){
this.player= MediaPlayer.create(this, this.songId);
    
this.player.setVolume((this.leftVolume) /100.0, (this.rightVolume) /100.0);
    
this.player.setLooping(false);
    
this.player.start();
    
}


    public onStart(Intent intent, int32_t startid){
this.onStartCommandIntent(intent);
    
this.logUtil!.putF(this.commonStrings!.START, this, this.commonStateStrings!.START);
    
}


    public int32_t onStartCommand(Intent intent, int32_t flags, int32_t startId){
this.onStartCommandIntent(intent);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Service.START_STICKY;
    
}


    public onStartCommandIntent(Intent intent){
this.logUtil!.putF(this.commonStrings!.START, this, this.commonStateStrings!.ON_START_COMMAND);
    

    musicStrings: MusicStrings = MusicStrings.getInstance()!;;
    

                        if(intent != 
                                    null
                                )
                        
                                    {
                                    
    command: int32_t = intent.getIntExtra(this.commonStateStrings!.ON_START_COMMAND,  -1)!;;
    
this.logUtil!.putF(CommonLabels.getInstance()!.COMMAND_LABEL +command, this, this.commonStateStrings!.ON_START_COMMAND);
    

                        if(command == 1)
                        
                                    {
                                    this.pause();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                
                             else 
                        if(command == 2)
                        
                                    {
                                    this.resume();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                
                        else {
                            this.songId= intent.getIntExtra(musicStrings!.SONG_EXTRA,  -1);
    
this.leftVolume= intent.getIntExtra(musicStrings!.LEFT_VOLUME,  -1);
    
this.rightVolume= intent.getIntExtra(musicStrings!.RIGHT_VOLUME,  -1);
    

                        }
                            

                                    }
                                
                        else {
                            


                            throw new RuntimeException("Started service without intent");
                    

                        }
                            

                        if(this.songId !=  -1)
                        
                                    {
                                    System.gc();
    

                        if(this.player != NullAndroidCanvas.NULL_MEDIA_PLAYER && this.player.isPlaying())
                        
                                    {
                                    
    player: MediaPlayer = this.player;;
    
this.logUtil!.putF(this.ALREADY_PLAYING, this, this.commonStateStrings!.ON_START_COMMAND);
    

//inner=true member= isStatic=
class MusicRunnable: public ARunnable {
        

    private: const baseMusicService: BaseMusicService;

 constructor (BaseMusicService baseMusicService){

            super();
        this.baseMusicService= baseMusicService;
    
}


    public run(){

    logUtil: LogUtil = LogUtil.getInstance()!;;
    

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    

    commonStateStrings: CommonStateStrings = CommonStateStrings.getInstance()!;;
    

        try {
            
        while(player.isPlaying())
        {
logUtil!.putF(this.baseMusicService!.WAITING_FOR_MUSIC_TO_END, this, commonStateStrings!.ON_START_COMMAND);
    
Thread.sleep(1200);
    
}

this.baseMusicService!.onStartCommandIntent(intent);
    

                //: 
} catch(e) 
            {
logUtil!.put(commonStrings!.EXCEPTION, this, commonStateStrings!.ON_START_COMMAND, e);
    
}

}


};

            

                    //Otherwise - statement - EmptyStmt


    runnable: Runnable = new MusicRunnable(this);;
    

    thread: Thread = new Thread(runnable);;
    
thread.start();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                
this.start();
    

                                    }
                                
}


};

            

