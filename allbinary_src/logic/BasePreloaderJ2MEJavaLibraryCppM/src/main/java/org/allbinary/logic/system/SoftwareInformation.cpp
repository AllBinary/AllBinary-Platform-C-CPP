
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
        



            #include "../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/KotlinUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class SoftwareInformation
            : public Object
         {

    private: std::string name;

    private: std::string shortName;

    private: std::string version;

public: SoftwareInformation(std::string name, std::string version, std::string shortName){
this->name= name;
    
this->version= version;
    
this->shortName= StringMaker().append(shortName).append(KotlinUtil::getShortName()).toString();
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    public: std::string getVersion(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->version;
    
}


    public: std::string toShortString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->shortName;
    
}


    public: std::string toString(){

    std::string NAME = "Name: ";;
    

    std::string VERSION = "Version: ";;
    

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(NAME);
    
stringBuffer.append(this->getName());
    
stringBuffer.append(CommonSeps::getInstance().SPACE);
    
stringBuffer.append(VERSION);
    
stringBuffer.append(this->getVersion());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


};

            

