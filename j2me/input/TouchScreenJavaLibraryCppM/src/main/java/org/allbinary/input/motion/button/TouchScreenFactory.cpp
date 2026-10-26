
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TouchScreenTypesFactory.h"
#include "TouchScreenType.h"

class TouchScreenFactory
            : public Object
         {

    private: static const TouchScreenFactory SINGLETON = TouchScreenFactory();

    public: static TouchScreenFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TouchScreenFactory::SINGLETON;
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: bool touch= false;

    private: bool multiTouch= false;

    private: bool multiTouchDistinct= false;

    private: TouchScreenType touchScreenType = TouchScreenTypesFactory::getInstance().NOTOUCH;

private: TouchScreenFactory(){

        try {
            this->setTouch(true);
    
this->setMultiTouch(false);
    

                //: 
} catch(e) 
            {

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put(commonStrings.EXCEPTION, TouchScreenFactory::SINGLETON, commonStrings.GET_INSTANCE, e);
    
}

}


    public: void setMultiTouch(bool multiTouch){
this->multiTouch= multiTouch;
    
}


    public: bool isMultiTouch(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->multiTouch;
    
}


    public: void setTouch(bool touch){
this->touch= touch;
    
}


    public: bool isTouch(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->touch;
    
}


    public: void setMultiTouchDistinct(bool multiTouchDistinct){
this->multiTouchDistinct= multiTouchDistinct;
    
}


    public: bool isMultiTouchDistinct(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->multiTouchDistinct;
    
}


    public: void setTouchScreenType(TouchScreenType touchScreenType){
this->touchScreenType= touchScreenType;
    
}


    public: TouchScreenType getTouchScreenType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->touchScreenType;
    
}


    public: std::string toString(){

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("TouchScreen: ");
    
stringBuffer.appendboolean(this->isTouch());
    
stringBuffer.append(" MultiTouch: ");
    
stringBuffer.appendboolean(this->isMultiTouch());
    
stringBuffer.append(" Distinct MultiTouch: ");
    
stringBuffer.appendboolean(this->isMultiTouchDistinct());
    
stringBuffer.append(" TouchScreenType: ");
    
stringBuffer.append(StringUtil::getInstance().toString(this->getTouchScreenType()));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


};

            

