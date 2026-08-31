
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
        



            #include "../java/lang/Object.h"
        
            #include "../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>

      
#include <org/allbinary/logic/visual/transform/TransformFactory.h>

      
#include <org/allbinary/logic/visual/transform/TransformInterface.h>

      
#include <org/allbinary/logic/visual/transform/data/TransformDocumentInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ViewHelper
            : public Object
        : public TransformInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const abeClientInformation: AbeClientInformationInterface = ServiceClientInformationInterfaceFactory.getInstance()!;

    private: componentInterface: TransformInterface;

public constructor (HashMap<any, any> hashMap, PageContext pageContext){

            super();
        this.componentInterface= TransformFactory.getInstance()!.getInstance(this.abeClientInformation, hashMap, pageContext);
    
}


    public NO_TYPE: int32_t = 0;

    public int32_t getTypeId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.NO_TYPE;
    
}


                //@Throws(Exception.constructor)
            
    public string view(){

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.componentInterface!.view();;
    

                //: 
} catch(e) 
            {

    error: string = "Failed to View: ";;
    

                        if(this.componentInterface != 
                                    null
                                )
                        error += this.componentInterface!.constructor.name.toString()!
                             else 
                        if()
                        

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "view()", e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    public Document toXmlDoc(){

        try {
            


                            throw new Exception("Hmm: " +this.componentInterface!.getTransformDocumentInterface()!.getDoc());
                    

                //: 
} catch(e) 
            {

    error: string = "Failed to View: ";;
    

                        if(this.componentInterface != 
                                    null
                                )
                        error += this.componentInterface!.constructor.name.toString()!
                             else 
                        if()
                        

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "view()", e);
    

                                    }
                                



                            throw e;
                    
}

}


    public TransformInterface getViewObject(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.componentInterface;
    
}


                //@Throws(Exception.constructor)
            
    public TransformInfoInterface getTransformInfoInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.componentInterface!.getTransformInfoInterface();;
    
}


    public TransformDocumentInterface getTransformDocumentInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public setTransformDocumentInterface(TransformDocumentInterface viewDocumentInterface){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    
}


};

            

