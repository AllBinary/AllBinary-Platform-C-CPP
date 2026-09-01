
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../java/lang/RuntimeException.h"
        
#include <org/allbinary/game/graphics/hud/BasicHudFactory.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "NumberStringHud.h"

class NumberStringHudFactory
            : public Object
         {

    private: static Object* instance = NullUtil::getInstance();

    public: static NumberStringHudFactory getInstance(){

                        if(NumberStringHudFactory::instance() == NullUtil::getInstance())
                        
                                    {
                                    NumberStringHudFactory::instance= NumberStringHudFactory();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NumberStringHudFactory::instance() as NumberStringHudFactory;
    
}


    public: NumberStringHud createHud(){

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NumberStringHud(StringUtil::getInstance().EMPTY_STRING, 9, BasicHudFactory::getInstance().ABSOLUTE, 1, 0, BasicColorFactory::getInstance().NULL_COLOR);
    

                //: 
} catch(e) 
            {

    LogUtil logUtil = LogUtil::getInstance();;
    

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
logUtil.put(commonStrings.EXCEPTION, this, commonStrings.CONSTRUCTOR, e);
    



                            throw RuntimeException();
                    
}

}


    public: const NumberStringHud NULL_NUMBER_STRING_HUD = this->createHud();

};

            

