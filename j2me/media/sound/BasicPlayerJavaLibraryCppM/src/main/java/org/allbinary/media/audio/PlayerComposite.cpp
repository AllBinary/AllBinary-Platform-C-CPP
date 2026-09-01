
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
        
            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/RuntimeException.h"
        
#include <javax/microedition/media/Control.h>

      
#include <javax/microedition/media/Controllable.h>

      
#include <javax/microedition/media/Player.h>

      
#include <javax/microedition/media/PlayerListener.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelper.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Controllable2.h"
//BasicPlayer
class PlayerComposite
            : public Object
        : public Controllable, public Player {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: Player player;

    private: const TimeDelayHelper timeElapsedHelper = TimeDelayHelper(0);

public: PlayerComposite(Player player, int32_t repeatTime){
this->player= player;
    
this->timeElapsedHelper.delay= repeatTime;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void addPlayerListener(PlayerListener playerListener){
this->player.addPlayerListener(playerListener);
    
}


    public: void removePlayerListener(PlayerListener playerListener){
this->player.removePlayerListener(playerListener);
    
}


    public: void close(){
this->player.close();
    
}


    public: void deallocate(){
this->player.deallocate();
    
}


    public: std::string getContentType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->player.getContentType();;
    
}


    public: int64_t getDuration(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->player.getDuration();;
    
}


    public: int64_t getMediaTime(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->player.getMediaTime();;
    
}


    public: void prefetch(){

        try {
            this->player.prefetch();
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "prefetch", e);
    
}

}


    public: void realize(){

        try {
            this->player.realize();
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "realize", e);
    
}

}


    public: int32_t getState(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->player.getState();;
    
}


    public: void setLoopCount(int32_t count){
this->player.setLoopCount(count);
    
}


    public: int64_t setMediaTime(int64_t now){

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->player.setMediaTime(now);;
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "setMediaTime", e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}

}


    private: const GameTickTimeDelayHelper gameTickTimeDelayHelper = GameTickTimeDelayHelperFactory::getInstance();

    public: void start(){

        try {
            
                        if(this->timeElapsedHelper.isTime(this->gameTickTimeDelayHelper.startTime))
                        
                                    {
                                    this->player.start();
    

                                    }
                                

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.START_METHOD_NAME, e);
    
}

}


    public: void stop(){

        try {
            this->player.stop();
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "stop", e);
    
}

}


    public: Control getControl(std::string controlType){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->player.getControl(controlType);;
    
}


    public: std::vector<Control> getControls(){



                            throw RuntimeException();
                    
}


    public: void setVolume(int32_t leftVolume, int32_t rightVolume){

    Controllable2 controllable2 = (this->player as unknown as Controllable2);;
    
controllable2.setVolume(leftVolume, rightVolume);
    
}


    public: Player getPlayerP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->player;
    
}


};

            

