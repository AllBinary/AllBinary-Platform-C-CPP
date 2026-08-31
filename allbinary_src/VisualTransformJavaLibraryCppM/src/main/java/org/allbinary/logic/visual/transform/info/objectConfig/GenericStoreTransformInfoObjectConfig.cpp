
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

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/regex/replace/Replace.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/RootTransformInfoData.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoData.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttp.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/template/TransformTemplateFactory.h>

      
#include <org/allbinary/logic/visual/transform/template/TransformTemplateInterface.h>

      
#include <org/allbinary/logic/visual/transform/template/util/TransformTemplateCustomizerUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/w3c/dom/Document.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TransformInfoObjectConfig.h"
#include "TransformInfoObjectConfigData.h"

class GenericStoreTransformInfoObjectConfig: public TransformInfoObjectConfig {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const abeClientInformation: AbeClientInformationInterface;

public constructor (Object abeClientInformation, Object transformInfoInterface){
            super(transformInfoInterface);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.abeClientInformation= abeClientInformation;
    
}


public constructor (Object abeClientInformation, Object transformInfoInterface, Object document){
            super(transformInfoInterface, document);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.abeClientInformation= abeClientInformation;
    
this.setDocument(this.generate(this.toXmlDoc()));
    
}


public constructor (Object abeClientInformation, Object transformInfoInterface, string name, string type){
            super(transformInfoInterface, name, type);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.abeClientInformation= abeClientInformation;
    
this.setDocument(this.generate(this.toXmlDoc()));
    
}


                //@Throws(Exception.constructor)
            
    Document generate(Document objectConfigDocument){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("TransformInfo: ");
    

                        if(this.getTransformInfoInterface() != 
                                    null
                                )
                        
                                    {
                                    stringBuffer!.append(this.getTransformInfoInterface()!.getName());
    

                                    }
                                
                        else {
                            stringBuffer!.append("No Owner!?#@");
    

                        }
                            
this.logUtil!.putF(stringBuffer!.toString(), this, "generate()");
    

                                    }
                                

    transformInfoHttpStoreInterface: TransformInfoHttp = this.getTransformInfoInterface() as TransformInfoHttp;;
    

    objectConfigDocumentString: string = DomDocumentHelper.toString(objectConfigDocument)!;;
    

    replaceHashMap: HashMap<any, any> = this.createReplaceHashMap(transformInfoHttpStoreInterface, objectConfigDocumentString)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.generate(objectConfigDocumentString, replaceHashMap);;
    
}


                //@Throws(Exception.constructor)
            
    HashMap<any, any> createReplaceHashMap(TransformInfoHttp transformInfoHttpStoreInterface, string objectConfigDocumentString){

    storeName: string = transformInfoHttpStoreInterface!.getStoreName()!;;
    

    hashMap: HashMap<any, any> = this.createHashMap(transformInfoHttpStoreInterface, objectConfigDocumentString)!;;
    

    transformInfoObjectConfigData: TransformInfoObjectConfigData = TransformInfoObjectConfigData.getInstance()!;;
    
hashMap!.put(transformInfoObjectConfigData!.VARKEY +StoreFrontData.getInstance()!.NAME, storeName);
    

    pageName: string = TransformTemplateCustomizerUtil.getInstance()!.getPageNameHack(this.getTransformInfoInterface()!.getName(), storeName)!;;
    
hashMap!.put(transformInfoObjectConfigData!.VARKEY +TransformInfoData.getInstance()!.PARTIAL, pageName);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    HashMap<any, any> createHashMap(TransformInfoHttp transformInfoHttpStoreInterface, string objectConfigDocumentString){

    hashMap: HashMap<any, any> = new HashMap<any, any>();;
    

    storeName: string = transformInfoHttpStoreInterface!.getStoreName()!;;
    

    propertiesHashMap: HashMap<any, any> = transformInfoHttpStoreInterface!.getPropertiesHashMap()!;;
    

    templateNameOverride: string = StringUtil.getInstance()!.getNonNull(propertiesHashMap!.get(TransformInfoData.getInstance()!.PARTIAL) as string)!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("TemplateNameOverride: " +templateNameOverride, this, "generate()");
    

                                    }
                                

    templateNameStringBuffer: StringMaker = new StringMaker();;
    
templateNameStringBuffer!.append(storeName);
    
templateNameStringBuffer!.append(templateNameOverride);
    
templateNameStringBuffer!.append(CommonSeps.getInstance()!.SPACE);
    
templateNameStringBuffer!.append(RootTransformInfoData.NAME);
    

    templateNameKey: string = TransformInfoObjectConfigData.getInstance()!.VARKEY +TransformInfoData.getInstance()!.OWNER;;
    

                        if(objectConfigDocumentString!.indexOf(templateNameKey) !=  -1)
                        
                                    {
                                    
    templateInterface: TransformTemplateInterface = TransformTemplateFactory.getInstance()!.getInstance(this.abeClientInformation, templateNameStringBuffer!.toString(), transformInfoHttpStoreInterface!.getPropertiesHashMap(), transformInfoHttpStoreInterface!.getPageContext())!;;
    

    selectedTemplate: string = templateInterface!.getName()!;;
    
hashMap!.put(templateNameKey, selectedTemplate);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    Document generate(string objectConfigDocumentString, HashMap<any, any> hashMap){

    replace: Replace = new Replace(hashMap);;
    

    newObjectConfigDocument: Document = DomDocumentHelper.create(replace.all(objectConfigDocumentString))!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("Final ObjectConfig: " +DomDocumentHelper.toString(newObjectConfigDocument), this, "generate()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newObjectConfigDocument;
    
}


};

            

