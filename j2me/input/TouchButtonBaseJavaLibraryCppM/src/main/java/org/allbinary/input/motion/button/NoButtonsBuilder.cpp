
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_NOBUTTONSBUILDER_CPP
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_NOBUTTONSBUILDER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/motion/button/NoButtonsBuilder.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/button/BaseTouchInput.h"


NoButtonsBuilder::NoButtonsBuilder() : logUtil(LogUtil::getInstance()) {
        }
        
    auto NoButtonsBuilder::getList() -> BasicArrayList*{

        try {
            this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
    

    BasicArrayList* list = BasicArrayListUtil::getInstance()->getImmutableInstance();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return list;
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->GET_LIST, &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicArrayListUtil::getInstance()->getImmutableInstance();;
    
}

}




        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_NOBUTTONSBUILDER_CPP
