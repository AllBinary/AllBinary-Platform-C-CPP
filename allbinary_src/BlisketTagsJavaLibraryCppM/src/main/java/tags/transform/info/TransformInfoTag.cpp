
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
        



            #include "../../../java/lang/Exception.h"
        
#include <javax/servlet/jsp/JspTagException.h>

      
#include <admin/taghelpers/TagHelperFactoryInterface.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/OutputTypeData.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoData.h>

      
#include <taghelpers/transform/info/TransformInfoRequestHelperFactory.h>

      
#include <tags/ModifyTag.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TransformInfoTag: public ModifyTag {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: name: string;

    private: storeName: string;

    private: objectFile: string;

    private: anyType: string;

    private: objectConfigFile: string;

    private: objectConfig: string;

    private: templateFile: string;

    private: template: string;

    private: dataFile: string;

    private: data: string;

    private: type: string;

public constructor (){
            super(new TransformInfoRequestHelperFactory());
                    

                            //For kotlin this is before the body of the constructor.
                    
}


public constructor (TagHelperFactoryInterface tagHelperFactoryInterface){
            super(tagHelperFactoryInterface);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public setName(string value){
this.name= value;
    
this.getPropertiesHashMap()!.put(TransformInfoData.getInstance()!.NAME, this.name);
    
}


    public setStoreName(string value){
this.storeName= value;
    
this.getPropertiesHashMap()!.put(StoreFrontData.getInstance()!.NAME, this.storeName);
    
}


    public setObjectFile(string value){
this.objectFile= value;
    
this.getPropertiesHashMap()!.put(TransformInfoData.getInstance()!.OBJECTFILENAME, this.objectFile);
    
}


    public setObject(string value){
this.anyType= value;
    
this.getPropertiesHashMap()!.put(TransformInfoData.getInstance()!.OBJECT, this.anyType);
    
}


    public setTemplateFile(string value){
this.templateFile= value;
    
this.getPropertiesHashMap()!.put(TransformInfoData.getInstance()!.TEMPLATEFILENAME, this.templateFile);
    
}


    public setTemplate(string value){
this.template= value;
    
this.getPropertiesHashMap()!.put(TransformInfoData.getInstance()!.TEMPLATE, this.template);
    
}


    public setDataFile(string value){
this.dataFile= value;
    
this.getPropertiesHashMap()!.put(TransformInfoData.getInstance()!.DATAFILENAME, this.dataFile);
    
}


    public setData(string value){
this.data= value;
    
this.getPropertiesHashMap()!.put(TransformInfoData.getInstance()!.DATA, this.data);
    
}


    public setObjectConfigFile(string value){
this.objectConfigFile= value;
    
this.getPropertiesHashMap()!.put(TransformInfoData.getInstance()!.OBJECTCONFIGFILENAME, this.objectConfigFile);
    
}


    public setObjectConfig(string value){
this.objectConfig= value;
    
this.getPropertiesHashMap()!.put(TransformInfoData.getInstance()!.OBJECTCONFIG, this.objectConfig);
    
}


    public setType(string value){
this.type= value;
    
this.getPropertiesHashMap()!.put(OutputTypeData.getInstance()!.NAME, this.type);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.JSPTAG))
                        
                                    {
                                    this.logUtil!.putF("TransformInfoTag type set: " +this.type, this, "setType");
    

                                    }
                                
}


    public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.name;
    
}


    public string getObjectFile(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.objectFile;
    
}


                //@Throws(JspTagException.constructor)
            
    public int32_t doStartTag(){

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.doStartTag();;
    

                //: 
} catch(e) 
            {
AbResponseHandler.sendJspTagRedirect(this.pageContext, e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SKIP_BODY;
    
}

}


};

            

