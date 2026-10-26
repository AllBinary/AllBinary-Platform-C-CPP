
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
        



            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/thread/ARunnable.h>

      
#include <org/allbinary/image/gui/ImageToolJFrame.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "EventQueue.h"

class ImageTool
            : public Object
         {

    public: static void main(std::vector<std::string> args){
java.awt.EventQueue.invokeLater(class extends ARunnable
                                {
                                
    public: void run(){

    LogUtil logUtil = LogUtil::getInstance();;
    

    CommonStrings commonStrings = CommonStrings::getInstance();;
    

        try {
            logUtil.putF(commonStrings.START, this, commonStrings.RUN);
    
ImageToolJFrame().setVisible(true);
    

                //: 
} catch(e) 
            {
logUtil.put(commonStrings.EXCEPTION, this, commonStrings.RUN, e);
    
}

}

                                }
                            );
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

public: ImageTool(){
}


};

            

