
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_MUSIC_MUSICMANAGER_CPP
        #define ORG_ALLBINARY_MEDIA_AUDIO_MUSIC_MUSICMANAGER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/audio/music/MusicManager.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
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
        #include "org/allbinary/media/audio/music/MusicStrings.h"


MusicManager::MusicManager(Class* musicServiceClass, BasicArrayList* songList) : commonStrings(CommonStrings::getInstance()), musicStrings(MusicStrings::getInstance()), commonStateStrings(CommonStateStrings::getInstance()), basicArrayListUtil(BasicArrayListUtil::getInstance()), resourceUtil(ResourceUtil::getInstance()), androidServicesUtil(AndroidServicesUtil::getInstance()), gameTickTimeDelayHelper(GameTickTimeDelayHelperFactory::getInstance()), timeDelayHelper(new TimeDelayHelper(0)), timeDelayHelper2(new TimeDelayHelper(1200)), currentSongSound(NoSound::getInstance()), nextSongSound(NoSound::getInstance()){
PreLogUtil::put(this->commonStateStrings->CONTEXT +this->resourceUtil->getContext(), this, this->commonStrings->CONSTRUCTOR);
    
this->musicServiceClass= musicServiceClass;
    
this->currentIntent= new Intent(this->resourceUtil->getContext(), musicServiceClass);
    
this->songList= songList;
    
}


    auto MusicManager::nextSong(Sound* nextSongSound, int32_t leftVolume, int32_t rightVolume) -> void{

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


    auto MusicManager::reset() -> void{
this->timeDelayHelper->delay= 0;
    
}


    auto MusicManager::process() -> void{

                        if(this->songList->size() == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

                        if(this->timeDelayHelper->isTime(this->gameTickTimeDelayHelper->startTime))
                        
                                    {
                                    this->startNewSong();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

                        if(this->timeDelayHelper2->isTime(this->gameTickTimeDelayHelper->startTime))
                        
                                    {
                                    
                        if(this->androidServicesUtil->isServiceRunning(this->musicServiceClass->getName()))
                        
                                    {
                                    
                                    }
                                
                        else {
                            this->startNewSong();
    

                        }
                            

                                    }
                                
}


    auto MusicManager::show() -> void{




                        for (
    int32_t index = this->songList->size();--index >= 0; )
        {

    Sound* sound = dynamic_cast<Sound*>(this->songList->get(index));;
    

    int64_t duration = sound->getDuration();;
    
PreLogUtil::put((new StringMaker())->append(this->PLAY)->append(sound->getResource())->append(this->FOR)->appendlong(duration)->toString(), this, this->commonStrings->PROCESS);
    
}

}


    auto MusicManager::startNewSong() -> void{

        try {
            this->resourceUtil->getContext()->stopService(this->currentIntent);
    

                        if(this->nextSongSound == NoSound::getInstance())
                        
                                    {
                                    this->currentSongSound= dynamic_cast<Sound*>(this->basicArrayListUtil->getRandom(this->songList));
    

                                    }
                                
                        else {
                            this->currentSongSound= this->nextSongSound;
    
this->nextSongSound= NoSound::getInstance();
    

                        }
                            

    int64_t duration = this->currentSongSound->getDuration();;
    
PreLogUtil::put((new StringMaker())->append(this->PLAY)->append(this->currentSongSound->getResource())->append(this->FOR)->appendlong(duration)->toString(), this, this->commonStrings->PROCESS);
    
this->timeDelayHelper->delay= static_cast<int32_t>(duration);
    
this->currentIntent->putExtra(this->musicStrings->SONG_EXTRA, JavaBoxes::value<int32_t>(this->resourceUtil->getResourceId(this->currentSongSound->getResource())));
    
this->currentIntent->putExtra(this->musicStrings->LEFT_VOLUME, this->leftVolume);
    
this->currentIntent->putExtra(this->musicStrings->RIGHT_VOLUME, this->rightVolume);
    
this->resourceUtil->getContext()->startService(this->currentIntent);
    

                //: 
} catch(Exception& e) 
            {

    std::string resource = StringUtil::getInstance()->EMPTY_STRING;;
    

                        if(this->currentSongSound != 
                                    nullptr
                                )
                        
                                    {
                                    resource= this->currentSongSound->getResource();
    

                                    }
                                
PreLogUtil::putOE(JavaString::valueOf(this->commonStrings->EXCEPTION_LABEL) +JavaString::valueOf(resource), this, this->commonStrings->PROCESS, &e);
    
}

}


                //@Throws(Exception.constructor)
            
    auto MusicManager::stop() -> void{
this->resourceUtil->getContext()->stopService(this->currentIntent);
    
}


    auto MusicManager::pause(Activity* activity, Class* musicServiceClass) -> void{

    CommonStateStrings* commonStateStrings = CommonStateStrings::getInstance();;
    

    Intent* musicPauseIntent = new Intent(dynamic_cast<Context*>(activity), musicServiceClass);;
    
musicPauseIntent->putExtra(commonStateStrings->ON_START_COMMAND, 1);
    
activity->startService(musicPauseIntent);
    
}


    auto MusicManager::resume(Activity* activity, Class* musicServiceClass) -> void{

                        if(AndroidServicesUtil::getInstance()->isServiceRunning(musicServiceClass->getName()))
                        
                                    {
                                    
    CommonStateStrings* commonStateStrings = CommonStateStrings::getInstance();;
    

    Intent* musicResumeIntent = new Intent(activity, musicServiceClass);;
    
musicResumeIntent->putExtra(commonStateStrings->ON_START_COMMAND, 2);
    
activity->startService(musicResumeIntent);
    

                                    }
                                
}




        #endif //ORG_ALLBINARY_MEDIA_AUDIO_MUSIC_MUSICMANAGER_CPP
