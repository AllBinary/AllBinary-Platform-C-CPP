
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
        



            #include "../../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoDomNodeView.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfosData.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigData.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "NoTemplateTransformInfoObjectConfig.h"

class InsertTemplateCustomizerTransformInfoObjectConfig: public NoTemplateTransformInfoObjectConfig {

    protected: const LogUtil logUtil = LogUtil::getInstance();

public: InsertTemplateCustomizerTransformInfoObjectConfig(Object transformInfoInterface){
            super(transformInfoInterface);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


public: InsertTemplateCustomizerTransformInfoObjectConfig(Object transformInfoInterface, Object document){
            super(transformInfoInterface, document);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setDocument(this->generate(this->toXmlDoc()));
    
}


public: InsertTemplateCustomizerTransformInfoObjectConfig(Object transformInfoInterface, std::string name, std::string type){
            super(transformInfoInterface, name, type);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setDocument(this->generate(this->toXmlDoc()));
    
}


                //@Throws(Exception.constructor)
            
    public: void set(std::string aParentViewName){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("Setting: " +aParentViewName, this, "set()");
    

                                    }
                                

    Document document = this->toXmlDoc();;
    

    NodeList parentComponentsNodeList = document.getElementsByTagName(TransformInfosData::getInstance().NAME);;
    

                        if(parentComponentsNodeList != 
                                    nullptr
                                 && parentComponentsNodeList.getLength() > 0)
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("Replacing", this, "set()");
    

                                    }
                                

    Node componentNode = parentComponentsNodeList.item(0).getChildNodes().item(0);;
    

                        if(componentNode != 
                                    nullptr
                                )
                        
                                    {
                                    document.removeChild(componentNode);
    

                                    }
                                
parentComponentsNodeList.item(0).appendChild(TransformInfoDomNodeView(aParentViewName).toXmlNode(document));
    

                                    }
                                
                        else {
                            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("Setting", this, "set()");
    

                                    }
                                

    Node objectConfigNode = document.getElementsByTagName(TransformInfoObjectConfigData::getInstance().NAME).item(0);;
    

    Node parentComponentsNode = document.createElement(TransformInfosData::getInstance().NAME);;
    
objectConfigNode.appendChild(parentComponentsNode);
    

    TransformInfoDomNodeView transformInfoDomNodeView = TransformInfoDomNodeView(aParentViewName);;
    
parentComponentsNode.appendChild(transformInfoDomNodeView.toXmlNode(document));
    

                        }
                            
}


};

            

