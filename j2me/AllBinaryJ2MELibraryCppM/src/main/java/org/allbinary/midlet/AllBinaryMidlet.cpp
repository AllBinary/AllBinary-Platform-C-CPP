
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
        



            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Command.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <javax/microedition/lcdui/Display.h>

      
#include <javax/microedition/lcdui/Displayable.h>

      
#include <javax/microedition/lcdui/NullCanvas.h>

      
#include <javax/microedition/midlet/MIDlet.h>

      
#include <javax/microedition/midlet/MIDletStateChangeException.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/system/Memory.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AllBinaryMidlet: public MIDlet, public CommandListener {

    private: static Object* NULL_ALLBINARY_MIDLET = NullUtil::getInstance().NULL_OBJECT;

    public: static AllBinaryMidlet getNullInstance(){

                        if(AllBinaryMidlet::NULL_ALLBINARY_MIDLET == NullUtil::getInstance().NULL_OBJECT)
                        
                                    {
                                    AllBinaryMidlet::NULL_ALLBINARY_MIDLET= AllBinaryMidlet();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AllBinaryMidlet::NULL_ALLBINARY_MIDLET;
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const std::string SET_DISPLAY = "setDisplay";

    private: const std::string SETTING_ = "Setting: ";

    private: const std::string _DISPLAY_ = " Display: ";

    private: const std::string SETTING_NO_TITLE = "Setting: No Title, Display: ";

    private: ABHashtable<Object*, Object*> hashtable = StdUtil::getInstance().createHashtable();

    private: bool midletDestroyed= false;

public: AllBinaryMidlet(){
this->logUtil.putF(this->commonStrings.CONSTRUCTOR, this, "AllBinaryMidlet::AllBinaryMidlet");
    
}


    protected: void setDisplay(Displayable newDisplay){

    std::string title = StringUtil::getInstance().EMPTY_STRING;;
    

                        if(newDisplay != NullCanvas::NULL_CANVAS)
                        
                                    {
                                    title= newDisplay.getTitle();
    

                        if(true)
                        
                                    {
                                    this->logUtil.putF(StringMaker().append(this->SETTING_).append(title).append(this->_DISPLAY_).append(StringUtil::getInstance().toString(newDisplay)).toString(), this, this->SET_DISPLAY);
    

                                    }
                                
                        else {
                            this->logUtil.putF(StringMaker().append(this->SETTING_NO_TITLE).append(StringUtil::getInstance().toString(newDisplay)).toString(), this, this->SET_DISPLAY);
    

                        }
                            

                                    }
                                

    Display display = this->getDisplay();;
    
display.setCurrent(newDisplay);
    
}


    public: Display getDisplay(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Display::getDisplay(this);;
    
}


    protected: Displayable getCurrentDisplayable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Display::getDisplay(this).getCurrent();;
    
}


    public: void setDestroyed(bool destroyed){
this->midletDestroyed= destroyed;
    
}


    public: bool isDestroyed(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->midletDestroyed;
    
}


                //@Throws(MIDletStateChangeException.constructor)
            
    protected: void startApp(){
ForcedLogUtil::log(EventStrings::getInstance().PERFORMANCE_MESSAGE, this);
    
}


    protected: void pauseApp(){
ForcedLogUtil::log(EventStrings::getInstance().PERFORMANCE_MESSAGE, this);
    
}


    protected: void destroyAppInRunnable(bool unconditional, bool isProgress){
}


    protected: void destroyApp(bool unconditional){

    std::string METHOD_NAME = "AllBinaryMidlet::destroyApp";;
    

        try {
            this->logUtil.putF(this->commonStrings.START, this, METHOD_NAME);
    
PreLogUtil::put(Memory::getInfo(), this, METHOD_NAME);
    
this->setDestroyed(true);
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, METHOD_NAME, e);
    
}

}


                //@Throws(Exception.constructor)
            
    public: void setStartStateHashtable(ABHashtable<Object*, Object*> hashtable){
this->logUtil.putF(StringMaker().append(CommonLabels::getInstance().START_LABEL).append(StringUtil::getInstance().toString(hashtable)).toString(), this, "setStartStateHashtable");
    
this->hashtable= hashtable;
    
}


                //@Throws(Exception.constructor)
            
    public: ABHashtable<Object*, Object*> getStartStateHashtable(){
this->logUtil.putF(StringMaker().append(CommonLabels::getInstance().START_LABEL).append(StringUtil::getInstance().toString(this->hashtable)).toString(), this, "getStartStateHashtable");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->hashtable;
    
}


                //@Throws(Exception.constructor)
            
    public: ABHashtable<Object*, Object*> getCurrentStateHashtable(){
this->logUtil.putF(this->commonStrings.START, this, "getStateHashtable");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StdUtil::getInstance().NULL_TABLE;
    
}


    public: void commandAction(Command command, Displayable displayable){
}


};

            

