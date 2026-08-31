
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
        

    private: static const instance: CustomizerUtil = new CustomizerUtil();

    public static CustomizerUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CustomizerUtil.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

private constructor (){

            super();
        }


                //@Throws(Exception.constructor)
            
    public TransformInfoInterface getTransformInfoInterfaceToCustomize(TransformInfoInterface customizerTransformInfoInterface, TransformInfoInterface transformInfoInterface){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("View Name: " +customizerTransformInfoInterface!.getName(), this, "getTransformInfoInterfaceToCustomize()");
    

                                    }
                                

    transformInfoEntityInterface: TransformInfoEntity = TransformInfoEntityBuilder.getInstance()!;;
    

    viewName: string = transformInfoInterface!.getName()!;;
    

    httpTransformInfoInterface: TransformInfoHttpInterface = customizerTransformInfoInterface as TransformInfoHttpInterface;;
    

    customizedTransformInfoInterface: TransformInfoInterface = transformInfoEntityInterface!.get(viewName, httpTransformInfoInterface!.getPropertiesHashMap(), httpTransformInfoInterface!.getPageContext())!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return customizedTransformInfoInterface;
    
}


                //@Throws(Exception.constructor)
            
    public Vector getTransformInfoObjectConfigComponentNodesToCustomize(Object customizerTransformInfoInterface, Object transformInfoInterface){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("View Name: " +customizerTransformInfoInterface!.getName(), this, "getTransformInfoObjectConfigComponentNodesToCustomize()");
    

                                    }
                                

    transformInfoEntityInterface: TransformInfoEntity = TransformInfoEntityBuilder.getInstance()!;;
    

    viewName: string = transformInfoInterface!.getName()!;;
    

    httpTransformInfoInterface: TransformInfoHttpInterface = customizerTransformInfoInterface as TransformInfoHttpInterface;;
    

    customizedTransformInfoInterface: TransformInfoInterface = transformInfoEntityInterface!.get(viewName, httpTransformInfoInterface!.getPropertiesHashMap(), httpTransformInfoInterface!.getPageContext())!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getTransformInfoObjectConfigComponentNodes(customizedTransformInfoInterface);;
    
}


                //@Throws(Exception.constructor)
            
    public Vector getTransformInfoObjectConfigComponentNodes(Object transformInfoInterface){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("View Name: " +transformInfoInterface!.getName(), this, "getTransformInfoObjectConfigComponentNodes()");
    

                                    }
                                

    transformInfoObjectConfigInterface: TransformInfoObjectConfigInterface = transformInfoInterface!.getObjectConfigInterface()!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return transformInfoObjectConfigInterface!.getTransforms();;
    
}


                //@Throws(Exception.constructor)
            
    public Vector getTransformInfoObjectConfigGroupComponentNodes(Object transformInfoInterface){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("View Name: " +transformInfoInterface!.getName(), this, "getTransformInfoObjectConfigComponentNodes()");
    

                                    }
                                

    transformInfoObjectConfigInterface: TransformInfoObjectConfigInterface = transformInfoInterface!.getObjectConfigInterface()!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return transformInfoObjectConfigInterface!.getGroupTransforms();;
    
}


                //@Throws(Exception.constructor)
            
    public insert(TransformInfoInterface transformInfoInterface, DomNodeInterface domNodeInterface){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("View Name: " +transformInfoInterface!.getName(), this, "insert()");
    

                                    }
                                

    transformInfoEntityInterface: TransformInfoEntity = TransformInfoEntityBuilder.getInstance()!;;
    

    allViewsToBeModified: Vector = this.getTransformInfoObjectConfigGroupComponentNodes(transformInfoInterface)!;;
    

    document: Document = DomDocumentHelper.create()!;;
    
document.appendChild(domNodeInterface!.toXmlNode(document));
    

    documentString: string = DomDocumentHelper.toString(document)!;;
    

    stringBuffer: StringMaker = new StringMaker();;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    stringBuffer!.append("Total Views For Modification: ");
    
stringBuffer!.appendint(allViewsToBeModified!.length);
    
stringBuffer!.append(" New Xml/Data: ");
    
stringBuffer!.append(documentString);
    
this.logUtil!.putF(stringBuffer!.toString(), this, "insert()");
    

                                    }
                                
transformInfoInterface!.setData(documentString);
    

    size: int32_t = allViewsToBeModified!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    transformInfo: TransformInfo = allViewsToBeModified!.get(index) as TransformInfo;;
    

    viewNameOfViewToBeModified: string = transformInfo!.getName()!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append(transformInfoInterface!.getName());
    
stringBuffer!.append(" is modifying view: ");
    
stringBuffer!.append(viewNameOfViewToBeModified);
    
this.logUtil!.putF(stringBuffer!.toString(), this, "insert()");
    

                                    }
                                

    httpTransformInfoInterface: TransformInfoHttpInterface = transformInfoInterface as TransformInfoHttpInterface;;
    

    specifiedTransformInfoInterface: TransformInfoInterface = transformInfoEntityInterface!.get(viewNameOfViewToBeModified, httpTransformInfoInterface!.getPropertiesHashMap(), httpTransformInfoInterface!.getPageContext())!;;
    

                        if(specifiedTransformInfoInterface == 
                                    null
                                )
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append(transformInfoInterface!.getName());
    
stringBuffer!.append(" is unable to add data to view: ");
    
stringBuffer!.append(viewNameOfViewToBeModified);
    
stringBuffer!.append(" since it does not exist");
    
this.logUtil!.putF(stringBuffer!.toString(), this, "insert()");
    

                                    }
                                

                                    }
                                
                        else {
                            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF(transformInfoInterface!.getName() +" is adding data to view: " +viewNameOfViewToBeModified, this, "insert()");
    

                                    }
                                

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append(viewNameOfViewToBeModified);
    
stringBuffer!.append(" is changing data in ");
    
stringBuffer!.append(specifiedTransformInfoInterface!.getDataFilePath()!.toString());
    
stringBuffer!.append(" to the following data:\n");
    
stringBuffer!.append(documentString);
    
this.logUtil!.putF(stringBuffer!.toString(), this, "insert()");
    

                                    }
                                
this.write(specifiedTransformInfoInterface, documentString);
    

                        }
                            
}

}


                //@Throws(Exception.constructor)
            
    public write(TransformInfoInterface specifiedTransformInfoInterface, string documentString){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("View Name: " +specifiedTransformInfoInterface!.getName(), this, "write()");
    

                                    }
                                

    transformInfoEntityInterface: TransformInfoEntity = TransformInfoEntityBuilder.getInstance()!;;
    
specifiedTransformInfoInterface!.setData(documentString);
    
transformInfoEntityInterface!.update(specifiedTransformInfoInterface!.toHashMap());
    
}


                //@Throws(Exception.constructor)
            
    public Document getViewDataForComponentsInObjectConfig(Object transformInfoInterface){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("View Name: " +transformInfoInterface!.getName(), this, "getViewDataForComponentsInObjectConfig()");
    

                                    }
                                

    transformInfoObjectConfigInterface: TransformInfoObjectConfigInterface = transformInfoInterface!.getObjectConfigInterface()!;;
    

    allViewsToBeModified: Vector = transformInfoObjectConfigInterface!.getGroupTransforms()!;;
    

    transformInfoEntityInterface: TransformInfoEntity = TransformInfoEntityBuilder.getInstance()!;;
    

    size: int32_t = allViewsToBeModified!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    nextTransformInfoInterface: TransformInfo = allViewsToBeModified!.get(index) as TransformInfo;;
    

    viewNameOfViewToBeModified: string = nextTransformInfoInterface!.getName()!;;
    

    httpTransformInfoInterface: TransformInfoHttpInterface = transformInfoInterface as TransformInfoHttpInterface;;
    

    specifiedTransformInfoInterface: TransformInfoInterface = transformInfoEntityInterface!.get(viewNameOfViewToBeModified, httpTransformInfoInterface!.getPropertiesHashMap(), httpTransformInfoInterface!.getPageContext())!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return specifiedTransformInfoInterface!.getDataDocument();;
    
}




                            throw new Exception("No Components Specified in ObjectConfig");
                    
}


};

            

