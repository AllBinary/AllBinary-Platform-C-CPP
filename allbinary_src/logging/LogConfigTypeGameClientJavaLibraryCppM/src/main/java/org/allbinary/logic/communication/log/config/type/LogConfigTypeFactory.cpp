
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



            #include "../../../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LogConfigType.h"
#include "LogConfigTypes.h"

class LogConfigTypeFactory
            : public Object
         {
        

    private: static const instance: LogConfigTypeFactory = new LogConfigTypeFactory();

    public static LogConfigTypeFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LogConfigTypeFactory.instance;
    
}


    private: const NO_DESCRIPTION: string = "No Description";

    public const OS: LogConfigType = new LogConfigType("Operating System", this.NO_DESCRIPTION);

    public const FACTORYERROR: LogConfigType = new LogConfigType("Factory Error", this.NO_DESCRIPTION);

private constructor (){

            super();
        LogConfigTypes.LOGGING.add(OS);
    
LogConfigTypes.LOGGING.add(this.FACTORYERROR);
    
}


};

            

