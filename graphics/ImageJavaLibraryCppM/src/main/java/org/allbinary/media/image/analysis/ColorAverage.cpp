
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_COLORAVERAGE_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_COLORAVERAGE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/analysis/ColorAverage.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ColorAverage::ColorAverage(){
this->setAvgRed(0);
    
this->setAvgGreen(0);
    
this->setAvgBlue(0);
    
}


    auto ColorAverage::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("getAvgRed(): ");
    
stringBuffer->appendfloat(this->getAvgRed());
    
stringBuffer->append(CommonSeps::getInstance()->NEW_LINE);
    
stringBuffer->append("getAvgRed(): ");
    
stringBuffer->appendfloat(this->getAvgRed());
    
stringBuffer->append(CommonSeps::getInstance()->NEW_LINE);
    
stringBuffer->append("getAvgGreen(): ");
    
stringBuffer->appendfloat(this->getAvgGreen());
    
stringBuffer->append(CommonSeps::getInstance()->NEW_LINE);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(stringBuffer);;
    
}


    auto ColorAverage::getAvgRed() -> float{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->avgRed;
    
}


    auto ColorAverage::setAvgRed(float avgRed) -> void{
this->avgRed= avgRed;
    
}


    auto ColorAverage::getAvgGreen() -> float{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->avgGreen;
    
}


    auto ColorAverage::setAvgGreen(float avgGreen) -> void{
this->avgGreen= avgGreen;
    
}


    auto ColorAverage::getAvgBlue() -> float{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->avgBlue;
    
}


    auto ColorAverage::setAvgBlue(float avgBlue) -> void{
this->avgBlue= avgBlue;
    
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_COLORAVERAGE_CPP
