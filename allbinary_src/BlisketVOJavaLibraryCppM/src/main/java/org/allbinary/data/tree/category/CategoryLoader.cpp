
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
        



            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/business/category/CategoryData.h>

      
#include <org/allbinary/business/category/CategoryFactoryInterface.h>

      
#include <org/allbinary/business/category/CategoryInterface.h>

      
#include <org/allbinary/business/category/properties/CategoryProperties.h>

      
#include <org/allbinary/business/category/properties/CategoryPropertiesInterface.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/crypt/file/CryptFileReader.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CategoryModifierTree.h"
#include "CategoryLoaderInterface.h"

class CategoryLoader: public CategoryModifierTree: public CategoryLoaderInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

public constructor (CategoryFactoryInterface categoryFactoryInterface){
            super(categoryFactoryInterface);
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.CATEGORY))
                        
                                    {
                                    this.logUtil!.putF(this.commonStrings!.START, this, "CategoryLoader(CategoryFactoryInterface categoryFactoryInterface)");
    

                                    }
                                
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public Document getDoc(CategoryInterface categoryInterface){

        try {
            
                        if(categoryInterface!.getProperties()!.getPath(categoryInterface!.getHierarchy()) != 
                                    null
                                )
                        
                                    {
                                    
                        if(categoryInterface!.getHierarchy()!.getLevel() == 1)
                        
                                    {
                                    
    rootAbFile: AbFile = AbFile.createAbFileFromAbPath(categoryInterface!.getRootFilePath())!;;
    

                        if(!rootAbFile!.isDirectory())
                        
                                    {
                                    rootAbFile!.mkdirs();
    

                        if(!rootAbFile!.isDirectory())
                        
                                    {
                                    


                            throw new Exception("Could Not Create Directory");
                    

                                    }
                                
this.save(categoryInterface);
    

                                    }
                                

                                    }
                                

    fileAbPath: AbPath = categoryInterface!.getFilePath()!;;
    

    cryptFileReader: CryptFileReader = new CryptFileReader(CategoryData.getInstance()!.UNCRYPTED_EXTENSION, CategoryData.getInstance()!.ENCRYPTED_EXTENSION);;
    

    document: Document = DomDocumentHelper.create(cryptFileReader!.get(fileAbPath))!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return document;
    

                                    }
                                
                        else {
                            


                            throw new Exception("Null Category");
                    

                        }
                            

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    
        try {
            categoryInterface!.log();
    

                //: 
} catch(e2) 
            {
this.logUtil!.put("Could Not Log Category", this, "getDoc", e);
    
}

this.logUtil!.put(this.commonStrings!.FAILURE, this, "getDoc", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public CategoryInterface get(CategoryInterface categoryInterface){

        try {
            
    document: Document = this.getDoc(categoryInterface)!;;
    

    categoryNode: Node = DomSearchHelper.getNode(CategoryData.getInstance()!.NAME, document.getChildNodes())!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.addProperties(categoryInterface, categoryNode!.getChildNodes());;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.FAILURE, this, this.commonStrings!.GET, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public CategoryInterface get(Document document){

        try {
            
    categoryNode: Node = DomSearchHelper.getNode(CategoryData.getInstance()!.NAME, document.getChildNodes())!;;
    

    loadedCategoryInterface: CategoryInterface = this.categoryFactoryInterface!.getRootInstanceFromNode(categoryNode)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.addProperties(loadedCategoryInterface, categoryNode!.getChildNodes());;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.FAILURE, this, this.commonStrings!.GET, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public CategoryInterface getAll(CategoryInterface categoryInterface){

        try {
            
    document: Document = this.getDoc(categoryInterface)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getAll(document);;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.FAILURE, this, this.commonStrings!.GET, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    CategoryInterface getAll(Document document){

        try {
            
    categoryNode: Node = DomSearchHelper.getNode(CategoryData.getInstance()!.NAME, document.getChildNodes())!;;
    

    loadedCategoryInterface: CategoryInterface = this.categoryFactoryInterface!.getRootInstanceFromNode(categoryNode)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.addProperties(loadedCategoryInterface, categoryNode!.getChildNodes());;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.FAILURE, this, this.commonStrings!.GET, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    CategoryInterface getAll(CategoryInterface parentCategoryInterface, NodeList categoryNodeList){

        try {
            
                        if(categoryNodeList != 
                                    null
                                )
                        
                                    {
                                    



                        for (
    index: int32_t = 0;index < categoryNodeList!.getLength(); index++)
        {

    categoryNode: Node = categoryNodeList!.item(index)!;;
    

                        if(categoryNode != 
                                    null
                                 && categoryNode!.getNodeName()!.compareTo(CategoryData.getInstance()!.NAME) == 0)
                        
                                    {
                                    
    categoryInterface: CategoryInterface = this.categoryFactoryInterface!.getInstance(parentCategoryInterface!.getHierarchy()!.getRoot(), parentCategoryInterface, categoryNode) as CategoryInterface;;
    
parentCategoryInterface!.addChild(categoryInterface);
    

                                    }
                                
}


                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return parentCategoryInterface;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.FAILURE, this, this.commonStrings!.GET, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    CategoryInterface addProperties(CategoryInterface loadedCategoryInterface, NodeList categoryNodeList){

        try {
            
                        if(categoryNodeList != 
                                    null
                                )
                        
                                    {
                                    



                        for (
    index: int32_t = 0;index < categoryNodeList!.getLength(); index++)
        {

    categoryNode: Node = categoryNodeList!.item(index)!;;
    

                        if(categoryNode != 
                                    null
                                 && categoryNode!.getNodeName()!.compareTo(CategoryData.getInstance()!.NAME) == 0)
                        
                                    {
                                    
    categoryPropertiesInterface: CategoryPropertiesInterface = new CategoryProperties(categoryNode) as CategoryPropertiesInterface;;
    
loadedCategoryInterface!.addChildProperty(categoryPropertiesInterface);
    

                                    }
                                
}


                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return loadedCategoryInterface;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.FAILURE, this, this.commonStrings!.GET, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


};

            

