
        /* Generated Code Do Not Modify */
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
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

    public: static void pause(Activity activity, Class* musicServiceClass){

    CommonStateStrings commonStateStrings = CommonStateStrings::getInstance();;
    

    Intent musicPauseIntent = Intent(activity, musicServiceClass);;
    
musicPauseIntent.putExtra(commonStateStrings.ON_START_COMMAND, 1);
    
activity.startService(musicPauseIntent);
    
}


    public: static void resume(Activity activity, Class* musicServiceClass){

                        if(AndroidServicesUtil::getInstance().isServiceRunning(musicServiceClass.toString()))
                        
                                    {
                                    
    CommonStateStrings commonStateStrings = CommonStateStrings::getInstance();;
    

    Intent musicResumeIntent = Intent(activity, musicServiceClass);;
    
musicResumeIntent.putExtra(commonStateStrings.ON_START_COMMAND, 2);
    
activity.startService(musicResumeIntent);
    

                                    }
                                
}


    private: const std::string PLAY = "Play ";

    private: const std::string FOR = " for: ";

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const MusicStrings musicStrings = MusicStrings::getInstance();

    private: const CommonStateStrings commonStateStrings = CommonStateStrings::getInstance();

    private: const BasicArrayListUtil basicArrayListUtil = BasicArrayListUtil::getInstance();

    private: const ResourceUtil resourceUtil = ResourceUtil::getInstance();

    private: const AndroidServicesUtil androidServicesUtil = AndroidServicesUtil::getInstance();

    private: const GameTickTimeDelayHelper gameTickTimeDelayHelper = GameTickTimeDelayHelperFactory::getInstance();

    private: const TimeDelayHelper timeDelayHelper = TimeDelayHelper(0);

    private: const TimeDelayHelper timeDelayHelper2 = TimeDelayHelper(1200);

    private: BasicArrayList songList;

    private: Sound currentSongSound = NoSound::getInstance();

    private: Sound nextSongSound = NoSound::getInstance();

    private: int32_t leftVolume = 100;

    private: int32_t rightVolume = 100;

    private: Class* musicServiceClass;

    private: Intent currentIntent;

public: MusicManager(Class* musicServiceClass, BasicArrayList songList){
PreLogUtil::put(this->commonStateStrings.CONTEXT +this->resourceUtil.getContext(), this, this->commonStrings.CONSTRUCTOR);
    
this->musicServiceClass= musicServiceClass;
    
this->currentIntent= Intent(this->resourceUtil.getContext(), musicServiceClass);
    
this->songList= songList;
    
}


    public: void nextSong(Sound nextSongSound, int32_t leftVolume, int32_t rightVolume){

                        if(nextSongSound == 
                                    nullptr
                                )
                        
                                    {
                                    nextSongSound= NoSound::getInstance();
    

                                    }
                                
this->nextSongSound= nextSongSound;
    
this->leftVolume= leftVolume;
    
this->rightVolume= rightVolume;
    
this->reset();
    
}


    public: void reset(){
this->timeDelayHelper.delay= 0;
    
}


    public: void process(){

                        if(this->songList.size() == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

                        if(this->timeDelayHelper.isTime(this->gameTickTimeDelayHelper.startTime))
                        
                                    {
                                    this->startNewSong();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

                        if(this->timeDelayHelper2.isTime(this->gameTickTimeDelayHelper.startTime))
                        
                                    {
                                    
                        if(this->androidServicesUtil.isServiceRunning(this->musicServiceClass.toString()))
                        
                                    {
                                    
                                    }
                                
                        else {
                            this->startNewSong();
    

                        }
                            

                                    }
                                
}


    public: void show(){




                        for (
    int32_t index = this->songList.size();--index >= 0; )
        {

    Sound sound = this->songList.get(index);;
    

    int64_t duration = sound.getDuration();;
    
PreLogUtil::put(StringMaker().append(this->PLAY).append(sound.getResource()).append(this->FOR).appendlong(duration).toString(), this, this->commonStrings.PROCESS);
    
}

}


    public: void startNewSong(){

        try {
            this->resourceUtil.getContext().stopService(this->currentIntent);
    

                        if(this->nextSongSound == NoSound::getInstance())
                        
                                    {
                                    this->currentSongSound= this->basicArrayListUtil.getRandom(this->songList);
    

                                    }
                                
                        else {
                            this->currentSongSound= this->nextSongSound;
    
this->nextSongSound= NoSound::getInstance();
    

                        }
                            

    int64_t duration = this->currentSongSound.getDuration();;
    
PreLogUtil::put(StringMaker().append(this->PLAY).append(this->currentSongSound.getResource()).append(this->FOR).appendlong(duration).toString(), this, this->commonStrings.PROCESS);
    
this->timeDelayHelper.delay= static_cast<int32_t>(duration);
    
this->currentIntent.putExtra(this->musicStrings.SONG_EXTRA, this->resourceUtil.getResourceId(this->currentSongSound.getResource()).intValue());
    
this->currentIntent.putExtra(this->musicStrings.LEFT_VOLUME, this->leftVolume);
    
this->currentIntent.putExtra(this->musicStrings.RIGHT_VOLUME, this->rightVolume);
    
this->resourceUtil.getContext().startService(this->currentIntent);
    

                //: 
} catch(e) 
            {

    std::string resource = StringUtil::getInstance().EMPTY_STRING;;
    

                        if(this->currentSongSound != 
                                    nullptr
                                )
                        
                                    {
                                    resource= this->currentSongSound.getResource();
    

                                    }
                                
PreLogUtil::putOE(this->commonStrings.EXCEPTION_LABEL +resource, this, this->commonStrings.PROCESS, e);
    
}

}


                //@Throws(Exception.constructor)
            
    public: void stop(){
this->resourceUtil.getContext().stopService(this->currentIntent);
    
}


};

            

