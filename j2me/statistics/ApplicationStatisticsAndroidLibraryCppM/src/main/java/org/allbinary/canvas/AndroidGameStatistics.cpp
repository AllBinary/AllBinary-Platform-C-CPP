
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
        



        #ifndef ORG_ALLBINARY_CANVAS_ANDROIDGAMESTATISTICS_CPP
        #define ORG_ALLBINARY_CANVAS_ANDROIDGAMESTATISTICS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/canvas/AndroidGameStatistics.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Long.h"
        
#include <android/view/View.h>

      
#include <org/allbinary/android/view/BaseViewWrapper.h>

      
#include <org/allbinary/android/view/ViewWrapper.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/canvas/BaseGameStatistics.h"


AndroidGameStatistics::AndroidGameStatistics() : view(BaseViewWrapper::NULL_VIEW_WRAPPER), ANDROID_STRING_ARRAY(std::vector<std::string>(14)){

    StringUtil* stringUtil = StringUtil::getInstance();;
    




                        for (
    int32_t index = 0;index < this->ANDROID_STRING_ARRAY.size(); index++)
        {
this->ANDROID_STRING_ARRAY[index]= stringUtil->EMPTY_STRING;
    
}

}


    auto AndroidGameStatistics::initView(View* view) -> void{
BaseGameStatistics::init();
    
this->view= new ViewWrapper(view);
    
this->totalOnDraws= 0;
    
}


    auto AndroidGameStatistics::process() -> void{
this->view->postInvalidate();
    
}


    auto AndroidGameStatistics::nextOnDraw() -> void{
this->totalOnDraws++;
    
}


    auto AndroidGameStatistics::toStringArray() -> std::vector<std::string>{

    std::vector<std::string> stringArray = BaseGameStatistics::toStringArray();;
    




                        for (
    int32_t index = 0;index < stringArray.size(); index++)
        {
this->ANDROID_STRING_ARRAY[index]= stringArray[index];
    
}


    int64_t totalTime = this->getTimeDelayHelper()->getElapsed(this->gameTickTimeDelayHelper->startTime);;
    
totalTime= (totalTime /10000);
    
this->ANDROID_STRING_ARRAY[10]= this->TOTAL_ONDRAWS;
    
this->ANDROID_STRING_ARRAY[11]= std::to_string(totalOnDraws);
    
this->ANDROID_STRING_ARRAY[12]= this->ONDRAWS_RATE;
    
this->ANDROID_STRING_ARRAY[13]= std::to_string();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->ANDROID_STRING_ARRAY;
    
}


    auto AndroidGameStatistics::toString() -> std::string{

    int64_t totalTime = this->getTimeDelayHelper()->getElapsed(this->gameTickTimeDelayHelper->startTime);;
    
totalTime= (totalTime /1000);
    

                        if(totalTime > 0)
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(BaseGameStatistics::toStringAt(totalTime));
    

                        if(this->totalOnDraws > 0)
                        
                                    {
                                    stringBuffer->append(this->TOTAL_ONDRAWS);
    
stringBuffer->append(std::to_string(totalOnDraws));
    
stringBuffer->append(this->ONDRAWS_RATE);
    

    std::string drawsOverTime = std::to_string();;
    
stringBuffer->append(drawsOverTime);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->NOT;
    

                        }
                            
}




        #endif //ORG_ALLBINARY_CANVAS_ANDROIDGAMESTATISTICS_CPP
