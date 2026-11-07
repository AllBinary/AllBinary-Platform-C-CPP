
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_COLORRANGE_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_COLORRANGE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/analysis/ColorRange.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/awt.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/analysis/ColorRangeInterface.h"
#include "org/allbinary/media/image/analysis/Color.h"


ColorRange::ColorRange(){
this->minRed= 0;
    
this->maxRed= 0;
    
this->minGreen= 0;
    
this->maxGreen= 0;
    
this->minBlue= 0;
    
this->maxBlue= 0;
    
}


    auto ColorRange::getMinRed() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->minRed;
    
}


    auto ColorRange::setMinRed(int32_t minRed) -> void{
this->minRed= minRed;
    
}


    auto ColorRange::getMaxRed() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->maxRed;
    
}


    auto ColorRange::setMaxRed(int32_t maxRed) -> void{
this->maxRed= maxRed;
    
}


    auto ColorRange::getMinGreen() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->minGreen;
    
}


    auto ColorRange::setMinGreen(int32_t minGreen) -> void{
this->minGreen= minGreen;
    
}


    auto ColorRange::getMaxGreen() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->maxGreen;
    
}


    auto ColorRange::setMaxGreen(int32_t maxGreen) -> void{
this->maxGreen= maxGreen;
    
}


    auto ColorRange::getMinBlue() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->minBlue;
    
}


    auto ColorRange::setMinBlue(int32_t minBlue) -> void{
this->minBlue= minBlue;
    
}


    auto ColorRange::getMaxBlue() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->maxBlue;
    
}


    auto ColorRange::setMaxBlue(int32_t maxBlue) -> void{
this->maxBlue= maxBlue;
    
}


    auto ColorRange::isInRange(Color* color) -> bool{

                        if(color->getRed() >= this->getMinRed() && color->getRed() <= this->getMaxRed() && color->getGreen() >= this->getMinGreen() && color->getGreen() <= this->getMaxGreen() && color->getBlue() >= this->getMinBlue() && color->getBlue() <= this->getMaxBlue())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                        }
                            
}


    auto ColorRange::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("getMinRed(): ");
    
stringBuffer->appendint(this->getMinRed());
    
stringBuffer->append(CommonSeps::getInstance()->NEW_LINE);
    
stringBuffer->append("getMaxRed(): ");
    
stringBuffer->appendint(this->getMaxRed());
    
stringBuffer->append(CommonSeps::getInstance()->NEW_LINE);
    
stringBuffer->append("getMinGreen(): ");
    
stringBuffer->appendint(this->getMinGreen());
    
stringBuffer->append(CommonSeps::getInstance()->NEW_LINE);
    
stringBuffer->append("getMaxGreen(): ");
    
stringBuffer->appendint(this->getMaxGreen());
    
stringBuffer->append(CommonSeps::getInstance()->NEW_LINE);
    
stringBuffer->append("getMinBlue(): ");
    
stringBuffer->appendint(this->getMinGreen());
    
stringBuffer->append(CommonSeps::getInstance()->NEW_LINE);
    
stringBuffer->append("getMaxBlue(): ");
    
stringBuffer->appendint(this->getMaxBlue());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(stringBuffer);;
    
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_COLORRANGE_CPP
