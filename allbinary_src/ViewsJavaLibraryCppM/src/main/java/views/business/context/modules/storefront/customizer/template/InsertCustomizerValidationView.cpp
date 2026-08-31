
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
        



            #include "../../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/data/tables/transform/info/TransformInfoEntityBuilder.h>

      
#include <org/allbinary/logic/communication/http/request/RequestParams.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/visual/transform/TransformFactory.h>

      
#include <org/allbinary/logic/visual/transform/TransformInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/GeneratorTransformInfoData.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfo.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoData.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfosData.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>

      
#include <views/business/context/modules/storefront/customizer/template/objectConfig/InsertTemplateCustomizerTransformInfoObjectConfig.h>

      
#include <views/business/context/modules/storefront/customizer/template/objectConfig/NoTemplateTransformInfoObjectConfig.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //Sets Template Type
class InsertCustomizerValidationView: public HttpStoreComponentView: public ValidationComponentInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: viewName: string;

public constructor (TransformInfoInterface transformInfoInterface){
            super(transformInfoInterface);
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("View Name: " +transformInfoInterface!.getName(), this, this.commonStrings!.CONSTRUCTOR);
    

                                    }
                                

    requestHashMap: HashMap<any, any> = new RequestParams(this.getPageContext()).toHashMap()!;;
    
this.viewName= requestHashMap!.get(TransformInfoData.getInstance()!.NAME) as string;
    
}


    public Boolean isValid(){

        try {
            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("Started Validation", this, this.commonStrings!.IS_VALID);
    

                                    }
                                

    isValid: Boolean = Boolean.TRUE;;
    

                        if(StringValidationUtil.getInstance()!.isEmpty(this.viewName))
                        
                                    {
                                    isValid= Boolean.FALSE;
    

                                    }
                                
                        else {
                            
    objectConfig: NoTemplateTransformInfoObjectConfig = new NoTemplateTransformInfoObjectConfig(this.getTransformInfoInterface(), this.getTransformInfoInterface()!.getObjectConfigInterface()!.toXmlDoc());;
    

    componentVector: Vector = objectConfig!.getGroupTransforms()!;;
    

    size: int32_t = componentVector!.length!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Pointing ");
    
stringBuffer!.appendint(componentVector!.length);
    
stringBuffer!.append(" Components");
    
this.logUtil!.putF(stringBuffer!.toString(), this, this.commonStrings!.IS_VALID);
    

                                    }
                                




                        for (
    index: int32_t = 0;index < size; index++)
        {

    transformInfo: TransformInfo = componentVector!.get(index) as TransformInfo;;
    

    transformInfoName: string = transformInfo!.getName()!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("Setting Template Component with ViewName: " +transformInfoName, this, this.commonStrings!.IS_VALID);
    

                                    }
                                

    componentInterface: TransformInterface = TransformFactory.getInstance()!.getInstance(this.abeClientInformation, transformInfoName, this.getTransformInfoInterface())!;;
    

    templateViewObjectConfig: InsertTemplateCustomizerTransformInfoObjectConfig = new InsertTemplateCustomizerTransformInfoObjectConfig(componentInterface!.getTransformInfoInterface(), componentInterface!.getTransformInfoInterface()!.getObjectConfigInterface()!.toXmlDoc());;
    

    storeName: string = this.getTransformInfoInterface()!.getStoreName()!;;
    

    endIndex: int32_t = this.viewName!.indexOf(storeName) +storeName!.length;;
    

    storePrepend: string = this.viewName!.substring(0, endIndex)!;;
    

    viewNamePostfix: string = this.viewName!.substring(endIndex, this.viewName!.length)!;;
    

    newViewNameStringBuffer: StringMaker = new StringMaker();;
    
newViewNameStringBuffer!.append(storePrepend);
    

    commonSeps: CommonSeps = CommonSeps.getInstance()!;;
    

    transformInfosData: TransformInfosData = TransformInfosData.getInstance()!;;
    

                        if(transformInfoName!.indexOf(transformInfosData!.SMALL_PREVIEW) >= 0)
                        
                                    {
                                    newViewNameStringBuffer!.append(commonSeps!.SPACE);
    
newViewNameStringBuffer!.append(transformInfosData!.SMALL_PREVIEW);
    

                                    }
                                
                             else 
                        if(transformInfoName!.indexOf(transformInfosData!.PREVIEW) >= 0)
                        
                                    {
                                    newViewNameStringBuffer!.append(commonSeps!.SPACE);
    
newViewNameStringBuffer!.append(transformInfosData!.PREVIEW);
    

                                    }
                                
newViewNameStringBuffer!.append(commonSeps!.SPACE);
    
newViewNameStringBuffer!.append(viewNamePostfix);
    

                        if(transformInfoName!.indexOf(GeneratorTransformInfoData.NAME) >= 0)
                        
                                    {
                                    newViewNameStringBuffer!.append(commonSeps!.SPACE);
    
newViewNameStringBuffer!.append(GeneratorTransformInfoData.NAME);
    

                                    }
                                

    newViewName: string = newViewNameStringBuffer!.toString()!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Template Component: ");
    
stringBuffer!.append(transformInfoName);
    
stringBuffer!.append("\n Now Pointing To View Name: ");
    
stringBuffer!.append(newViewName);
    
this.logUtil!.putF(stringBuffer!.toString(), this, this.commonStrings!.IS_VALID);
    

                                    }
                                
templateViewObjectConfig!.set(newViewName);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Template Component: ");
    
stringBuffer!.append(transformInfoName);
    
stringBuffer!.append("\n with ObjectConfig: ");
    
stringBuffer!.append(templateViewObjectConfig!.toString());
    
this.logUtil!.putF(stringBuffer!.toString(), this, this.commonStrings!.IS_VALID);
    

                                    }
                                
componentInterface!.getTransformInfoInterface()!.setObjectConfigInterface(templateViewObjectConfig);
    

    updatedTransformInfoHashMap: HashMap<any, any> = componentInterface!.getTransformInfoInterface()!.toHashMap()!;;
    
TransformInfoEntityBuilder.getInstance()!.update(updatedTransformInfoHashMap);
    
}


                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return isValid;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEWERROR))
                        
                                    {
                                    this.logUtil!.put("Failed to validate", this, this.commonStrings!.IS_VALID, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.FALSE;
    
}

}


    public string validationInfo(){

        try {
            
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Error: Template Name Is Empty.");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEWERROR))
                        
                                    {
                                    this.logUtil!.put("Failed to generate validation error info", this, "validationInfo()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Error Getting Validation Info";
    
}

}


    public Document toValidationInfoDoc(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public Node toValidationInfoNode(Document document){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    public string view(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return views.ValidationOnlyTempUtil.getInstance()!.view(this);;
    
}


};

            

