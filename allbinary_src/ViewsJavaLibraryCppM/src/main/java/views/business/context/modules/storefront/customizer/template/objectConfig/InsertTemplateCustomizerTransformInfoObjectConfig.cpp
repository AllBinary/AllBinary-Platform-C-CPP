
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
        



        #ifndef VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_TEMPLATE_OBJECTCONFIG_INSERTTEMPLATECUSTOMIZERTRANSFORMINFOOBJECTCONFIG_CPP
        #define VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_TEMPLATE_OBJECTCONFIG_INSERTTEMPLATECUSTOMIZERTRANSFORMINFOOBJECTCONFIG_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "views/business/context/modules/storefront/customizer/template/objectConfig/InsertTemplateCustomizerTransformInfoObjectConfig.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoDomNodeView.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfosData.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigData.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "views/business/context/modules/storefront/customizer/template/objectConfig/NoTemplateTransformInfoObjectConfig.h"


InsertTemplateCustomizerTransformInfoObjectConfig::InsertTemplateCustomizerTransformInfoObjectConfig(TransformInfoInterface* transformInfoInterface) : NoTemplateTransformInfoObjectConfig(transformInfoInterface), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


InsertTemplateCustomizerTransformInfoObjectConfig::InsertTemplateCustomizerTransformInfoObjectConfig(TransformInfoInterface* transformInfoInterface, Document* document) : NoTemplateTransformInfoObjectConfig(transformInfoInterface, document), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setDocument(this->generate(this->toXmlDoc()));
    
}


InsertTemplateCustomizerTransformInfoObjectConfig::InsertTemplateCustomizerTransformInfoObjectConfig(TransformInfoInterface* transformInfoInterface, std::string name, std::string type) : NoTemplateTransformInfoObjectConfig(transformInfoInterface, name, type), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setDocument(this->generate(this->toXmlDoc()));
    
}


                //@Throws(Exception.constructor)
            
    auto InsertTemplateCustomizerTransformInfoObjectConfig::set(std::string aParentViewName) -> void{

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Setting: ") +JavaString::valueOf(aParentViewName), this, "set()");
    

                                    }
                                

    Document* document = this->toXmlDoc();;
    

    NodeList* parentComponentsNodeList = document->getElementsByTagName(TransformInfosData::getInstance()->NAME);;
    

                        if(parentComponentsNodeList != 
                                    nullptr
                                 && parentComponentsNodeList->getLength() > 0)
                        
                                    {
                                    
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF("Replacing", this, "set()");
    

                                    }
                                

    Node* componentNode = parentComponentsNodeList->item(0)->getChildNodes()->item(0);;
    

                        if(componentNode != 
                                    nullptr
                                )
                        
                                    {
                                    document->removeChild(componentNode);
    

                                    }
                                
parentComponentsNodeList->item(0)->appendChild((new TransformInfoDomNodeView(aParentViewName))->toXmlNode(document));
    

                                    }
                                
                        else {
                            
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF("Setting", this, "set()");
    

                                    }
                                

    Node* objectConfigNode = document->getElementsByTagName(TransformInfoObjectConfigData::getInstance()->NAME)->item(0);;
    

    Node* parentComponentsNode = document->createElement(TransformInfosData::getInstance()->NAME);;
    
objectConfigNode->appendChild(parentComponentsNode);
    

    TransformInfoDomNodeView* transformInfoDomNodeView = new TransformInfoDomNodeView(aParentViewName);;
    
parentComponentsNode->appendChild(transformInfoDomNodeView->toXmlNode(document));
    

                        }
                            
}




        #endif //VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_TEMPLATE_OBJECTCONFIG_INSERTTEMPLATECUSTOMIZERTRANSFORMINFOOBJECTCONFIG_CPP
