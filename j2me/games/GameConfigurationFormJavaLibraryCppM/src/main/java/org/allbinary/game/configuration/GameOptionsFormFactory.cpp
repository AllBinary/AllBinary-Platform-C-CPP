
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
        
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/displayable/screen/CommandForm.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameOptionsForm.h"

class GameOptionsFormFactory
            : public Object
         {

    private: static GameOptionsFormFactory instance() { return GameOptionsFormFactory(); }

    public: static GameOptionsFormFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameOptionsFormFactory::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

private: GameOptionsFormFactory(){
}


    public: CommandForm init(CommandListener commandListener, std::string title, BasicColor backgrounBasicColor, BasicColor foregroundBasicColor){

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameOptionsForm(commandListener, title, backgrounBasicColor, foregroundBasicColor);
    

                //: 
} catch(e) 
            {

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put(commonStrings.EXCEPTION, this, commonStrings.INIT, e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CommandForm::getNullCommandForm();;
    
}

}


};

            

