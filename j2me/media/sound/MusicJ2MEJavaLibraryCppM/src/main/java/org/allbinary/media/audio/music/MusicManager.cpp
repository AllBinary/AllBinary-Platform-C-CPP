
        /* Generated Code Do Not Modify */
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Class.h"
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Thread.h"
        
#include <org/allbinary/thread/ARunnable.h>

      
#include <javax/microedition/media/Player.h>

      
#include <javax/microedition/media/PlayerListener.h>

      
#include <org/allbinary/AvianUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/media/audio/NoSound.h>

      
#include <org/allbinary/media/audio/PlayerStateUtil.h>

      
#include <org/allbinary/media/audio/Sound.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelper.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MusicManager
            : public Object
         {
        

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const commonSeps: CommonSeps = CommonSeps.getInstance()!;

    private: const basicArrayListUtil: BasicArrayListUtil = BasicArrayListUtil.getInstance()!;

    private: const gameTickTimeDelayHelper: GameTickTimeDelayHelper = GameTickTimeDelayHelperFactory.getInstance()!;

    private: const playerStateUtil: PlayerStateUtil = PlayerStateUtil.getInstance()!;

    private: const timeDelayHelper: TimeDelayHelper = new TimeDelayHelper(0);

    private: const playerListener: PlayerListener = new class extends PlayerListener
                                {
                                
    public playerUpdate(Player player, string event, any = {} eventData){
PreLogUtil.put(event, this, commonStrings!.PROCESS);
    

                        if(event == PlayerListener.END_OF_MEDIA || event == PlayerListener.STOPPED || event == PlayerListener.CLOSED)
                        
                                    {
                                    reset();
    

                                    }
                                
}

                                }
                            ;

    private: const PLAY: string = "Play ";

    private: const SONG: string = " for: ";

    private: const NEXT_SONG: string = "Next Song: ";

    private: const STOPPING: string = "Stopping Current Song: ";

    private: const ENDING: string = "Ending Current Song: ";

    private: const WAITING_FOR_MEDIA_TO_END: string = "Waiting for media to end";

    private: const ALREADY_PLAYING: string = "Already Playing: ";

    private: const ALREADY_ENDED: string = "Last Song already ended: ";

    private: const songList: BasicArrayList;

    private: currentSongSound: Sound = NoSound.getInstance()!;

    private: nextSongSound: Sound = NoSound.getInstance()!;

    private: reset: bool= false;

    private: noDuration: bool= false;

    private: stopped: bool = true;

public constructor (Function musicServiceClass, BasicArrayList songList){

            super();
        this.songList= songList;
    
}


    public startNewSong(){

                        if(this.nextSongSound == NoSound.getInstance())
                        
                                    {
                                    
    randomSongSound: Sound = this.basicArrayListUtil!.getRandom(this.songList) as Sound;;
    
this.nextSong(randomSongSound, 0, 0);
    

                                    }
                                
this.process();
    
}


    public nextSong(Sound nextSongSound, int32_t leftVolume, int32_t rightVolume){
PreLogUtil.put(new StringMaker().append(NEXT_SONG)!.append(nextSongSound!.getResource())!.toString(), this, this.commonStrings!.PROCESS);
    
this.nextSongSound= nextSongSound;
    
this.reset();
    
this.stopped= false;
    
}


    public reset(){
this.reset= true;
    
}


    public process(){

        try {
            
                        if(this.stopped)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

                        if(this.songList!.size() == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

                        if((this.timeDelayHelper!.isTime(this.gameTickTimeDelayHelper!.startTime) && !this.noDuration) || this.reset)
                        
                                    {
                                    this.reset= false;
    
this.noDuration= false;
    

    endingCurrentSongSound: Sound = this.currentSongSound;;
    

    nextSongSound: Sound = this.nextSongSound;;
    
this.nextSongSound= NoSound.getInstance();
    

                        if(nextSongSound == NoSound.getInstance())
                        
                                    {
                                    this.currentSongSound= BasicArrayListUtil.getInstance()!.getRandom(this.songList) as Sound;
    

                                    }
                                
                        else {
                            this.currentSongSound= nextSongSound;
    

                        }
                            

    startingCurrentSongSound: Sound = this.currentSongSound;;
    

    duration: int64_t = this.currentSongSound!.getDuration()!;;
    
this.timeDelayHelper!.delay= static_cast<int32_t>(duration);
    

                        if(duration <= 0)
                        
                                    {
                                    
    NO_DURATION_FOR: string = "No Duration for: ";;
    
PreLogUtil.put(new StringMaker().append(NO_DURATION_FOR)!.append(this.currentSongSound!.getResource())!.toString(), this, this.commonStrings!.PROCESS);
    
this.currentSongSound!.getPlayerP()!.addPlayerListener(playerListener);
    
this.noDuration= true;
    

                                    }
                                

                        if(endingCurrentSongSound != NoSound.getInstance())
                        
                                    {
                                    
                        if(endingCurrentSongSound == startingCurrentSongSound && endingCurrentSongSound!.getPlayerP()!.getState() == PlayerI.STARTED)
                        
                                    {
                                    PreLogUtil.put(new StringMaker().append(this.ALREADY_PLAYING)!.append(endingCurrentSongSound!.getResource())!.toString(), this, this.commonStrings!.PROCESS);
    
PreLogUtil.put(new StringMaker().append(this.STOPPING)!.append(endingCurrentSongSound!.getResource())!.append(this.SONG)!.appendlong(duration)!.toString(), this, this.commonStrings!.PROCESS);
    
endingCurrentSongSound!.getPlayerP()!.stop();
    
this.waitForStateChange(endingCurrentSongSound, startingCurrentSongSound);
    

                                    }
                                
                        else {
                            
                        if(endingCurrentSongSound!.getPlayerP()!.getState() == PlayerI.STARTED)
                        
                                    {
                                    PreLogUtil.put(new StringMaker().append(this.STOPPING)!.append(endingCurrentSongSound!.getResource())!.append(this.SONG)!.appendlong(duration)!.toString(), this, this.commonStrings!.PROCESS);
    
endingCurrentSongSound!.getPlayerP()!.stop();
    
this.waitForStateChange(endingCurrentSongSound, startingCurrentSongSound);
    

                                    }
                                
                        else {
                            PreLogUtil.put(new StringMaker().append(this.ALREADY_ENDED)!.append(this.PLAY)!.append(startingCurrentSongSound!.getResource())!.toString(), this, this.commonStrings!.PROCESS);
    

                        if(AvianUtil.isAvian())
                        
                                    {
                                    endingCurrentSongSound!.getPlayerP()!.stop();
    
startingCurrentSongSound!.getPlayerP()!.stop();
    

                                    }
                                
startingCurrentSongSound!.getPlayerP()!.start();
    

                        }
                            

                        }
                            

                                    }
                                
                        else {
                            PreLogUtil.put(new StringMaker().append(this.PLAY)!.append(this.currentSongSound!.getResource())!.append(this.SONG)!.appendlong(duration)!.toString(), this, this.commonStrings!.PROCESS);
    
this.currentSongSound!.getPlayerP()!.start();
    

                        }
                            

                                    }
                                

                //: 
} catch(e) 
            {

    resource: string = StringUtil.getInstance()!.EMPTY_STRING;;
    

                        if(this.currentSongSound != NoSound.getInstance())
                        
                                    {
                                    resource= this.currentSongSound!.getResource();
    

                                    }
                                
PreLogUtil.putOE(this.commonStrings!.EXCEPTION_LABEL +resource, this, this.commonStrings!.PROCESS, e);
    
}

}


                //@Throws(Exception.constructor)
            
    waitForStateChange(Sound endingCurrentSongSound, Sound startingCurrentSongSound){

        while(endingCurrentSongSound!.getPlayerP()!.getState() == PlayerI.STARTED)
        {
PreLogUtil.put(this.WAITING_FOR_MEDIA_TO_END, this, this.commonStrings!.PROCESS);
    
Thread.sleep(100);
    
}

PreLogUtil.put(new StringMaker().append(this.playerStateUtil!.convert(endingCurrentSongSound!.getPlayerP()!.getState()))!.append(this.commonSeps!.SPACE)!.append(this.PLAY)!.append(startingCurrentSongSound!.getResource())!.toString(), this, this.commonStrings!.PROCESS);
    
startingCurrentSongSound!.getPlayerP()!.start();
    
}


                //@Throws(Exception.constructor)
            
    public stop(){

        try {
            
    currentSongSound: Sound = this.currentSongSound;;
    

                        if(currentSongSound != NoSound.getInstance())
                        
                                    {
                                    this.stopped= true;
    
PreLogUtil.put(new StringMaker().append(this.ENDING)!.append(currentSongSound!.getResource())!.toString(), this, this.commonStrings!.PROCESS);
    
currentSongSound!.getPlayerP()!.stop();
    

                                    }
                                
this.timeDelayHelper!.setStartTime(0);
    
PreLogUtil.put(new StringMaker().append(this.commonStrings!.END)!.append(StringUtil.getInstance()!.toString(currentSongSound))!.toString(), this, this.commonStrings!.END);
    

                //: 
} catch(e) 
            {

    resource: string = StringUtil.getInstance()!.EMPTY_STRING;;
    

                        if(currentSongSound != NoSound.getInstance())
                        
                                    {
                                    resource= currentSongSound!.getResource();
    

                                    }
                                
PreLogUtil.putOE(this.commonStrings!.EXCEPTION_LABEL +resource, this, this.commonStrings!.END, e);
    
}

}


};

            

