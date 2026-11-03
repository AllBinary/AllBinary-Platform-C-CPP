
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2007 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_NOBUILDINGSELECTEDTOUCHBUTTONSBUILDER_CPP
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_NOBUILDINGSELECTEDTOUCHBUTTONSBUILDER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/motion/button/NoBuildingSelectedTouchButtonsBuilder.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/button/BaseTouchInput.h"
#include "org/allbinary/input/motion/button/BasicTouchButtonsBuilder.h"
#include "org/allbinary/input/motion/button/BuildingScrollTouchButtonsBuilder.h"


NoBuildingSelectedTouchButtonsBuilder::NoBuildingSelectedTouchButtonsBuilder() : logUtil(LogUtil::getInstance()) {
        }
        
    auto NoBuildingSelectedTouchButtonsBuilder::getList() -> BasicArrayList*{

        try {
            this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
    

    BasicArrayList* list = new BasicArrayListD();;
    
list->addAllList((new BasicTouchButtonsBuilder())->getList());
    
list->addAllList((new BuildingScrollTouchButtonsBuilder())->getList());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return list;
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->CONSTRUCTOR, &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return BasicArrayListUtil::getInstance()->getImmutableInstance();;
    
}

}




        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_NOBUILDINGSELECTEDTOUCHBUTTONSBUILDER_CPP
