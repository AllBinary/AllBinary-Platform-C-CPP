
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
        



            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicEmailInfo.h"

class EmailInfo
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: basicEmailInfo: BasicEmailInfo;

    private: htmlAttachment: string;

    private: contentBase: string;

public constructor (BasicEmailInfo basicEmailInfo){

            super();
        
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.EMAILLOGGING))
                        
                                    {
                                    
    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.putF(commonStrings!.START, this, commonStrings!.CONSTRUCTOR);
    

                                    }
                                
this.init(basicEmailInfo, 
                            nullptr, 
                            nullptr);
    
}


public constructor (BasicEmailInfo basicEmailInfo, string htmlAttachment, string contentBase){

            super();
        
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.EMAILLOGGING))
                        
                                    {
                                    
    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.putF(commonStrings!.START, this, commonStrings!.CONSTRUCTOR);
    

                                    }
                                
this.init(basicEmailInfo, 
                            nullptr, 
                            nullptr);
    
}


    init(BasicEmailInfo basicEmailInfo, string htmlAttachment, string contentBase){
this.basicEmailInfo= basicEmailInfo;
    
this.htmlAttachment= htmlAttachment;
    
this.contentBase= contentBase;
    
}


    public BasicEmailInfo getBasicEmailInfo(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.basicEmailInfo;
    
}


    public string getHtmlAttachment(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.htmlAttachment;
    
}


    public string getContentBase(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.contentBase;
    
}


    public string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Email Info: \n " +this.getBasicEmailInfo()!.toString();
    
}


};

            

