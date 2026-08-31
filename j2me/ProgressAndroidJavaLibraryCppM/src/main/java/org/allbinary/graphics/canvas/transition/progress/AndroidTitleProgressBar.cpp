
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
        



            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/Runnable.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/android/activity/NullProgressActivity.h>

      
#include <org/allbinary/android/activity/ProgressActivityInterface.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ProgressCanvas.h"
//#include "ShowTitleProgressBarRunnable.h"
//#include "DismissTitleProgressBarRunnable.h"
//#include "TitleProgressBarPortionSetProgressRunnable.h"
//#include "TitleProgressBarSetProgressRunnable.h"

class AndroidTitleProgressBar: public ProgressCanvas {
        

//inner= member=true isStatic=
class TitleProgressBarSetProgressRunnable
            : public Object
        : public Runnable {
        

    private: const androidTitleProgressBar: AndroidTitleProgressBar;

 constructor (AndroidTitleProgressBar androidTitleProgressBar){

            super();
        this.androidTitleProgressBar= androidTitleProgressBar;
    
}


    public run(){

    logUtil: LogUtil = LogUtil.getInstance()!;;
    

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    

        try {
            
    value: int32_t = static_cast<int32_t>(this.androidTitleProgressBar!.getValue());;
    
this.androidTitleProgressBar!.progressActivity!.onTitleProgressBarSetProgress(value);
    

                //: 
} catch(e) 
            {
logUtil!.put(commonStrings!.EXCEPTION, this, commonStrings!.RUN, e);
    
}

}


};

            
//inner= member=true isStatic=
class TitleProgressBarPortionSetProgressRunnable
            : public Object
        : public Runnable {
        

    private: const androidTitleProgressBar: AndroidTitleProgressBar;

 constructor (AndroidTitleProgressBar androidTitleProgressBar){

            super();
        this.androidTitleProgressBar= androidTitleProgressBar;
    
}


    public run(){

    logUtil: LogUtil = LogUtil.getInstance()!;;
    

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    

        try {
            
    value: int32_t = static_cast<int32_t>((this.androidTitleProgressBar!.getValue() +this.androidTitleProgressBar!.getMaxValue() /this.androidTitleProgressBar!.portion));;
    
this.androidTitleProgressBar!.progressActivity!.onTitleProgressBarSetProgress(value);
    

                //: 
} catch(e) 
            {
logUtil!.put(commonStrings!.EXCEPTION, this, commonStrings!.RUN, e);
    
}

}


};

            
//inner= member=true isStatic=
class ShowTitleProgressBarRunnable
            : public Object
        : public Runnable {
        

    private: const androidTitleProgressBar: AndroidTitleProgressBar;

 constructor (AndroidTitleProgressBar androidTitleProgressBar){

            super();
        this.androidTitleProgressBar= androidTitleProgressBar;
    
}


    public run(){

    logUtil: LogUtil = LogUtil.getInstance()!;;
    

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    

        try {
            
    maxValue: int32_t = static_cast<int32_t>(this.androidTitleProgressBar!.getMaxValue());;
    
this.androidTitleProgressBar!.progressActivity!.onShowTitleProgressBar(maxValue, false);
    

                //: 
} catch(e) 
            {
logUtil!.put(commonStrings!.EXCEPTION, this, commonStrings!.RUN, e);
    
}

}


};

            
//inner= member=true isStatic=
class DismissTitleProgressBarRunnable
            : public Object
        : public Runnable {
        

    private: const androidTitleProgressBar: AndroidTitleProgressBar;

 constructor (AndroidTitleProgressBar androidTitleProgressBar){

            super();
        this.androidTitleProgressBar= androidTitleProgressBar;
    
}


    public run(){

    logUtil: LogUtil = LogUtil.getInstance()!;;
    

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    

        try {
            this.androidTitleProgressBar!.progressActivity!.onDismissTitleProgressBar();
    

                //: 
} catch(e) 
            {
logUtil!.put(commonStrings!.EXCEPTION, this, commonStrings!.RUN, e);
    
}

}


};

            
    private: showTitleProgressBarRunnable = new this.ShowTitleProgressBarRunnable(this);

    private: dismissTitleProgressBarRunnable = new this.DismissTitleProgressBarRunnable(this);

    private: progressDialogPortionSetProgressRunnable = new this.TitleProgressBarPortionSetProgressRunnable(this);

    private: progressDialogSetProgressRunnable = new this.TitleProgressBarSetProgressRunnable(this);

    private: progressActivity: ProgressActivityInterface = NullProgressActivity.NULL_PROGRESS_ACTIVITY;

    private: portion: int32_t = 0;

protected constructor (string title, BasicColor backgroundBasicColor, BasicColor foregroundBasicColor){
            super(title, backgroundBasicColor, foregroundBasicColor);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public init(ProgressActivityInterface activity){
this.progressActivity= activity;
    
}


    public bool isInitialized(){

                        if(this.progressActivity != NullProgressActivity.NULL_PROGRESS_ACTIVITY)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    public start(){

        try {
            this.logUtil!.putF(this.commonStrings!.START, this, this.commonStrings!.START_METHOD_NAME);
    
super.start();
    
this.progressActivity!.runOnUiThread(this.showTitleProgressBarRunnable);
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.commonStrings!.START_METHOD_NAME, e);
    
}

}


    public end(){

        try {
            this.logUtil!.putF(this.commonStrings!.START, this, this.commonStrings!.END_METHOD_NAME);
    
this.progressActivity!.runOnUiThread(this.dismissTitleProgressBarRunnable);
    
super.end();
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.commonStrings!.END_METHOD_NAME, e);
    
}

}


    public addPortion(int32_t value, string text, int32_t index){

        try {
            super.addPortion(value, text, index);
    
this.portion= value;
    
this.progressActivity!.runOnUiThread(this.progressDialogPortionSetProgressRunnable);
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.ADD_PORTION, e);
    
}

}


    public addNormalPortion(int32_t value, string text){

        try {
            super.addNormalPortion(value, text);
    
this.portion= value;
    
this.progressActivity!.runOnUiThread(this.progressDialogPortionSetProgressRunnable);
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.ADD_PORTION, e);
    
}

}


    setValue(int32_t value){

        try {
            super.setValue(value);
    
this.progressActivity!.runOnUiThread(this.progressDialogSetProgressRunnable);
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "setValue", e);
    
}

}


    public waitUntilDisplayed(){
}


    public paint(Graphics graphics){
}


};

            

