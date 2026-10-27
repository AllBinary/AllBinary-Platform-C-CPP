
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_FORMUTIL_CPP
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_FORMUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/displayable/canvas/FormUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

FormUtil::FormUtil() {
        }
        auto FormUtil::instance_owner() -> FormUtil* { static std::unique_ptr<FormUtil> value(new FormUtil()); return value.get(); }
FormUtil* FormUtil::instance = FormUtil::instance_owner();

    auto FormUtil::getInstance() -> FormUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FormUtil::instance;
    
}


    auto FormUtil::createFormRectangle() -> Rectangle*{

    DisplayInfoSingleton* displayInfo = DisplayInfoSingleton::getInstance();;
    

    PointFactory* pointFactory = PointFactory::getInstance();;
    

    Rectangle* rectangle = new Rectangle(pointFactory->createXY(30, 10), displayInfo->getLastWidth() -30, displayInfo->getLastHeight() -35);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return rectangle;
    
}




        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_FORMUTIL_CPP
