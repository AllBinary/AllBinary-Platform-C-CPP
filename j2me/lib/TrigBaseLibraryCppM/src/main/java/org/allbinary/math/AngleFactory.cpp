
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
        



        #ifndef ORG_ALLBINARY_MATH_ANGLEFACTORY_CPP
        #define ORG_ALLBINARY_MATH_ANGLEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/math/AngleFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/math/Angle.h"
#include "org/allbinary/math/NamedAngle.h"
#include "org/allbinary/math/FrameUtil.h"

auto AngleFactory::instance_owner() -> AngleFactory* { static std::unique_ptr<AngleFactory> value(new AngleFactory()); return value.get(); }
AngleFactory* AngleFactory::instance = AngleFactory::instance_owner();

    auto AngleFactory::getInstance() -> AngleFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AngleFactory::instance;
    
}


AngleFactory::AngleFactory() : logUtil(LogUtil::getInstance()), angleArray(std::vector<Angle*>(static_cast<int32_t>(this->TOTAL_ANGLE))), NOT_ANGLE(new NamedAngle(this->NEGATIVE_ONE, CommonStrings::getInstance()->EMPTY)), frameUtil(FrameUtil::getInstance()){

    CommonPhoneStrings* commonPhoneStrings = CommonPhoneStrings::getInstance();;
    

    int16_t total = this->angleArray.size();;
    
this->UP= new NamedAngle(0, commonPhoneStrings->UP);
    
this->angleArray[0]= this->UP;
    




                        for (
    int32_t index = 1;index < 90; index++)
        {
this->angleArray[index]= new Angle(index);
    
}

this->RIGHT= new NamedAngle(90, commonPhoneStrings->RIGHT);
    
this->angleArray[90]= this->RIGHT;
    




                        for (
    int32_t index = 91;index < 180; index++)
        {
this->angleArray[index]= new Angle(index);
    
}

this->DOWN= new NamedAngle(180, commonPhoneStrings->DOWN);
    
this->angleArray[180]= this->DOWN;
    




                        for (
    int32_t index = 181;index < 270; index++)
        {
this->angleArray[index]= new Angle(index);
    
}

this->LEFT= new NamedAngle(270, commonPhoneStrings->LEFT);
    
this->angleArray[270]= this->LEFT;
    




                        for (
    int32_t index = 271;index < total; index++)
        {
this->angleArray[index]= new Angle(index);
    
}

}


    auto AngleFactory::getAt(int32_t index) -> Angle*{

    int32_t adjustedIndex = static_cast<int32_t>(this->frameUtil->adjustAngleToFrameAngle(index));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->angleArray[adjustedIndex];
    
}


    auto AngleFactory::getClosestDirection(int32_t angle) -> Angle*{

                        if((angle >= 315 && angle < 360) || (angle >= 0 && angle < 45))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->UP;
    

                                    }
                                
                             else 
                        if(angle >= 45 && angle < 135)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->RIGHT;
    

                                    }
                                
                             else 
                        if(angle >= 135 && angle < 225)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->DOWN;
    

                                    }
                                
                             else 
                        if(angle >= 225 && angle < 315)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->LEFT;
    

                                    }
                                



                            throw RuntimeException();
                    
}


    auto AngleFactory::getGeneralDirection() -> Angle*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->NOT_ANGLE;
    
}


    auto AngleFactory::main(std::vector<std::string> args) -> void{

    StringMaker* stringMaker = new StringMaker();;
    

    AngleFactory* angleFactory = AngleFactory::getInstance();;
    




                        for (
    int32_t index = 0;index < 360; index++)
        {
stringMaker->appendint(index)->append(CommonSeps::getInstance()->FORWARD_SLASH)->appendshort(angleFactory->getClosestDirection(index)->getValue())->append(CommonSeps::getInstance()->NEW_LINE);
    
}

LogUtil::getInstance()->putF(stringMaker->toString(), "main", "main");
    
}




        #endif //ORG_ALLBINARY_MATH_ANGLEFACTORY_CPP
