
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
        

    private: static const instance: GuiLog = new GuiLog();

    public static GuiLog getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GuiLog.instance;
    
}


    private: const logFormatUtil: LogFormatUtil = LogFormatUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

private constructor (){

            super();
        }

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public showDialog(string msg){

    error: JDialog = new JDialog();;
    

    size: int32_t = msg.length *9;;
    

    x: int32_t = size;;
    

                        if(x > 550)
                        x= 550
error.getContentPane()!.setLayout(new GridLayout(1, 1));
    

                        if(size > 255)
                        
                                    {
                                    
    y: int32_t = 550;;
    
error.setSize(x, y);
    
error.getContentPane()!.add(new javax.swing.JScrollPane(new javax.swing.JTextArea(msg)));
    

                                    }
                                
                             else 
                        if(size > 0)
                        
                                    {
                                    
    y: int32_t = 50;;
    
error.setSize(x, y);
    
error.getContentPane()!.add(new javax.swing.JScrollPane(new javax.swing.JLabel(msg)));
    

                                    }
                                
error.show();
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public string put(string specialMessage, any = {} anyType, string functionName){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.put(specialMessage, anyType, functionName, 
                            nullptr);;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public string put(string specialMessage, any = {} anyType, string functionName, Exception exception){

        try {
            
    data: string = this.logFormatUtil!.get(specialMessage, anyType!.constructor.name.toString()!, functionName, exception)!;;
    
this.showDialog(data);
    
console.log(data);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return data;
    

                //: 
} catch(e) 
            {
PreLogUtil.putOE(this.commonStrings!.EXCEPTION, this, "put", e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Logging Error";
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public string put(string specialMessage, string className, string functionName){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.put(specialMessage, className, functionName, 
                            nullptr);;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public string put(string specialMessage, string className, string functionName, Exception exception){

        try {
            
    data: string = this.logFormatUtil!.get(specialMessage, className, functionName, exception)!;;
    
this.showDialog(data);
    
console.log(data);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return data;
    

                //: 
} catch(e) 
            {
PreLogUtil.putOE(this.commonStrings!.EXCEPTION, this, "put", e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Logging Error";
    
}

}


};

            

