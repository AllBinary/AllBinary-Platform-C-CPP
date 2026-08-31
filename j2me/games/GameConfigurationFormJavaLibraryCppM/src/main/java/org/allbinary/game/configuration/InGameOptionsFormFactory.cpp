
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/displayable/screen/CommandForm.h>

      
#include <org/allbinary/init/Init.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "InGameOptionsForm.h"

class InGameOptionsFormFactory
            : public Object
         {
        

    private: static instance: any = NullUtil.getInstance()!.NULL_OBJECT;

    public static InGameOptionsFormFactory getInstance(){

                        if(InGameOptionsFormFactory.instance == NullUtil.getInstance()!.NULL_OBJECT)
                        
                                    {
                                    InGameOptionsFormFactory.instance= new InGameOptionsFormFactory();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InGameOptionsFormFactory.instance as InGameOptionsFormFactory;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: SINGLETON: CommandForm = CommandForm.getNullCommandForm()!;

    public init(CommandListener commandListener, Init initInterface, string title, BasicColor backgrounBasicColor, BasicColor foregroundBasicColor){

        try {
            
                        if(this.SINGLETON == CommandForm.getNullCommandForm())
                        
                                    {
                                    initInterface!.init();
    
this.SINGLETON= new InGameOptionsForm(commandListener, title, backgrounBasicColor, foregroundBasicColor);
    

                                    }
                                

                //: 
} catch(e) 
            {

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.put(commonStrings!.EXCEPTION, this, commonStrings!.INIT, e);
    
}

}


    public CommandForm get(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.SINGLETON;
    
}


};

            

