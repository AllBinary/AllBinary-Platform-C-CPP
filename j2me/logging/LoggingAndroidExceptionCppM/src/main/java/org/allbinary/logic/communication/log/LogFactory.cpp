
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
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Log.h"
//ActualPlatform
/*actual*/ class LogFactory
            : public Object
         {

    /*actual*/ public: static Log getInstance(std::string specialMessage, Object* anyType, std::string functionName, Object* exception){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Log(specialMessage, anyType, functionName, exception);
    
}


    /*actual*/ public: static Log getInstanceF(std::string specialMessage, Object* anyType, std::string functionName){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    /*actual*/ public: static Log getInstanceSE(std::string specialMessage, std::string className, std::string functionName, Object* exception){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LogFactory::getInstance(specialMessage, className, functionName, exception);;
    
}


};

            

