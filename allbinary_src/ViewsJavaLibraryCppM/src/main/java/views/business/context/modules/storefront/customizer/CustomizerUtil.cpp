
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
        
#include <java/util/Vector.h>

      
#include <org/allbinary/data/tables/transform/info/TransformInfoEntity.h>

      
#include <org/allbinary/data/tables/transform/info/TransformInfoEntityBuilder.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfo.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h>

      
#include <org/w3c/dom/Document.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CustomizerUtil
            : public Object
         {

    private: static CustomizerUtil instance() { return CustomizerUtil(); }

    public: static CustomizerUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CustomizerUtil::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

private: CustomizerUtil(){
}


                //@Throws(Exception.constructor)
            
    public: TransformInfoInterface getTransformInfoInterfaceToCustomize(TransformInfoInterface customizerTransformInfoInterface, TransformInfoInterface transformInfoInterface){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("View Name: " +customizerTransformInfoInterface.getName(), this, "getTransformInfoInterfaceToCustomize()");
    

                                    }
                                

    TransformInfoEntity transformInfoEntityInterface = TransformInfoEntityBuilder::getInstance();;
    

    std::string viewName = transformInfoInterface.getName();;
    

    TransformInfoHttpInterface httpTransformInfoInterface = customizerTransformInfoInterface as TransformInfoHttpInterface;;
    

    TransformInfoInterface customizedTransformInfoInterface = transformInfoEntityInterface.get(viewName, httpTransformInfoInterface.getPropertiesHashMap(), httpTransformInfoInterface.getPageContext());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return customizedTransformInfoInterface;
    
}


                //@Throws(Exception.constructor)
            
    public: Vector getTransformInfoObjectConfigComponentNodesToCustomize(Object customizerTransformInfoInterface, Object transformInfoInterface){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("View Name: " +customizerTransformInfoInterface.getName(), this, "getTransformInfoObjectConfigComponentNodesToCustomize()");
    

                                    }
                                

    TransformInfoEntity transformInfoEntityInterface = TransformInfoEntityBuilder::getInstance();;
    

    std::string viewName = transformInfoInterface.getName();;
    

    TransformInfoHttpInterface httpTransformInfoInterface = customizerTransformInfoInterface as TransformInfoHttpInterface;;
    

    TransformInfoInterface customizedTransformInfoInterface = transformInfoEntityInterface.get(viewName, httpTransformInfoInterface.getPropertiesHashMap(), httpTransformInfoInterface.getPageContext());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getTransformInfoObjectConfigComponentNodes(customizedTransformInfoInterface);;
    
}


                //@Throws(Exception.constructor)
            
    public: Vector getTransformInfoObjectConfigComponentNodes(Object transformInfoInterface){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("View Name: " +transformInfoInterface.getName(), this, "getTransformInfoObjectConfigComponentNodes()");
    

                                    }
                                

    TransformInfoObjectConfigInterface transformInfoObjectConfigInterface = transformInfoInterface.getObjectConfigInterface();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return transformInfoObjectConfigInterface.getTransforms();;
    
}


                //@Throws(Exception.constructor)
            
    public: Vector getTransformInfoObjectConfigGroupComponentNodes(Object transformInfoInterface){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("View Name: " +transformInfoInterface.getName(), this, "getTransformInfoObjectConfigComponentNodes()");
    

                                    }
                                

    TransformInfoObjectConfigInterface transformInfoObjectConfigInterface = transformInfoInterface.getObjectConfigInterface();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return transformInfoObjectConfigInterface.getGroupTransforms();;
    
}


                //@Throws(Exception.constructor)
            
    public: void insert(TransformInfoInterface transformInfoInterface, DomNodeInterface domNodeInterface){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("View Name: " +transformInfoInterface.getName(), this, "insert()");
    

                                    }
                                

    TransformInfoEntity transformInfoEntityInterface = TransformInfoEntityBuilder::getInstance();;
    

    Vector allViewsToBeModified = this->getTransformInfoObjectConfigGroupComponentNodes(transformInfoInterface);;
    

    Document document = DomDocumentHelper::create();;
    
document.appendChild(domNodeInterface.toXmlNode(document));
    

    std::string documentString = DomDocumentHelper::toString(document);;
    

    StringMaker stringBuffer = StringMaker();;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    stringBuffer.append("Total Views For Modification: ");
    
stringBuffer.appendint(allViewsToBeModified.length);
    
stringBuffer.append(" New Xml/Data: ");
    
stringBuffer.append(documentString);
    
this->logUtil.putF(stringBuffer.toString(), this, "insert()");
    

                                    }
                                
transformInfoInterface.setData(documentString);
    

    int32_t size = allViewsToBeModified.length;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    TransformInfo transformInfo = allViewsToBeModified.get(index) as TransformInfo;;
    

    std::string viewNameOfViewToBeModified = transformInfo.getName();;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    stringBuffer.delete(0, stringBuffer.length());
    
stringBuffer.append(transformInfoInterface.getName());
    
stringBuffer.append(" is modifying view: ");
    
stringBuffer.append(viewNameOfViewToBeModified);
    
this->logUtil.putF(stringBuffer.toString(), this, "insert()");
    

                                    }
                                

    TransformInfoHttpInterface httpTransformInfoInterface = transformInfoInterface as TransformInfoHttpInterface;;
    

    TransformInfoInterface specifiedTransformInfoInterface = transformInfoEntityInterface.get(viewNameOfViewToBeModified, httpTransformInfoInterface.getPropertiesHashMap(), httpTransformInfoInterface.getPageContext());;
    

                        if(specifiedTransformInfoInterface == 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    stringBuffer.delete(0, stringBuffer.length());
    
stringBuffer.append(transformInfoInterface.getName());
    
stringBuffer.append(" is unable to add data to view: ");
    
stringBuffer.append(viewNameOfViewToBeModified);
    
stringBuffer.append(" since it does not exist");
    
this->logUtil.putF(stringBuffer.toString(), this, "insert()");
    

                                    }
                                

                                    }
                                
                        else {
                            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF(transformInfoInterface.getName() +" is adding data to view: " +viewNameOfViewToBeModified, this, "insert()");
    

                                    }
                                

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    stringBuffer.delete(0, stringBuffer.length());
    
stringBuffer.append(viewNameOfViewToBeModified);
    
stringBuffer.append(" is changing data in ");
    
stringBuffer.append(specifiedTransformInfoInterface.getDataFilePath().toString());
    
stringBuffer.append(" to the following data:\n");
    
stringBuffer.append(documentString);
    
this->logUtil.putF(stringBuffer.toString(), this, "insert()");
    

                                    }
                                
this->write(specifiedTransformInfoInterface, documentString);
    

                        }
                            
}

}


                //@Throws(Exception.constructor)
            
    public: void write(TransformInfoInterface specifiedTransformInfoInterface, std::string documentString){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("View Name: " +specifiedTransformInfoInterface.getName(), this, "write()");
    

                                    }
                                

    TransformInfoEntity transformInfoEntityInterface = TransformInfoEntityBuilder::getInstance();;
    
specifiedTransformInfoInterface.setData(documentString);
    
transformInfoEntityInterface.update(specifiedTransformInfoInterface.toHashMap());
    
}


                //@Throws(Exception.constructor)
            
    public: Document getViewDataForComponentsInObjectConfig(Object transformInfoInterface){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("View Name: " +transformInfoInterface.getName(), this, "getViewDataForComponentsInObjectConfig()");
    

                                    }
                                

    TransformInfoObjectConfigInterface transformInfoObjectConfigInterface = transformInfoInterface.getObjectConfigInterface();;
    

    Vector allViewsToBeModified = transformInfoObjectConfigInterface.getGroupTransforms();;
    

    TransformInfoEntity transformInfoEntityInterface = TransformInfoEntityBuilder::getInstance();;
    

    int32_t size = allViewsToBeModified.length;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    TransformInfo nextTransformInfoInterface = allViewsToBeModified.get(index) as TransformInfo;;
    

    std::string viewNameOfViewToBeModified = nextTransformInfoInterface.getName();;
    

    TransformInfoHttpInterface httpTransformInfoInterface = transformInfoInterface as TransformInfoHttpInterface;;
    

    TransformInfoInterface specifiedTransformInfoInterface = transformInfoEntityInterface.get(viewNameOfViewToBeModified, httpTransformInfoInterface.getPropertiesHashMap(), httpTransformInfoInterface.getPageContext());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return specifiedTransformInfoInterface.getDataDocument();;
    
}




                            throw Exception("No Components Specified in ObjectConfig");
                    
}


};

            

