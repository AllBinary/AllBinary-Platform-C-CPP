
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Class.h"
        
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/communication/log/LogFormatUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class Log
            : public Object
         {

    private: const LogFormatUtil logFormatUtil = LogFormatUtil::getInstance();

    private: std::string specialMessage;

    private: Object* anyType;

    private: std::string functionName;

    private: Object* exception;

public: Log(std::string specialMessage, Object* anyType, std::string functionName, Object* exception){
this->specialMessage= specialMessage;
    
this->anyType= anyType;
    
this->functionName= functionName;
    
this->exception= exception;
    
}


    public: std::string getSpecialMessage(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->specialMessage;
    
}


    public: Object* getObject(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->anyType;
    
}


    public: std::string getFunctionName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->functionName;
    
}


    public: Object* getThrowable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->exception;
    
}


    public: std::string toString(){

    std::string className = CommonStrings::getInstance().EMPTY;;
    

    Function clazz = this->anyType.constructor;;
    

                        if(clazz.toString()! != 
                                    nullptr
                                )
                        
                                    {
                                    className= clazz.toString()!;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->logFormatUtil.get(className, this->functionName, this->specialMessage, this->exception);;
    
}


};

            

