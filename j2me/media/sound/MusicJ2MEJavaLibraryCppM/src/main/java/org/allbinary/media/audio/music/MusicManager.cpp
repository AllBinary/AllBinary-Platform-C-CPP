
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
        
            #include "java/lang/Thread.h"
        
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

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelper.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //#include "org/allbinary/media/audio/music/MusicManagerPlayerListener.h"


MusicManager::MusicManagerPlayerListener::MusicManagerPlayerListener(MusicManager* musicManager){
this->musicManager= musicManager;
    
}


    auto MusicManager::MusicManagerPlayerListener::playerUpdate(Player* player, std::string event, Object* eventData) -> void{
PreLogUtil::put(event, this, this->musicManager->commonStrings->PROCESS);
    

                        if(event == PlayerListener::END_OF_MEDIA || event == PlayerListener::STOPPED || event == PlayerListener::CLOSED)
                        
                                    {
                                    this->musicManager->reset();
    

                                    }
                                
}


MusicManager::MusicManager(Class* musicServiceClass, BasicArrayList* songList) : commonStrings(CommonStrings::getInstance()), commonSeps(CommonSeps::getInstance()), basicArrayListUtil(BasicArrayListUtil::getInstance()), gameTickTimeDelayHelper(GameTickTimeDelayHelperFactory::getInstance()), playerStateUtil(PlayerStateUtil::getInstance()), timeDelayHelper(new TimeDelayHelper(0)), playerListener(javaInner(new MusicManagerPlayerListener(this), this)), NEXT_SONG(JavaString::valueOf(CommonLabels::getInstance()->NEXT) +JavaString::valueOf(" Song: ")), currentSongSound(NoSound::getInstance()), nextSongSound(NoSound::getInstance()){
this->songList= songList;
    
}


    auto MusicManager::startNewSong() -> void{

                        if(this->nextSongSound == NoSound::getInstance())
                        
                                    {
                                    
    Sound* randomSongSound = dynamic_cast<Sound*>(this->basicArrayListUtil->getRandom(this->songList));;
    
this->nextSong(randomSongSound, 0, 0);
    

                                    }
                                
this->process();
    
}


    auto MusicManager::nextSong(Sound* nextSongSound, int32_t leftVolume, int32_t rightVolume) -> void{
PreLogUtil::put((new StringMaker())->append(NEXT_SONG)->append(nextSongSound->getResource())->toString(), this, this->commonStrings->PROCESS);
    
this->nextSongSound= nextSongSound;
    
this->reset();
    
this->stopped= false;
    
}


    auto MusicManager::reset() -> void{
this->reset_= true;
    
}


    auto MusicManager::process() -> void{

        try {
            
                        if(this->stopped)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ;
    

                                    }
                                

                        if(this->songList->size() == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ;
    

                                    }
                                

                        if((this->timeDelayHelper->isTime(this->gameTickTimeDelayHelper->startTime) && !this->noDuration) || this->reset_)
                        
                                    {
                                    this->reset_= false;
    
this->noDuration= false;
    

    Sound* endingCurrentSongSound = this->currentSongSound;;
    

    Sound* nextSongSound = this->nextSongSound;;
    
this->nextSongSound= NoSound::getInstance();
    

                        if(nextSongSound == NoSound::getInstance())
                        
                                    {
                                    this->currentSongSound= dynamic_cast<Sound*>(BasicArrayListUtil::getInstance()->getRandom(this->songList));
    

                                    }
                                
                        else {
                            this->currentSongSound= nextSongSound;
    

                        }
                            

    Sound* startingCurrentSongSound = this->currentSongSound;;
    

    int64_t duration = this->currentSongSound->getDuration();;
    
this->timeDelayHelper->delay= static_cast<int32_t>(duration);
    

                        if(duration <= 0)
                        
                                    {
                                    
    std::string NO_DURATION_FOR = "No Duration for: ";;
    
PreLogUtil::put((new StringMaker())->append(NO_DURATION_FOR)->append(this->currentSongSound->getResource())->toString(), this, this->commonStrings->PROCESS);
    
this->currentSongSound->getPlayerP()->addPlayerListener(playerListener);
    
this->noDuration= true;
    

                                    }
                                

                        if(endingCurrentSongSound != NoSound::getInstance())
                        
                                    {
                                    
                        if(endingCurrentSongSound == startingCurrentSongSound && endingCurrentSongSound->getPlayerP()->getState() == Player::STARTED)
                        
                                    {
                                    PreLogUtil::put((new StringMaker())->append(this->ALREADY_PLAYING)->append(endingCurrentSongSound->getResource())->toString(), this, this->commonStrings->PROCESS);
    
PreLogUtil::put((new StringMaker())->append(this->STOPPING)->append(endingCurrentSongSound->getResource())->append(this->SONG)->appendlong(duration)->toString(), this, this->commonStrings->PROCESS);
    
endingCurrentSongSound->getPlayerP()->stop();
    
this->waitForStateChange(endingCurrentSongSound, startingCurrentSongSound);
    

                                    }
                                
                        else {
                            
                        if(endingCurrentSongSound->getPlayerP()->getState() == Player::STARTED)
                        
                                    {
                                    PreLogUtil::put((new StringMaker())->append(this->STOPPING)->append(endingCurrentSongSound->getResource())->append(this->SONG)->appendlong(duration)->toString(), this, this->commonStrings->PROCESS);
    
endingCurrentSongSound->getPlayerP()->stop();
    
this->waitForStateChange(endingCurrentSongSound, startingCurrentSongSound);
    

                                    }
                                
                        else {
                            PreLogUtil::put((new StringMaker())->append(this->ALREADY_ENDED)->append(this->PLAY)->append(startingCurrentSongSound->getResource())->toString(), this, this->commonStrings->PROCESS);
    

                        if(AvianUtil::isAvian())
                        
                                    {
                                    endingCurrentSongSound->getPlayerP()->stop();
    
startingCurrentSongSound->getPlayerP()->stop();
    

                                    }
                                
startingCurrentSongSound->getPlayerP()->start();
    

                        }
                            

                        }
                            

                                    }
                                
                        else {
                            PreLogUtil::put((new StringMaker())->append(this->PLAY)->append(this->currentSongSound->getResource())->append(this->SONG)->appendlong(duration)->toString(), this, this->commonStrings->PROCESS);
    
this->currentSongSound->getPlayerP()->start();
    

                        }
                            

                                    }
                                

                //: 
} catch(Exception& e) 
            {

    std::string resource = StringUtil::getInstance()->EMPTY_STRING;;
    

                        if(this->currentSongSound != NoSound::getInstance())
                        
                                    {
                                    resource= this->currentSongSound->getResource();
    

                                    }
                                
PreLogUtil::putOE(JavaString::valueOf(this->commonStrings->EXCEPTION_LABEL) +JavaString::valueOf(resource), this, this->commonStrings->PROCESS, &e);
    
}

}


                //@Throws(Exception.constructor)
            
    auto MusicManager::waitForStateChange(Sound* endingCurrentSongSound, Sound* startingCurrentSongSound) -> void{

        while(endingCurrentSongSound->getPlayerP()->getState() == Player::STARTED)
        {
PreLogUtil::put(this->WAITING_FOR_MEDIA_TO_END, this, this->commonStrings->PROCESS);
    
Thread::sleep(100);
    
}

PreLogUtil::put((new StringMaker())->append(this->playerStateUtil->convert(endingCurrentSongSound->getPlayerP()->getState()))->append(this->commonSeps->SPACE)->append(this->PLAY)->append(startingCurrentSongSound->getResource())->toString(), this, this->commonStrings->PROCESS);
    
startingCurrentSongSound->getPlayerP()->start();
    
}


                //@Throws(Exception.constructor)
            
    auto MusicManager::stop() -> void{

        try {
            
    Sound* currentSongSound = this->currentSongSound;;
    

                        if(currentSongSound != NoSound::getInstance())
                        
                                    {
                                    this->stopped= true;
    
PreLogUtil::put((new StringMaker())->append(this->ENDING)->append(currentSongSound->getResource())->toString(), this, this->commonStrings->PROCESS);
    
currentSongSound->getPlayerP()->stop();
    

                                    }
                                
this->timeDelayHelper->setStartTime(0);
    
PreLogUtil::put((new StringMaker())->append(this->commonStrings->END)->append(StringUtil::getInstance()->toString(currentSongSound))->toString(), this, this->commonStrings->END);
    

                //: 
} catch(Exception& e) 
            {

    std::string resource = StringUtil::getInstance()->EMPTY_STRING;;
    

                        if(currentSongSound != NoSound::getInstance())
                        
                                    {
                                    resource= currentSongSound->getResource();
    

                                    }
                                
PreLogUtil::putOE(JavaString::valueOf(this->commonStrings->EXCEPTION_LABEL) +JavaString::valueOf(resource), this, this->commonStrings->END, &e);
    
}

}




        #endif //ORG_ALLBINARY_MEDIA_AUDIO_MUSIC_MUSICMANAGER_CPP
