
        /* Generated Code Do Not Modify */
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Class.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <android/app/Activity.h>

      
#include <android/content/Context.h>

      
#include <android/content/Intent.h>

      
#include <org/allbinary/android/AndroidServicesUtil.h>

      
#include <org/allbinary/data/resource/ResourceUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/media/audio/NoSound.h>

      
#include <org/allbinary/media/audio/Sound.h>

      
#include <org/allbinary/string/CommonStateStrings.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelper.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MusicStrings.h"

class MusicManager
            : public Object
         {
        

    public static pause(Activity activity, Function musicServiceClass){

    commonStateStrings: CommonStateStrings = CommonStateStrings.getInstance()!;;
    

    musicPauseIntent: Intent = new Intent(activity as Context, musicServiceClass);;
    
musicPauseIntent!.putExtra(commonStateStrings!.ON_START_COMMAND, 1);
    
activity.startService(musicPauseIntent);
    
}


    public static resume(Activity activity, Function musicServiceClass){

                        if(AndroidServicesUtil.getInstance()!.isServiceRunning(musicServiceClass!.toString()!))
                        
                                    {
                                    
    commonStateStrings: CommonStateStrings = CommonStateStrings.getInstance()!;;
    

    musicResumeIntent: Intent = new Intent(activity, musicServiceClass);;
    
musicResumeIntent!.putExtra(commonStateStrings!.ON_START_COMMAND, 2);
    
activity.startService(musicResumeIntent);
    

                                    }
                                
}


    private: const PLAY: string = "Play ";

    private: const FOR: string = " for: ";

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const musicStrings: MusicStrings = MusicStrings.getInstance()!;

    private: const commonStateStrings: CommonStateStrings = CommonStateStrings.getInstance()!;

    private: const basicArrayListUtil: BasicArrayListUtil = BasicArrayListUtil.getInstance()!;

    private: const resourceUtil: ResourceUtil = ResourceUtil.getInstance()!;

    private: const androidServicesUtil: AndroidServicesUtil = AndroidServicesUtil.getInstance()!;

    private: const gameTickTimeDelayHelper: GameTickTimeDelayHelper = GameTickTimeDelayHelperFactory.getInstance()!;

    private: const timeDelayHelper: TimeDelayHelper = new TimeDelayHelper(0);

    private: const timeDelayHelper2: TimeDelayHelper = new TimeDelayHelper(1200);

    private: const songList: BasicArrayList;

    private: currentSongSound: Sound = NoSound.getInstance()!;

    private: nextSongSound: Sound = NoSound.getInstance()!;

    private: leftVolume: int32_t = 100;

    private: rightVolume: int32_t = 100;

    private: const musicServiceClass: Function;

    private: const currentIntent: Intent;

public constructor (Function musicServiceClass, BasicArrayList songList){

            super();
        PreLogUtil.put(this.commonStateStrings!.CONTEXT +this.resourceUtil!.getContext(), this, this.commonStrings!.CONSTRUCTOR);
    
this.musicServiceClass= musicServiceClass;
    
this.currentIntent= new Intent(this.resourceUtil!.getContext(), musicServiceClass);
    
this.songList= songList;
    
}


    public nextSong(Sound nextSongSound, int32_t leftVolume, int32_t rightVolume){

                        if(nextSongSound == 
                                    null
                                )
                        
                                    {
                                    nextSongSound= NoSound.getInstance();
    

                                    }
                                
this.nextSongSound= nextSongSound;
    
this.leftVolume= leftVolume;
    
this.rightVolume= rightVolume;
    
this.reset();
    
}


    public reset(){
this.timeDelayHelper!.delay= 0;
    
}


    public process(){

                        if(this.songList!.size() == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

                        if(this.timeDelayHelper!.isTime(this.gameTickTimeDelayHelper!.startTime))
                        
                                    {
                                    this.startNewSong();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

                        if(this.timeDelayHelper2!.isTime(this.gameTickTimeDelayHelper!.startTime))
                        
                                    {
                                    
                        if(this.androidServicesUtil!.isServiceRunning(this.musicServiceClass!.toString()!))
                        
                                    {
                                    
                                    }
                                
                        else {
                            this.startNewSong();
    

                        }
                            

                                    }
                                
}


    public show(){




                        for (
    index: int32_t = this.songList!.size()!;--index >= 0; )
        {

    sound: Sound = this.songList!.get(index) as Sound;;
    

    duration: int64_t = sound.getDuration();;
    
PreLogUtil.put(new StringMaker().append(this.PLAY)!.append(sound.getResource())!.append(this.FOR)!.appendlong(duration)!.toString(), this, this.commonStrings!.PROCESS);
    
}

}


    public startNewSong(){

        try {
            this.resourceUtil!.getContext()!.stopService(this.currentIntent);
    

                        if(this.nextSongSound == NoSound.getInstance())
                        
                                    {
                                    this.currentSongSound= this.basicArrayListUtil!.getRandom(this.songList) as Sound;
    

                                    }
                                
                        else {
                            this.currentSongSound= this.nextSongSound;
    
this.nextSongSound= NoSound.getInstance();
    

                        }
                            

    duration: int64_t = this.currentSongSound!.getDuration();;
    
PreLogUtil.put(new StringMaker().append(this.PLAY)!.append(this.currentSongSound!.getResource())!.append(this.FOR)!.appendlong(duration)!.toString(), this, this.commonStrings!.PROCESS);
    
this.timeDelayHelper!.delay= static_cast<int32_t>(duration);
    
this.currentIntent!.putExtra(this.musicStrings!.SONG_EXTRA, this.resourceUtil!.getResourceId(this.currentSongSound!.getResource())!.intValue());
    
this.currentIntent!.putExtra(this.musicStrings!.LEFT_VOLUME, this.leftVolume);
    
this.currentIntent!.putExtra(this.musicStrings!.RIGHT_VOLUME, this.rightVolume);
    
this.resourceUtil!.getContext()!.startService(this.currentIntent);
    

                //: 
} catch(e) 
            {

    resource: string = StringUtil.getInstance()!.EMPTY_STRING;;
    

                        if(this.currentSongSound != 
                                    null
                                )
                        
                                    {
                                    resource= this.currentSongSound!.getResource();
    

                                    }
                                
PreLogUtil.putOE(this.commonStrings!.EXCEPTION_LABEL +resource, this, this.commonStrings!.PROCESS, e);
    
}

}


                //@Throws(Exception.constructor)
            
    public stop(){
this.resourceUtil!.getContext()!.stopService(this.currentIntent);
    
}


};

            

