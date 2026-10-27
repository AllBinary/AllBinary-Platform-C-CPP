
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
        



            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/io/ByteArrayInputStream.h>

      
#include <java/io/InputStream.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
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

    protected: LogUtil* logUtil = LogUtil::getInstance();

public: CompoundContextTransformInfoObjectConfig(Object* abeClientInformation, Object* transformInfoInterface) : GenericStoreTransformInfoObjectConfig(abeClientInformation, transformInfoInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


public: CompoundContextTransformInfoObjectConfig(Object* abeClientInformation, Object* transformInfoInterface, Object* document) : GenericStoreTransformInfoObjectConfig(abeClientInformation, transformInfoInterface, document){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setDocument(this->generate(this->toXmlDoc()));
    
}


public: CompoundContextTransformInfoObjectConfig(Object* abeClientInformation, Object* transformInfoInterface, std::string name, std::string type) : GenericStoreTransformInfoObjectConfig(abeClientInformation, transformInfoInterface, name, type){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setDocument(this->generate(this->toXmlDoc()));
    
}


                //@Throws(Exception.constructor)
            
    public: std::string get(){

    std::string storeName = this->getTransformInfoInterface()->getStoreName();;
    

    TransformInfoHttpInterface* httpTransformInfoInterface = dynamic_cast<TransformInfoHttpInterface*>(this->getTransformInfoInterface());;
    

    std::string templateNameOverride = StringUtil::getInstance()->getNonNull(httpTransformInfoInterface->getPropertiesHashMap()->get(TransformInfoData::getInstance()->PARTIAL));;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(storeName);
    
stringBuffer->append(templateNameOverride);
    
stringBuffer->append(CommonSeps::getInstance()->SPACE);
    
stringBuffer->append(RootTransformInfoData::NAME);
    

    TransformInterface* rootComponentInterface = TransformFactory::getInstance()->getInstance(abeClientInformation, stringBuffer->toString(), this->getTransformInfoInterface());;
    

    BasicArrayList* viewVector = this->getTransformDomNodes();;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF("Root View Called with: " +viewVector->size(), this, "get(transformInfoInterface)");
    

                                    }
                                

    std::string rootView = rootComponentInterface->view();;
    

    std::string startXMLHeader = "<xsl:text disable-output-escaping=\"yes\" ><![CDATA[";;
    

    std::string endXMLHeader = "]]></xsl:text>";;
    

    int32_t size = viewVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    TransformInfoDomNode* objectConfigTransformInfoDomNode = dynamic_cast<TransformInfoDomNode*>(viewVector->get(index));;
    

    std::string templateKey = objectConfigTransformInfoDomNode->getReplaceKey();;
    

    TransformInterface* componentInterface = TransformFactory::getInstance()->getInstance(abeClientInformation, objectConfigTransformInfoDomNode->getTransformInfoInterface()->getName(), this->getTransformInfoInterface());;
    

    std::string replacementViewString = componentInterface->view();;
    
replacementViewString= DocumentToNode::convertDocumentToNodeString(replacementViewString);
    
stringBuffer->delete(0, stringBuffer->length());
    
stringBuffer->append(startXMLHeader);
    
stringBuffer->append(replacementViewString);
    
stringBuffer->append(endXMLHeader);
    

    std::string templateValue = stringBuffer->toString();;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->VIEW))
                        
                                    {
                                    stringBuffer->delete(0, stringBuffer->length());
    
stringBuffer->append("Replacing: ");
    
stringBuffer->append(templateKey);
    
stringBuffer->append(" with ");
    
stringBuffer->append(templateValue);
    
this->logUtil->putF(stringBuffer->toString(), this, "get()");
    

                                    }
                                

    Replace* replace = new Replace(templateKey, templateValue);;
    
rootView= replace->all(rootView);
    
}


                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF("End: Result of a compound view: " +rootView, this, "get()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return rootView;
    
}


                //@Throws(Exception.constructor)
            
    public: InputStream* createInputStream(){

    std::vector<int8_t> completeTemplateViewBytes = this->get().getBytes();;
    

    ByteArrayInputStream* bais = new ByteArrayInputStream(completeTemplateViewBytes);;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF("Template: " +(String.fromCharCode(...completeTemplateViewBytes)).toString(), this, "createInputStream()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return bais;
    
}


};

            

