
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



            #include <vector>
        
            #include "java/lang/Object.h"
        
#include <javax/microedition/media/Control.h>

      
#include <javax/microedition/media/MediaException.h>

      
#include <javax/microedition/media/Player.h>

      
#include <javax/microedition/media/PlayerListener.h>

      
#include <javax/microedition/media/TimeBase.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TimeBaseInterface.h"
#include "Controllable2.h"
#include "NullControl.h"
//BasicPlayerMIDP2JavaLibrary
class BasicPlayer
            : public Object
        : public Player, public TimeBaseInterface, public Controllable2 {

    public: static std::string CONTROL_TYPE = "ToneControl";

    protected: const BasicArrayList listenersList = BasicArrayListD();

    private: TimeBase timeBase;

    protected: int32_t stateP= 0;

    protected: int32_t loopCountP= 0;

public: BasicPlayer(){
this->setLoopCount(0);
    
this->setState(Player::UNREALIZED);
    
}


    public: std::string getContentType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil::getInstance().EMPTY_STRING;
    
}


    public: Control getControl(std::string controlType){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullControl();
    
}


    public: std::vector<Control> getControls(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return {};
    
}


    public: void close(){
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void addPlayerListener(PlayerListener playerListener){

                        if(!this->listenersList.contains(playerListener))
                        
                                    {
                                    this->listenersList.add(playerListener);
    

                                    }
                                
}


    public: void removePlayerListener(PlayerListener playerListener){
this->listenersList.remove(playerListener);
    
}


    public: int32_t getState(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->stateP;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void setState(int32_t state){
this->stateP= state;
    
}


    public: int64_t getDuration(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    public: int64_t getMediaTime(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    public: TimeBase getTimeBase(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->timeBase;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void setTimeBase(TimeBase timeBase){
this->timeBase= timeBase;
    
}


    public: void deallocate(){
}


                //@Throws(MediaException.constructor)
            
    public: void prefetch(){
}


                //@Throws(MediaException.constructor)
            
    public: void realize(){
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void setLoopCount(int32_t count){
this->loopCountP= count;
    
}


    protected: int32_t getLoopCount(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->loopCountP;
    
}


                //@Throws(MediaException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: int64_t setMediaTime(int64_t now){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


                //@Throws(MediaException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void start(){
this->setState(Player::STARTED);
    
}


                //@Throws(MediaException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void stop(){
this->setState(Player::PREFETCHED);
    
}


    public: void setVolume(int32_t leftVolume, int32_t rightVolume){
}


};

            

