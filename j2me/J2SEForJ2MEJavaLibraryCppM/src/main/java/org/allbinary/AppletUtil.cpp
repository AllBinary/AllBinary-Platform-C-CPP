
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //import org.allbinary.logic.communication.log.PreLogUtil;
class AppletUtil
            : public Object
         {

    private: static inline bool applet = false;

    public: static void setApplet(){
AppletUtil::applet= true;
    
}


    public: static bool isAppletLoader(Object* anyType){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AppletUtil::applet;
    
}


private: AppletUtil(){
}


};

            

