
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
        



        #ifndef ORG_ALLBINARY_MIDLET_ALLBINARYMIDLET_CPP
        #define ORG_ALLBINARY_MIDLET_ALLBINARYMIDLET_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/midlet/AllBinaryMidlet.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
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
        
Object* AllBinaryMidlet::NULL_ALLBINARY_MIDLET = NullUtil::getInstance()->NULL_OBJECT;

    auto AllBinaryMidlet::getNullInstance() -> AllBinaryMidlet*{

                        if(AllBinaryMidlet::NULL_ALLBINARY_MIDLET == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    AllBinaryMidlet::NULL_ALLBINARY_MIDLET= new AllBinaryMidlet();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<AllBinaryMidlet*>(AllBinaryMidlet::NULL_ALLBINARY_MIDLET);
    
}


AllBinaryMidlet::AllBinaryMidlet() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), hashtable(StdUtil::getInstance()->createHashtable()){
this->logUtil->putF(this->commonStrings->CONSTRUCTOR, this, "AllBinaryMidlet::AllBinaryMidlet");
    
}


    auto AllBinaryMidlet::setDisplay(Displayable* newDisplay) -> void{

    std::string title = StringUtil::getInstance()->EMPTY_STRING;;
    

                        if(newDisplay != NullCanvas::NULL_CANVAS)
                        
                                    {
                                    title= newDisplay->getTitle();
    

                        if(true)
                        
                                    {
                                    this->logUtil->putF((new StringMaker())->append(this->SETTING_)->append(title)->append(this->_DISPLAY_)->append(StringUtil::getInstance()->toString(newDisplay))->toString(), this, this->SET_DISPLAY);
    

                                    }
                                
                        else {
                            this->logUtil->putF((new StringMaker())->append(this->SETTING_NO_TITLE)->append(StringUtil::getInstance()->toString(newDisplay))->toString(), this, this->SET_DISPLAY);
    

                        }
                            

                                    }
                                

    Display* display = this->getDisplay();;
    
display->setCurrent(newDisplay);
    
}


    auto AllBinaryMidlet::getDisplay() -> Display*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Display::getDisplay(this);;
    
}


    auto AllBinaryMidlet::getCurrentDisplayable() -> Displayable*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Display::getDisplay(this)->getCurrent();;
    
}


    auto AllBinaryMidlet::setDestroyed(bool destroyed) -> void{
this->midletDestroyed= destroyed;
    
}


    auto AllBinaryMidlet::isDestroyed() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->midletDestroyed;
    
}


                //@Throws(MIDletStateChangeException.constructor)
            
    auto AllBinaryMidlet::startApp() -> void{
ForcedLogUtil::log(EventStrings::getInstance()->PERFORMANCE_MESSAGE, this);
    
}


    auto AllBinaryMidlet::pauseApp() -> void{
ForcedLogUtil::log(EventStrings::getInstance()->PERFORMANCE_MESSAGE, this);
    
}


    auto AllBinaryMidlet::destroyAppInRunnable(bool unconditional, bool isProgress) -> void{
}


    auto AllBinaryMidlet::destroyApp(bool unconditional) -> void{

    std::string METHOD_NAME = "AllBinaryMidlet::destroyApp";;
    

        try {
            this->logUtil->putF(this->commonStrings->START, this, METHOD_NAME);
    
PreLogUtil::put(Memory::getInfo(), this, METHOD_NAME);
    
this->setDestroyed(true);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, METHOD_NAME, &e);
    
}

}


                //@Throws(Exception.constructor)
            
    auto AllBinaryMidlet::setStartStateHashtable(ABHashtable<Object*, Object*>* hashtable) -> void{
this->logUtil->putF((new StringMaker())->append(CommonLabels::getInstance()->START_LABEL)->append(StringUtil::getInstance()->toString(hashtable))->toString(), this, "setStartStateHashtable");
    
this->hashtable= hashtable;
    
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryMidlet::getStartStateHashtable() -> ABHashtable<Object*, Object*>*{
this->logUtil->putF((new StringMaker())->append(CommonLabels::getInstance()->START_LABEL)->append(StringUtil::getInstance()->toString(this->hashtable))->toString(), this, "getStartStateHashtable");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->hashtable;
    
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryMidlet::getCurrentStateHashtable() -> ABHashtable<Object*, Object*>*{
this->logUtil->putF(this->commonStrings->START, this, "getStateHashtable");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return StdUtil::getInstance()->NULL_TABLE;
    
}


    auto AllBinaryMidlet::commandAction(Command* command, Displayable* displayable) -> void{
}




        #endif //ORG_ALLBINARY_MIDLET_ALLBINARYMIDLET_CPP
