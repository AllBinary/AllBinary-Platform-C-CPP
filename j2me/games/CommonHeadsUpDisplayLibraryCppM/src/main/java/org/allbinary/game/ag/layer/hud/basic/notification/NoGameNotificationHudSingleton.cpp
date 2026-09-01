
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
        



            #include "../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/graphics/hud/BasicHudFactory.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameNotificationHud.h"

class NoGameNotificationHudSingleton
            : public Object
         {

    private: static NoGameNotificationHudSingleton instance() { return NoGameNotificationHudSingleton(); }

    public: static NoGameNotificationHudSingleton getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NoGameNotificationHudSingleton::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: GameNotificationHud gameNotificationHud = GameNotificationHud::NULL_GAME_NOTIFICATION;

private: NoGameNotificationHudSingleton(){

        try {
            
    BasicHudFactory basicHudFactory = BasicHudFactory::getInstance();;
    

//inner=true member= isStatic=
class NoGameGameNotificationHud: public GameNotificationHud {

: NoGameGameNotificationHud(){
            super(basicHudFactory.TOPCENTER, basicHudFactory.HORIZONTAL, 2, BasicColorFactory::getInstance().RED);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->updateMaxWidth= 40;
    
this->updateMaxHeight= 14;
    
}


};

            

                    //Otherwise - statement - EmptyStmt

this->gameNotificationHud= NoGameGameNotificationHud();
    

                //: 
} catch(e) 
            {

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put(commonStrings.EXCEPTION, this, commonStrings.CONSTRUCTOR, e);
    
}

}


    public: GameNotificationHud getGameNotificationHud(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->gameNotificationHud;
    
}


};

            

