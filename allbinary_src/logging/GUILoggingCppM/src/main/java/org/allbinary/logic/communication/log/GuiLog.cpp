
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
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/System.h"
        
#include <java/awt.h>

      
#include <javax/swing.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LogFormatUtil.h"
#include "JDialog.h"
#include "GridLayout.h"
#include "JScrollPane.h"
#include "JLabel.h"
#include "JTextArea.h"
#include "PreLogUtil.h"

class GuiLog
            : public Object
         {

    private: static GuiLog instance() { return GuiLog(); }

    public: static GuiLog getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GuiLog::instance();
    
}


    private: const LogFormatUtil logFormatUtil = LogFormatUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

private: GuiLog(){
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void showDialog(std::string msg){

    JDialog error = JDialog();;
    

    int32_t size = msg.size() *9;;
    

    int32_t x = size;;
    

                        if(x > 550)
                        x= 550;
                                
error.getContentPane().setLayout(GridLayout(1, 1));
    

                        if(size > 255)
                        
                                    {
                                    
    int32_t y = 550;;
    
error.setSize(x, y);
    
error.getContentPane().add(javax::swing::JScrollPane(javax::swing::JTextArea(msg)));
    

                                    }
                                
                             else 
                        if(size > 0)
                        
                                    {
                                    
    int32_t y = 50;;
    
error.setSize(x, y);
    
error.getContentPane().add(javax::swing::JScrollPane(javax::swing::JLabel(msg)));
    

                                    }
                                
error.show();
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: std::string put(std::string specialMessage, Object* anyType, std::string functionName){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->put(specialMessage, anyType, functionName, 
                            nullptr);;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: std::string put(std::string specialMessage, Object* anyType, std::string functionName, Exception exception){

        try {
            
    std::string data = this->logFormatUtil.get(specialMessage, anyType->constructor.name.toString()!, functionName, exception);;
    
this->showDialog(data);
    
console.log(data);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return data;
    

                //: 
} catch(e) 
            {
PreLogUtil::putOE(this->commonStrings.EXCEPTION, this, "put", e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Logging Error";
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: std::string put(std::string specialMessage, std::string className, std::string functionName){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->put(specialMessage, className, functionName, 
                            nullptr);;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: std::string put(std::string specialMessage, std::string className, std::string functionName, Exception exception){

        try {
            
    std::string data = this->logFormatUtil.get(specialMessage, className, functionName, exception);;
    
this->showDialog(data);
    
console.log(data);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return data;
    

                //: 
} catch(e) 
            {
PreLogUtil::putOE(this->commonStrings.EXCEPTION, this, "put", e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Logging Error";
    
}

}


};

            

