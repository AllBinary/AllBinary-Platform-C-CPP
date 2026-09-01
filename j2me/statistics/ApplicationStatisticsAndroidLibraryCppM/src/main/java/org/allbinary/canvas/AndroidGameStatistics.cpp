
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
        



            #include <vector>
        
            #include "../../../java/lang/Long.h"
        
#include <android/view/View.h>

      
#include <org/allbinary/android/view/BaseViewWrapper.h>

      
#include <org/allbinary/android/view/ViewWrapper.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BaseGameStatistics.h"

class AndroidGameStatistics: public BaseGameStatistics {

    private: BaseViewWrapper view = BaseViewWrapper::NULL_VIEW_WRAPPER;

    private: int64_t totalOnDraws= 0;

    private: const std::vector<std::string> ANDROID_STRING_ARRAY = new Array(14);

public: AndroidGameStatistics(){

    StringUtil stringUtil = StringUtil::getInstance();;
    




                        for (
    int32_t index = 0;index < this->ANDROID_STRING_ARRAY.size(); index++)
        {
this->ANDROID_STRING_ARRAY[index]= stringUtil.EMPTY_STRING;
    
}

}


    public: void initView(View view){
super.init();
    
this->view= ViewWrapper(view);
    
this->totalOnDraws= 0;
    
}


    public: void process(){
this->view.postInvalidate();
    
}


    public: void nextOnDraw(){
this->totalOnDraws++;
    
}


    private: const std::string TOTAL_ONDRAWS = " Total onDraws: ";

    private: const std::string ONDRAWS_RATE = " onDraws(/10) Sec: ";

    public: std::vector<std::string> toStringArray(){

    std::vector<std::string> stringArray = super.toStringArray();;
    




                        for (
    int32_t index = 0;index < stringArray.size(); index++)
        {
this->ANDROID_STRING_ARRAY[index]= stringArray[index]!;
    
}


    int64_t totalTime = this->getTimeDelayHelper().getElapsed(this->gameTickTimeDelayHelper.startTime);;
    
totalTime= (totalTime /10000);
    
this->ANDROID_STRING_ARRAY[10]= this->TOTAL_ONDRAWS;
    
this->ANDROID_STRING_ARRAY[11]= std::to_string(totalOnDraws);
    
this->ANDROID_STRING_ARRAY[12]= this->ONDRAWS_RATE;
    
this->ANDROID_STRING_ARRAY[13]= std::to_string();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->ANDROID_STRING_ARRAY;
    
}


    public: std::string toString(){

    int64_t totalTime = this->getTimeDelayHelper().getElapsed(this->gameTickTimeDelayHelper.startTime);;
    
totalTime= (totalTime /1000);
    

                        if(totalTime > 0)
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(super.toStringAt(totalTime));
    

                        if(this->totalOnDraws > 0)
                        
                                    {
                                    stringBuffer.append(this->TOTAL_ONDRAWS);
    
stringBuffer.append(std::to_string(totalOnDraws));
    
stringBuffer.append(this->ONDRAWS_RATE);
    

    std::string drawsOverTime = std::to_string();;
    
stringBuffer.append(drawsOverTime);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->NOT;
    

                        }
                            
}


};

            

