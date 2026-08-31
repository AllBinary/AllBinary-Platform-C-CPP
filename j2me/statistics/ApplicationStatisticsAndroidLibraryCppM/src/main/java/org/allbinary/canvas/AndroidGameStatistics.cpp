
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
        



            #include "../../../java/lang/Long.h"
        
#include <android/view/View.h>

      
#include <org/allbinary/android/view/BaseViewWrapper.h>

      
#include <org/allbinary/android/view/ViewWrapper.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BaseGameStatistics.h"

class AndroidGameStatistics: public BaseGameStatistics {
        

    private: view: BaseViewWrapper = BaseViewWrapper.NULL_VIEW_WRAPPER;

    private: totalOnDraws: int64_t= 0;

    private: const ANDROID_STRING_ARRAY: std::vector<string> = new Array(14);

public constructor (){

            super();
        
    stringUtil: StringUtil = StringUtil.getInstance()!;;
    




                        for (
    index: int32_t = 0;index < this.ANDROID_STRING_ARRAY.length; index++)
        {
this.ANDROID_STRING_ARRAY[index]= stringUtil!.EMPTY_STRING;
    
}

}


    public initView(View view){
super.init();
    
this.view= new ViewWrapper(view);
    
this.totalOnDraws= 0;
    
}


    public process(){
this.view.postInvalidate();
    
}


    public nextOnDraw(){
this.totalOnDraws++;
    
}


    private: const TOTAL_ONDRAWS: string = " Total onDraws: ";

    private: const ONDRAWS_RATE: string = " onDraws(/10) Sec: ";

    public std::vector<string> toStringArray(){

    stringArray: std::vector<string> = super.toStringArray()!;;
    




                        for (
    index: int32_t = 0;index < stringArray!.length; index++)
        {
this.ANDROID_STRING_ARRAY[index]= stringArray[index]!;
    
}


    totalTime: int64_t = this.getTimeDelayHelper()!.getElapsed(this.gameTickTimeDelayHelper!.startTime)!;;
    
totalTime= (totalTime /10000);
    
this.ANDROID_STRING_ARRAY[10]= this.TOTAL_ONDRAWS;
    
this.ANDROID_STRING_ARRAY[11]= (this.totalOnDraws).toString();
    
this.ANDROID_STRING_ARRAY[12]= this.ONDRAWS_RATE;
    
this.ANDROID_STRING_ARRAY[13]= (this.totalOnDraws /totalTime).toString();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.ANDROID_STRING_ARRAY;
    
}


    public string toString(){

    totalTime: int64_t = this.getTimeDelayHelper()!.getElapsed(this.gameTickTimeDelayHelper!.startTime)!;;
    
totalTime= (totalTime /1000);
    

                        if(totalTime > 0)
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(super.toStringAt(totalTime));
    

                        if(this.totalOnDraws > 0)
                        
                                    {
                                    stringBuffer!.append(this.TOTAL_ONDRAWS);
    
stringBuffer!.append(this.totalOnDraws.toString());
    
stringBuffer!.append(this.ONDRAWS_RATE);
    

    drawsOverTime: string = (this.totalOnDraws /totalTime).toString()!;;
    
stringBuffer!.append(drawsOverTime);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.NOT;
    

                        }
                            
}


};

            

