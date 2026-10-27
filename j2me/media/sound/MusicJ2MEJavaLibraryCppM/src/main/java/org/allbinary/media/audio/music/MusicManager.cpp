
        /* Generated Code Do Not Modify */
        



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

class MusicManager
            : public Object
         {

    private: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: CommonSeps* commonSeps = CommonSeps::getInstance();

    private: BasicArrayListUtil* basicArrayListUtil = BasicArrayListUtil::getInstance();

    private: GameTickTimeDelayHelper* gameTickTimeDelayHelper = GameTickTimeDelayHelperFactory::getInstance();

    private: PlayerStateUtil* playerStateUtil = PlayerStateUtil::getInstance();

    private: TimeDelayHelper* timeDelayHelper = new TimeDelayHelper(0);
//Handle Media ending for Avian
//inner= member=true isStatic=
class MusicManagerPlayerListener
            : public Object
        , public PlayerListener {

    public: void playerUpdate(Player* player, std::string event, Object* eventData){
PreLogUtil::put(event, this, commonStrings->PROCESS);
    

                        if(event == PlayerListener::END_OF_MEDIA || event == PlayerListener::STOPPED || event == PlayerListener::CLOSED)
                        
                                    {
                                    reset();
    

                                    }
                                
}


};

            
    private: PlayerListener* playerListener = new MusicManagerPlayerListener();

    private: const std::string PLAY = "Play ";

    private: const std::string SONG = " for: ";

    private: const std::string NEXT_SONG = CommonLabels::getInstance()->NEXT +" Song: ";

    private: const std::string STOPPING = "Stopping Current Song: ";

    private: const std::string ENDING = "Ending Current Song: ";

    private: const std::string WAITING_FOR_MEDIA_TO_END = "Waiting for media to end";

    private: const std::string ALREADY_PLAYING = "Already Playing: ";

    private: const std::string ALREADY_ENDED = "Last Song already ended: ";

    private: BasicArrayList* songList;

    private: Sound* currentSongSound = NoSound::getInstance();

    private: Sound* nextSongSound = NoSound::getInstance();

    private: bool reset= false;

    private: bool noDuration= false;

    private: bool stopped = true;

public: MusicManager(Class* musicServiceClass, BasicArrayList* songList){
this->songList= songList;
    
}


    public: void startNewSong(){

                        if(this->nextSongSound == NoSound::getInstance())
                        
                                    {
                                    
    Sound* randomSongSound = dynamic_cast<Sound*>(this->basicArrayListUtil->getRandom(this->songList));;
    
this->nextSong(randomSongSound, 0, 0);
    

                                    }
                                
this->process();
    
}


    public: void nextSong(Sound* nextSongSound, int32_t leftVolume, int32_t rightVolume){
PreLogUtil::put((new StringMaker())->append(NEXT_SONG)->append(nextSongSound->getResource())->toString(), this, this->commonStrings->PROCESS);
    
this->nextSongSound= nextSongSound;
    
this->reset();
    
this->stopped= false;
    
}


    public: void reset(){
this->reset= true;
    
}


    public: void process(){

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
                                

                        if((this->timeDelayHelper->isTime(this->gameTickTimeDelayHelper->startTime) && !this->noDuration) || this->reset)
                        
                                    {
                                    this->reset= false;
    
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
                                
PreLogUtil::putOE(this->commonStrings->EXCEPTION_LABEL +resource, this, this->commonStrings->PROCESS, &e);
    
}

}


                //@Throws(Exception.constructor)
            
    private: void waitForStateChange(Sound* endingCurrentSongSound, Sound* startingCurrentSongSound){

        while(endingCurrentSongSound->getPlayerP()->getState() == Player::STARTED)
        {
PreLogUtil::put(this->WAITING_FOR_MEDIA_TO_END, this, this->commonStrings->PROCESS);
    
Thread::sleep(100);
    
}

PreLogUtil::put((new StringMaker())->append(this->playerStateUtil->convert(endingCurrentSongSound->getPlayerP()->getState()))->append(this->commonSeps->SPACE)->append(this->PLAY)->append(startingCurrentSongSound->getResource())->toString(), this, this->commonStrings->PROCESS);
    
startingCurrentSongSound->getPlayerP()->start();
    
}


                //@Throws(Exception.constructor)
            
    public: void stop(){

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
                                
PreLogUtil::putOE(this->commonStrings->EXCEPTION_LABEL +resource, this, this->commonStrings->END, &e);
    
}

}


};

            

