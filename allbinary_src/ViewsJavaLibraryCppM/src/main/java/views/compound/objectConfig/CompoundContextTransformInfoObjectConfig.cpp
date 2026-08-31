
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
        
#include <java/io/ByteArrayInputStream.h>

      
#include <java/io/InputStream.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/data/tree/dom/document/DocumentToNode.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/regex/replace/Replace.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/visual/transform/TransformFactory.h>

      
#include <org/allbinary/logic/visual/transform/TransformInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/RootTransformInfoData.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoData.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoDomNode.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/GenericStoreTransformInfoObjectConfig.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/w3c/dom/Document.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CompoundContextTransformInfoObjectConfig: public GenericStoreTransformInfoObjectConfig {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

public constructor (Object abeClientInformation, Object transformInfoInterface){
            super(abeClientInformation, transformInfoInterface);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


public constructor (Object abeClientInformation, Object transformInfoInterface, Object document){
            super(abeClientInformation, transformInfoInterface, document);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.setDocument(this.generate(this.toXmlDoc()));
    
}


public constructor (Object abeClientInformation, Object transformInfoInterface, string name, string type){
            super(abeClientInformation, transformInfoInterface, name, type);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.setDocument(this.generate(this.toXmlDoc()));
    
}


                //@Throws(Exception.constructor)
            
    public string get(){

    storeName: string = this.getTransformInfoInterface()!.getStoreName()!;;
    

    httpTransformInfoInterface: TransformInfoHttpInterface = this.getTransformInfoInterface() as TransformInfoHttpInterface;;
    

    templateNameOverride: string = StringUtil.getInstance()!.getNonNull(httpTransformInfoInterface!.getPropertiesHashMap()!.get(TransformInfoData.getInstance()!.PARTIAL) as string)!;;
    

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(storeName);
    
stringBuffer!.append(templateNameOverride);
    
stringBuffer!.append(CommonSeps.getInstance()!.SPACE);
    
stringBuffer!.append(RootTransformInfoData.NAME);
    

    rootComponentInterface: TransformInterface = TransformFactory.getInstance()!.getInstance(abeClientInformation, stringBuffer!.toString(), this.getTransformInfoInterface())!;;
    

    viewVector: Vector = this.getTransformDomNodes()!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("Root View Called with: " +viewVector!.length, this, "get(transformInfoInterface)");
    

                                    }
                                

    rootView: string = rootComponentInterface!.view()!;;
    

    startXMLHeader: string = "<xsl:text disable-output-escaping=\"yes\" ><![CDATA[";;
    

    endXMLHeader: string = "]]></xsl:text>";;
    

    size: int32_t = viewVector!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    objectConfigTransformInfoDomNode: TransformInfoDomNode = viewVector!.get(index) as TransformInfoDomNode;;
    

    templateKey: string = objectConfigTransformInfoDomNode!.getReplaceKey()!;;
    

    componentInterface: TransformInterface = TransformFactory.getInstance()!.getInstance(abeClientInformation, objectConfigTransformInfoDomNode!.getTransformInfoInterface()!.getName(), this.getTransformInfoInterface())!;;
    

    replacementViewString: string = componentInterface!.view()!;;
    
replacementViewString= DocumentToNode.convertDocumentToNodeString(replacementViewString);
    
stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append(startXMLHeader);
    
stringBuffer!.append(replacementViewString);
    
stringBuffer!.append(endXMLHeader);
    

    templateValue: string = stringBuffer!.toString()!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append("Replacing: ");
    
stringBuffer!.append(templateKey);
    
stringBuffer!.append(" with ");
    
stringBuffer!.append(templateValue);
    
this.logUtil!.putF(stringBuffer!.toString(), this, "get()");
    

                                    }
                                

    replace: Replace = new Replace(templateKey, templateValue);;
    
rootView= replace.all(rootView);
    
}


                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("End: Result of a compound view: " +rootView, this, "get()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return rootView;
    
}


                //@Throws(Exception.constructor)
            
    public InputStream createInputStream(){

    completeTemplateViewBytes: std::vector<int8_t> = this.get()!.getBytes()!;;
    

    bais: ByteArrayInputStream = new ByteArrayInputStream(completeTemplateViewBytes);;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("Template: " +String.fromCharCode(...completeTemplateViewBytes).toString(), this, "createInputStream()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return bais;
    
}


};

            

