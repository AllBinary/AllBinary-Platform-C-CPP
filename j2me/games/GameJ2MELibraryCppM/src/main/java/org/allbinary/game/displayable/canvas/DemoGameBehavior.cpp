
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/GameTypeFactory.h>

      
#include <org/allbinary/graphics/paint/NullPaintable.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AllBinaryGameCanvas.h"

class DemoGameBehavior
            : public Object
         {

    private: static DemoGameBehavior instance() { return DemoGameBehavior(); }

    public: static DemoGameBehavior getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DemoGameBehavior::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

                //@Throws(Exception.constructor)
            
    public: void init(){
}


    public: void pause(AllBinaryGameCanvas allBinaryGameCanvas){
}


    public: void unPause(AllBinaryGameCanvas allBinaryGameCanvas){
}


                //@Throws(Exception.constructor)
            
    public: void updateTouch(AllBinaryGameCanvas allBinaryGameCanvas){
}


                //@Throws(Exception.constructor)
            
    public: void updateScreenButtonPaintable(AllBinaryGameCanvas allBinaryGameCanvas){
allBinaryGameCanvas.setTouchPaintableP(NullPaintable::getInstance());
    
}


                //@Throws(Exception.constructor)
            
    public: void setGameState(AllBinaryGameCanvas allBinaryGameCanvas){
}


    public: void removeAllGameKeyInputListeners(AllBinaryGameCanvas allBinaryGameCanvas){
}


                //@Throws(Exception.constructor)
            
    public: void updateEndGameProcessor(AllBinaryGameCanvas allBinaryGameCanvas){
}


                //@Throws(Exception.constructor)
            
    public: void buildGame(AllBinaryGameCanvas allBinaryGameCanvas){
}


                //@Throws(Exception.constructor)
            
    public: void run(AllBinaryGameCanvas allBinaryGameCanvas){

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.putF(GameTypeFactory::getInstance().BOT.toString(), this, commonStrings.RUN);
    
}


                //@Throws(Exception.constructor)
            
    public: void setHighScore(AbeClientInformationInterface abeClientInformation, AllBinaryGameCanvas allBinaryGameCanvas, std::string name, int64_t score, bool autoSubmit, bool isLast){
}


};

            

