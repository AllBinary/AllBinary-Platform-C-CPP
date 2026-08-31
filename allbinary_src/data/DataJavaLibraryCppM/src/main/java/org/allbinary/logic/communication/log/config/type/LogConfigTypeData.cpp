
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
        



            #include "../../../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LogConfigTypeData
            : public Object
         {
        

    private: static const instance: LogConfigTypeData = new LogConfigTypeData();

    public static LogConfigTypeData getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LogConfigTypeData.instance;
    
}


private constructor (){

            super();
        }


    public const NAME: string = "LOG_CONFIG_TYPE_NAME";

    public const DESCRIPTION: string = "LOG_CONFIG_TYPE_DESCRIPTION";

};

            

