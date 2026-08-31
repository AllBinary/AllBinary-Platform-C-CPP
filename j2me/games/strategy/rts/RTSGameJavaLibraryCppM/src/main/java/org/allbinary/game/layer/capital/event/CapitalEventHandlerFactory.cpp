
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2003 AllBinary 
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
        



            #include "../../../../../../java/lang/Object.h"
        
#include <org/allbinary/game/identification/Group.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CapitalEventHandler.h"

class CapitalEventHandlerFactory
            : public Object
         {
        

    private: static const capitalEventHandlerArray: std::vector<CapitalEventHandler>;

                    static int32_t initResult = CapitalEventHandlerFactory::init();
                static int32_t init() { 
                    
capitalEventHandlerArray= new Array(10);
    




                        for (
    index: int32_t = CapitalEventHandlerFactory.capitalEventHandlerArray!.length -1;index >= 0; index--)
        {
CapitalEventHandlerFactory.capitalEventHandlerArray[index]= new CapitalEventHandler();
    
}



                    return 0;
                }
            
    public static CapitalEventHandler getInstance(Group groupInterface){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CapitalEventHandlerFactory.capitalEventHandlerArray[static_cast<int32_t>(groupInterface!.getGroupId();)]!;
    
}


    public static removeAll(){




                        for (
    index: int32_t = CapitalEventHandlerFactory.capitalEventHandlerArray!.length -1;index >= 0; index--)
        {
CapitalEventHandlerFactory.capitalEventHandlerArray[index]!.removeAllListeners();
    
}

}


};

            

