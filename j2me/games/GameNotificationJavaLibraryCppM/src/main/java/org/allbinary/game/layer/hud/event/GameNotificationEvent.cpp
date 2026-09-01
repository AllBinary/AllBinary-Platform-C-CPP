
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
        



            #include "../../../../../../java/lang/Integer.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameNotificationEvent: public AllBinaryEventObject {

    private: std::string string = StringUtil::getInstance().EMPTY_STRING;

    private: Integer seconds;

    private: BasicColor basicColor = BasicColorFactory::getInstance().BLACK;

    private: Boolean removeable;

public: GameNotificationEvent(Object* anyType, std::string string, Integer seconds, BasicColor basicColor, Boolean permanent){
            super(anyType);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setString(string);
    
this->seconds= seconds;
    
this->setBasicColorP(basicColor);
    
this->removeable= permanent;
    
}


    public: std::string getString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->string;
    
}


    public: Integer getSeconds(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->seconds;
    
}


    public: BasicColor getBasicColorP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->basicColor;
    
}


    public: Boolean getPermanent(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->removeable;
    
}


    public: void setString(std::string string){
this->string= string;
    
}


    public: void setBasicColorP(BasicColor basicColor){
this->basicColor= basicColor;
    
}


};

            

