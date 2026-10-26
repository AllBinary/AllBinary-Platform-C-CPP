
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
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class FullScreenUtil
            : public Object
         {

    private: static FullScreenUtil instance() { return FullScreenUtil(); }

    public: static FullScreenUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FullScreenUtil::instance();
    
}


                //@Throws(Exception.constructor)
            
    public: void initOnRun(Canvas fullScreenInterface, CommandListener commandListener){
}


    public: void init(Canvas fullScreenInterface){
}


    public: bool isScreenChange(bool isFullScreen){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: bool isScreenChangeCanvas(Canvas fullScreenInterface){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->isScreenChange(fullScreenInterface.isFullScreenMode());;
    
}


};

            

