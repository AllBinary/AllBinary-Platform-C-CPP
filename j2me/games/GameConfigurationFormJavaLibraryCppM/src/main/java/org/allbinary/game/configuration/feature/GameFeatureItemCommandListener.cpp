
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Command.h>

      
#include <javax/microedition/lcdui/Item.h>

      
#include <javax/microedition/lcdui/ItemCommandListener.h>

      
#include <org/allbinary/game/configuration/GameConfigurationGauge.h>

      
#include <org/allbinary/game/configuration/GameConfigurationUtil.h>

      
#include <org/allbinary/game/configuration/GameOptionsForm.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/midlet/MidletStrings.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameFeatureItemCommandListener
            : public Object
        : public ItemCommandListener {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: GameOptionsForm gameOptionsForm;

public: GameFeatureItemCommandListener(GameOptionsForm gameOptionsForm){
this->gameOptionsForm= gameOptionsForm;
    
}


    public: void commandAction(Command command, Item item){

        try {
            
    std::string itemLabel = item.getLabel();;
    
this->logUtil.putF(StringMaker().append(CommonLabels::getInstance().ITEM_LABEL).append(itemLabel).toString(), this, MidletStrings::getInstance().COMMAND_ACTION);
    

                        if(item instanceof GameConfigurationGauge)
                        
                                    {
                                    GameConfigurationUtil::getInstance().change(this->gameOptionsForm, item);
    

                                    }
                                

                //: 
} catch(e) 
            {

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put(commonStrings.EXCEPTION, this, MidletStrings::getInstance().COMMAND_ACTION, e);
    
}

}


};

            

