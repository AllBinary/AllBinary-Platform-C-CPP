
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Runnable.h"
        
#include <javax/microedition/media/Player.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/audio/SoundInterface.h"
#include "org/allbinary/media/audio/NoPlayer.h"

class Sound
            : public Object
        , public SoundInterface, public Runnable {

    private: std::string resource;

    protected: Player* player = NoPlayer::NO_PLAYER;

protected: Sound(std::string resource){
this->resource= resource;
    
}


    public: std::string getResource(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->resource;
    
}


    public: Player* getPlayerP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->player;
    
}


    public: void setPlayerP(Player* player){
this->player= player;
    
}


                //@Throws(Exception.constructor)
            
    public: void init(){
}


    public: int32_t getDuration(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}


    public: void run(){

        try {
            this->player->start();
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
PreLogUtil::put(commonStrings->EXCEPTION, this, commonStrings->RUN);
    
}

}


};

            

