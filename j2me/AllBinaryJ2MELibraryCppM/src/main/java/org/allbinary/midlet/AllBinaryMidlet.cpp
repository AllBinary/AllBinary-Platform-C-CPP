
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
        



            #include "../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <java/util/Hashtable.h>

      
#include <javax/microedition/lcdui/Command.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <javax/microedition/lcdui/Display.h>

      
#include <javax/microedition/lcdui/Displayable.h>

      
#include <javax/microedition/lcdui/NullCanvas.h>

      
#include <javax/microedition/midlet/MIDlet.h>

      
#include <javax/microedition/midlet/MIDletStateChangeException.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/system/Memory.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        // MIDlet methods not overridden are final
class AllBinaryMidlet: public MIDlet: public CommandListener {
        

    private: static NULL_ALLBINARY_MIDLET: any = NullUtil.getInstance()!.NULL_OBJECT;

    public static AllBinaryMidlet getNullInstance(){

                        if(AllBinaryMidlet.NULL_ALLBINARY_MIDLET == NullUtil.getInstance()!.NULL_OBJECT)
                        
                                    {
                                    AllBinaryMidlet.NULL_ALLBINARY_MIDLET= new AllBinaryMidlet();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AllBinaryMidlet.NULL_ALLBINARY_MIDLET as AllBinaryMidlet;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const SET_DISPLAY: string = "setDisplay";

    private: const SETTING_: string = "Setting: ";

    private: const _DISPLAY_: string = " Display: ";

    private: const SETTING_NO_TITLE: string = "Setting: No Title, Display: ";

    private: hashtable: Hashtable<any, any> = new Hashtable<any, any>();

    private: midletDestroyed: bool= false;

public constructor (){

            super();
        this.logUtil!.putF(this.commonStrings!.CONSTRUCTOR, this, "AllBinaryMidlet::AllBinaryMidlet");
    
}


    setDisplay(Displayable newDisplay){

    title: string = StringUtil.getInstance()!.EMPTY_STRING;;
    

                        if(newDisplay != NullCanvas.NULL_CANVAS)
                        
                                    {
                                    title= newDisplay!.getTitle();
    

                        if(title != 
                                    null
                                )
                        
                                    {
                                    this.logUtil!.putF(new StringMaker().append(this.SETTING_)!.append(title)!.append(this._DISPLAY_)!.append(StringUtil.getInstance()!.toString(newDisplay))!.toString(), this, this.SET_DISPLAY);
    

                                    }
                                
                        else {
                            this.logUtil!.putF(new StringMaker().append(this.SETTING_NO_TITLE)!.append(StringUtil.getInstance()!.toString(newDisplay))!.toString(), this, this.SET_DISPLAY);
    

                        }
                            

                                    }
                                

    display: Display = this.getDisplay()!;;
    
display.setCurrent(newDisplay);
    
}


    public Display getDisplay(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Display.getDisplay(this);;
    
}


    Displayable getCurrentDisplayable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Display.getDisplay(this)!.getCurrent();;
    
}


    public setDestroyed(bool destroyed){
this.midletDestroyed= destroyed;
    
}


    public bool isDestroyed(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.midletDestroyed;
    
}


                //@Throws(MIDletStateChangeException.constructor)
            
    startApp(){
ForcedLogUtil.log(EventStrings.getInstance()!.PERFORMANCE_MESSAGE, this);
    
}


    pauseApp(){
ForcedLogUtil.log(EventStrings.getInstance()!.PERFORMANCE_MESSAGE, this);
    
}


    destroyAppInRunnable(bool unconditional, bool isProgress){
}


    destroyApp(bool unconditional){

    METHOD_NAME: string = "AllBinaryMidlet::destroyApp";;
    

        try {
            this.logUtil!.putF(this.commonStrings!.START, this, METHOD_NAME);
    
PreLogUtil.put(Memory.getInfo(), this, METHOD_NAME);
    
this.setDestroyed(true);
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, METHOD_NAME, e);
    
}

}


                //@Throws(Exception.constructor)
            
    public setStartStateHashtable(Hashtable<any, any> hashtable){
this.logUtil!.putF(new StringMaker().append(CommonLabels.getInstance()!.START_LABEL)!.append(StringUtil.getInstance()!.toString(hashtable))!.toString(), this, "setStartStateHashtable");
    
this.hashtable= hashtable;
    
}


                //@Throws(Exception.constructor)
            
    public Hashtable<any, any> getStartStateHashtable(){
this.logUtil!.putF(new StringMaker().append(CommonLabels.getInstance()!.START_LABEL)!.append(StringUtil.getInstance()!.toString(this.hashtable))!.toString(), this, "getStartStateHashtable");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.hashtable;
    
}


                //@Throws(Exception.constructor)
            
    public Hashtable<any, any> getCurrentStateHashtable(){
this.logUtil!.putF(this.commonStrings!.START, this, "getStateHashtable");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullUtil.getInstance()!.NULL_TABLE;
    
}


    public commandAction(Command command, Displayable displayable){
}


};

            

