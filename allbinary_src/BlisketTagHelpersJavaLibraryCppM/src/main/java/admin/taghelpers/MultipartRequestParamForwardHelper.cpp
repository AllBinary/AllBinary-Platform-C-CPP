
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
        



            #include "../../java/lang/Object.h"
        
            #include "../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/globals/GLOBALS2.h>

      
#include <org/allbinary/logic/communication/http/request/RequestMapInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <tags/HelperTag.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "InventoryItemViewParentTagHelper.h"

class MultipartRequestParamForwardHelper
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const pageContext: PageContext;

    private: const requestMapInterface: RequestMapInterface;

    private: const page: string;

    private: const command: string;

    private: const paramVector: Vector;

public constructor (HelperTag parentHelperTag, string page, string command, Vector paramVector, PageContext pageContext){

            super();
        this.pageContext= pageContext;
    
this.page= page;
    
this.command= command;
    
this.paramVector= paramVector;
    
this.requestMapInterface= InventoryItemViewParentTagHelper.getInstance()!.getRequestMapInterface(parentHelperTag);
    
}


                //@Throws(Exception.constructor)
            
    public forward(){

        try {
            
                        if(this.shouldForward())
                        
                                    {
                                    
    params: string = this.getParams()!;;
    

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.page);
    
stringBuffer!.append(params);
    
this.pageContext!.forward(stringBuffer!.toString());
    

                                    }
                                

                //: 
} catch(e) 
            {

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.put(commonStrings!.EXCEPTION, this, "forward()", e);
    

                                    }
                                
}

}


    string getParams(){

    commonSeps: CommonSeps = CommonSeps.getInstance()!;;
    

    AMP: string = commonSeps!.AMPERSAND;;
    

    QUESTION: string = commonSeps!.QUESTION;;
    

    EQUALS: string = commonSeps!.EQUALS;;
    

    hashMap: HashMap<any, any> = this.requestMapInterface!.getRequestHashMap()!;;
    

    stringBuffer: StringMaker = new StringMaker();;
    

    size: int32_t = this.paramVector!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    key: string = this.paramVector!.get(index) as string;;
    

    value: string = hashMap!.get(key) as string;;
    

                        if(index != 0)
                        
                                    {
                                    stringBuffer!.append(AMP);
    

                                    }
                                
                        else {
                            stringBuffer!.append(QUESTION);
    

                        }
                            
stringBuffer!.append(key);
    
stringBuffer!.append(EQUALS);
    
stringBuffer!.append(value);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


    bool shouldForward(){

    hashMap: HashMap<any, any> = this.requestMapInterface!.getRequestHashMap()!;;
    

    requestCommand: string = hashMap!.get(GLOBALS2.ADMINCOMMAND) as string;;
    

                        if(StringValidationUtil.getInstance()!.isEmpty(this.command) || (!StringValidationUtil.getInstance()!.isEmpty(requestCommand) && this.command.compareTo(requestCommand) == 0))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


};

            

